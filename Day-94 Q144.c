/*Write a function that accepts a structure as parameter and prints its members.
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
Explanation 1:
The structure is passed by value to a function that prints its data.
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    // Input
    printf("Name: ");
    scanf("%s", st.name);

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("Marks: ");
    scanf("%d", &st.marks);

    // Function call
    printStudent(st);

    return 0;
}
