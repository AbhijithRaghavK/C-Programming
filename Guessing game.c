#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int b, a, i, N;
    char c;

    printf("Welcome to guessing game\nEnter Maximum guess value: ");
    scanf("%d", &N);

    srand(time(NULL));  // Initialize random number generator
    b = rand() % N + 1;

    for (i = 0; i < 3; i++) {
        printf("Please type your guess (0-%d): ", N);
        scanf("%d", &a);

        if (a == b) {
            printf("Correct...\nYou have done it in %d tries\n", i + 1);
            break;
        } else {
            printf("Try again\n");
            if (b > a) {
                printf("The number is greater than %d\n", a);
            } else {
                printf("The number is less than %d\n", a);
            }
        }

        printf("Press y to continue: ");
        while ((getchar()) != '\n');
        scanf("%c", &c);
        if (c != 'y' && c != 'Y') {
            break;
        }
    }

    return 0;
}
