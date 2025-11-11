#include <stdio.h> 
#include <string.h> 
 
struct Student { 
    int roll; 
    char name[50]; 
    char attendance; 
}; 
 
int main() { 
    struct Student s[100]; 
    int n, choice, i; 
 
    printf("Enter number of students: "); 
    scanf("%d", &n); 
 
    for (i = 0; i < n; i++) { 
        printf("\nEnter details of student %d\n", i + 1); 
        printf("Enter Roll Number: "); 
        scanf("%d", &s[i].roll); 
        printf("Enter Name: "); 
        scanf("%s", s[i].name); 
        s[i].attendance = 'A'; 
    } 
 
    do { 
        printf("\n===== Attendance Management System =====\n"); 
        printf("1. Mark Attendance\n"); 
        printf("2. View Attendance\n"); 
        printf("3. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) { 
            case 1: 
                for (i = 0; i < n; i++) { 
                    printf("Student %s (Roll %d): ", s[i].name, s[i].roll); 
                    scanf(" %c", &s[i].attendance); 
                } 
                break; 
            case 2: 
                printf("\nAttendance Report:\n"); 
                printf("Roll\tName\tStatus\n"); 
                for (i = 0; i < n; i++) { 
                    printf("%d\t%s\t%c\n", s[i].roll, s[i].name, s[i].attendance); 
                } 
                break; 
            case 3: 
                printf("\nExiting program...\n"); 
                break; 
default: 
printf("Invalid choice!\n"); 
} 
} while (choice != 3); 
return 0; 
}