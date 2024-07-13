#include <stdio.h>

int main() {
    int age, flag;
    char gender, maritalstatus;
    flag = 0;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Enter Gender (m/f): ");
        scanf(" %c", &gender); 

        if (age >= 21 && gender == 'm') {
            printf("Enter Marital Status (u/m): ");
            scanf(" %c", &maritalstatus);

            if (maritalstatus == 'u') {
                flag = 1;
            }

        } else if (gender == 'f') {
            printf("Enter Marital Status (u/m): ");
            scanf(" %c", &maritalstatus);

            if (maritalstatus == 'u') {
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        printf("You are not eligible for Marriage\n");
    } else {
        printf("You are eligible for Marriage\n");
    }

    return 0;
}
