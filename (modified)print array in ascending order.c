#include <stdio.h>

int main() {
    int i,n,temp,j;
    char term;

    printf("Enter no. of array elements: ");
    while(scanf("%d%c", &n, &term) != 2 || term != '\n' || n <= 0) {
        printf("Invalid argument! Enter no. of array elements: ");
        while(getchar() != '\n');
    }

    int a[n];

    for(i=0;i<n;i++) {
        printf("Enter the %d number: ", i+1);
        while(scanf("%d%c", &a[i], &term) != 2 || term != '\n') {
            printf("Invalid input! Please enter an integer: ");
            while(getchar() != '\n');
        }
    }

    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Ascending order: ");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
