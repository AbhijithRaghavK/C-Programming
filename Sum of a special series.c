// Sum of the series 1/2! + 2/3! + 3/4! + 4/5! +....
#include <stdio.h>

int fact(int a) {
    int i, fact = 1;
    for (i = 1; i <= a; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, i, facto;
    float sum = 0;
    char term;
    printf("Enter number of terms in sequence: ");
    while(1){
    if (scanf("%d%c", &n,&term)!=2 || term!='\n') {
        while(getchar()!='\n'){
            printf("Invalid input!!\nEnter number of terms in sequence: ");
        }
    }else{
        break;
    }
    }
    for (i = 1; i <= n; i++) {
        facto = fact(i + 1);
        sum = sum + ((float)i / facto);
    }

    printf("Sum of the series up to %d terms = %f\n", n, sum);
    return 0;
}
