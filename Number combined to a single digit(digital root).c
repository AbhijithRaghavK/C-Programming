#include <stdio.h>
#include <unistd.h>
int func(int n){
    int sum=0,rem;
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
        
    }
    printf("%d\n",sum);
    return sum;
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);

    while(n>=10){
        n=func(n);
    }
    printf("Number combined to a single digit : %d ",n);
    return 0;
}