/*Print all enum names and integer values using a loop.
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
Explanation 1:
Iterating through enum values prints each constant with its assigned integer
*/

#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main() {
    enum Color c;

    // Loop from first enum value to last
    for (c = RED; c <= GREEN; c++) {

        switch (c) {
            case RED:
                printf("RED=%d\n", c);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", c);
                break;
            case GREEN:
                printf("GREEN=%d\n", c);
                break;
        }
    }

    return 0;
}
