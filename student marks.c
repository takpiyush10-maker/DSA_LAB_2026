#include <stdio.h>
#include <stdlib.h>

// typedef creates our own data type named Student.
typedef struct {
    int roll;
    char name[50];
    int marks;
    float percentage;
} Student;

int main(void) {
    int numberOfStudents, i;
    Student *student;

    printf("Enter number of students: ");
    scanf("%d", &numberOfStudents);

    // malloc creates memory while the program is running.
    student = malloc(numberOfStudents * sizeof(Student));

    // Always check whether memory was allocated.
    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Store details for every student.
    for (i = 0; i < numberOfStudents; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &student[i].roll);

        printf("Name: ");
        scanf("%49s", student[i].name);

        printf("Marks out of 500: ");
        scanf("%d", &student[i].marks);

        student[i].percentage = (student[i].marks / 500.0f) * 100;
    }

    // Print student details.
    printf("\n--- Student Details ---\n");
    for (i = 0; i < numberOfStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll number: %d\n", student[i].roll);
        printf("Name: %s\n", student[i].name);
        printf("Marks: %d\n", student[i].marks);
        printf("Percentage: %.2f%%\n", student[i].percentage);
    }

    // Release the dynamically allocated memory after use.
    free(student);

    return 0;
}
