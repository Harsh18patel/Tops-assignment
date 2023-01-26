#include<stdio.h>
void main(){
    int j;
    for(int i=1;i<=5;i++){
        for(j=1;j<=i;j++)
    {
            printf("%d",j%2);
        }
        printf("\n");
        
    }
}