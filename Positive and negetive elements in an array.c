//Positive and negetive elements in an array
#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter no. of array elements :");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        printf("Enter the %d number : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nPositive numbers : ");
    for(i=0;i<n;i++){
        if(a[i]>=0){
            printf("%d ",a[i]);
        }
        }
    printf("\nNegetive numbers : ");
    for(i=0;i<n;i++){
        if(a[i]<0){
            printf("%d ",a[i]);
        }    
    }

    return 0;
}