/*
Find and print the student with the highest marks.
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
Explanation 1:
Program compares marks of all students and prints the one with the highest.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    // Find topper
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Output
    printf("Topper: %s (Marks: %d)\n", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
