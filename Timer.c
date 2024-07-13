#include <stdio.h>
#include <unistd.h>

int main(){
    int n,i;
    char a;
    printf("Timer()  :");
    scanf("%d",&n);
    printf("If seconds press (s),minutes press(m),hours press(h) :");
    scanf(" %c",&a);
    if(a=='s'){
        i=n;}
    else if(a=='m'){
        i=n*60;}
    else if(a=='h'){
        i=n*3600;}
    else{
        printf("Invalid ");
        return 0;
        }
    while(i>=0){
        printf("%d\n",i);
        i--;
        sleep(1);
    }
    
    
    
    return 0;
}