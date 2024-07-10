#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min, max, secretNumber, guess, attempts = 0;
    char response;

    printf("Welcome to the guessing game!\n");
    printf("Please enter the minimum and maximum values: ");
    scanf("%d%d", &min, &max);

    printf("Enter a number for the computer to guess (This will be a secret): ");
    scanf("%d", &secretNumber);

    srand(time(NULL));

    while(1) {
        attempts++;
        if (attempts > 10) {
            printf("Sorry, you took too many tries.\n");
            return 0;
        }

        guess = rand() % (max - min + 1) + min;

        printf("Guess %d: %d\n", attempts, guess);
        if(guess == secretNumber || attempts >= 10){
        break;
        }
        printf("Is your number greater (g) or less (l) than %d? ", guess);
        scanf(" %c", &response);

        if (response == 'g' || response == 'G') {
            min = guess + 1;
        } else if (response == 'l' || response == 'L') {
            max = guess - 1;
       
        }
        
    } 

    if (guess == secretNumber) {
        printf("Found it! The number is %d.\n", guess);
        printf("It took me %d tries.\n", attempts);
    } 
    

    return 0;
}
