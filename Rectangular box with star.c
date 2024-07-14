
#include <stdio.h>

int main() {
    int i,j,k,n;
    printf("Enter n :");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("*");
    }
    printf("\n");
    for (i=2;i<=5;i++){
        printf("*");
        for (j=2;j<=n-1;j++){
            printf(" ");}
        printf("*\n");
        
    }
    for (i=1;i<=n;i++){
        printf("*");
    }
    
        
    


    return 0;
}
