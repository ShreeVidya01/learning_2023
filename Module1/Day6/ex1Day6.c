#include<stdio.h>
#include<string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

void display(struct Student* student) {
    printf("Roll No: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n\n", student->marks);
}

int main(){
    int size;
    printf("enter the number of students");
    scanf("%d",&size);

    struct Student student[size];


    printf("Enter student details (rollno name marks):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &student[i].rollno);
        getchar();  // Clear the newline character from the input buffer
        scanf("%[^\n]", student[i].name);
        getchar();  // Clear the newline character from the input buffer
        scanf("%f", &student[i].marks);
        getchar();  // Clear the newline character from the input buffer
    }

    
   printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        display(&student[i]);
    }
    
    return 0;
}
