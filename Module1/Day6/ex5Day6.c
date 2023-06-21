#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(struct Student* students, int size, const char* name) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Rollno: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found with the name: %s\n", name);
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Create an array of structures dynamically
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    // Initialize the array of structures

    // Prompt the user to enter the name to search for
    char name[20];
    printf("Enter the name to search: ");
    scanf("%s", name);

    // Perform search operation based on the name
    searchByName(students, size, name);

    // Free dynamically allocated memory
    free(students);

    return 0;
}
