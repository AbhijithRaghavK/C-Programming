#include <stdio.h>

int prime(int a) {
    int i, flag = 0;
    
    if (a <= 1) {
        flag = 0;
    } else if (a == 2) {
        flag = 1;
    } else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                flag = 0;
                break;
            } else {
                flag = 1;
            }
        }
    }
    
    if (flag == 1) {
        printf("%d ", a);
    }
}

int main() {
    int i, n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++) {
        prime(i);
    }
    
    return 0;
}
