#include <stdio.h>
#include <unistd.h>
#include <math.h>
int func(int n){
    int sum=0,rem;
    while(n>0){
        rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
        
    }
    
    return sum;
}
int main(){
    int n,n1;
    printf("Enter n :");
    scanf("%d",&n);
    n1=n;
    n=func(n);
    printf("Sum of cubes of each digit =%d ",n);
    if (n==n1)
        printf(",Hence %d is an armstrong number.",n1);
    else
        printf(",Hence %d is not an armstrong number.",n1);
        
    return 0;
}