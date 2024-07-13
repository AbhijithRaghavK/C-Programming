#include <stdio.h>

int main() {
    int prev=0,current=1,i,n,temp;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d ",prev);
        temp=current;
        current+=prev;
        prev=temp;
    }
    
    
    return 0;
}
