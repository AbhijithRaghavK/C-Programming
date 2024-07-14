//Print numbers in words in reverse order 
#include <stdio.h>

int main() {
    int n,rem=0,rev=0;
    printf("Enter n :");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        switch(rem){
            case 0 :printf("ZERO ");break;
            case 1 :printf("ONE ");break; 
            case 2 :printf("TWO ");break; 
            case 3 :printf("THREE ");break; 
            case 4 :printf("FOUR ");break; 
            case 5 :printf("FIVE ");break; 
            case 6 :printf("SIX ");break; 
            case 7 :printf("SEVEN ");break; 
            case 8 :printf("EIGHT ");break; 
            case 9 :printf("NINE ");break; 
            
        }
    }
    
     printf("\n%d\n",rev);   
    


    return 0;
}
