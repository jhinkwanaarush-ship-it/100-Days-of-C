/*
Return a structure containing top student's details from a function.
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
Explanation 1:
The function returns the structure containing the highest scoring student's details.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that returns the topper's structure
struct Student findTopper(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   // returning structure
}

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Call function
    struct Student topper = findTopper(s, n);

    // Output
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
