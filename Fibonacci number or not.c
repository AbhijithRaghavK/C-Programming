#include <stdio.h>

int main() {
    int prev=0,current=1,i,n,temp;
    printf("Enter n : ");
    scanf("%d",&n);
    if (n == 0) {
        printf("It is a Fibonacci number");
        return 0;
    }    
    for(i=1;i<=n+1;i++){
        if(current==n){
            printf("It is fibonacci number");
            return 0;
        }
        
            
        temp=current;
        current+=prev;
        prev=temp;
        
    }
    
    printf("It is not fibonacci number");
    
    return 0;
}
