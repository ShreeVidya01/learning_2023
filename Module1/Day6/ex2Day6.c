#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* student, int size) {
    for (int i = 0; i < size; i++) {
        student[i].rollno = 0;
        strcpy(student[i].name, "");
        student[i].marks = 0.0;
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Create an array of structures dynamically
    struct Student* student = (struct Student*)malloc(size * sizeof(struct Student));

    // Initialize the array of structures
    initializeArray(student, size);

    // Display the array of structures
    printf("\nArray of Structures:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Rollno: %d\n", student[i].rollno);
        printf("Name: %s\n", student[i].name);
        printf("Marks: %.2f\n", student[i].marks);
        printf("\n");
    }

    // Free dynamically allocated memory
    free(student);

    return 0;
}