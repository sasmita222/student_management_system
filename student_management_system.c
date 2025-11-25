#include <stdio.h>

#define MAX_STUDENTS 100   // maximum students

// structure to store student data
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;        // how many students stored
    int choice;
    int i;

    while (1) {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= MAX_STUDENTS) {
                printf("Cannot add more students. List is full.\n");
            } else {
                printf("Enter roll number: ");
                scanf("%d", &students[count].roll);

                printf("Enter name: ");
                scanf(" %[^\n]", students[count].name);  // read string with spaces

                printf("Enter marks: ");
                scanf("%f", &students[count].marks);

                printf("Student added successfully!\n");
                count++;
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No students to display.\n");
            } else {
                printf("\n--- Student List ---\n");
                for (i = 0; i < count; i++) {
                    printf("Student %d:\n", i + 1);
                    printf("Roll : %d\n", students[i].roll);
                    printf("Name : %s\n", students[i].name);
                    printf("Marks: %.2f\n\n", students[i].marks);
                }
            }
        } else if (choice == 3) {
            printf("Exiting program. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}
