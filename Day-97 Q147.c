/*
Store employee data in a binary file using fwrite() and read using fread().
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
Explanation 1:
Demonstrates writing and reading structures using binary file handling functions.
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    // --------- WRITE TO BINARY FILE ----------
    fp = fopen("employee.dat", "wb");  // open for writing in binary
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input employee data
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Write structure to file
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);


    // --------- READ FROM BINARY FILE ----------
    fp = fopen("employee.dat", "rb");  // open for reading in binary
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    // Output read data
    printf("\n--- Employee Details Read From File ---\n");
    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}
