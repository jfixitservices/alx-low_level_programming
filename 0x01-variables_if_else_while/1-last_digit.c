#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print the last digit
 * Return: 0 (success)
 */
int main() {
    int n;
    srand(time(0));  // Initialize random seed

    n = rand();  // Assign a random number to n

    printf("Last digit of %d is ", n);

    int lastDigit = n % 10;  // Get the last digit of n

    if (lastDigit > 5) {
        printf("and is greater than 5\n");
    } else if (lastDigit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
