#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortArray(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the structures
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
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

    // Sort the array of structures
    sortArray(students, size);

    // Display the sorted array of structures
    printf("\nSorted Array of Structures (based on marks in descending order):\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}