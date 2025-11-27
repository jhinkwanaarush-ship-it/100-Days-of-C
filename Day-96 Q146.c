/*Create Employee structure with nested Date structure for joining date and print details.
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
Explanation 1:
Nested structure Date is used inside Employee structure to represent joining date.
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join_date;   // nested structure
};

int main() {
    struct Employee e;

    // Input
    printf("Name: ");
    scanf("%s", e.name);

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join_date.day, &e.join_date.month, &e.join_date.year);

    // Output
    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id,
           e.join_date.day, e.join_date.month, e.join_date.year);

    return 0;
}
