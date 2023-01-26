#include<stdio.h>
void main(){
    int fact=1;
    int i,n;

    printf("\n enter the number =");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    
        fact=fact*i;
    
    printf("\n factorail number is %d",fact);
    }
}