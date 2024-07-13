#include <stdio.h>
#include <unistd.h>

int main(){
    int n,i,sum=0,rem;
    printf("Enter n :");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
        
        
    }
    printf("%d",sum);
    
    return 0;
}