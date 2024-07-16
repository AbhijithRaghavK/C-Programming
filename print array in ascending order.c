//print array in ascending order
#include <stdio.h>

int main()
{
    int i,n=5,temp,j;
    printf("Enter no. of array elements :");
    scanf("%d",&n);
    int a[n];
    
    for (i=0;i<n;i++){
        printf("Enter the %d number : ",i+1);
        scanf("%d",&a[i]);
    }
    
    for (i=0;i<n;i++){
      for(j=0;j<i;j++){    
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
        }
    }
    printf("Ascending order : "); 
    for (i=0;i<n;i++){
        
        printf("%d ",a[i]);
    }

    return 0;
}