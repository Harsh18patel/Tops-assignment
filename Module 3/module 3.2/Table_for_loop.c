#include<stdio.h>
void main(){
    int i,n;
    printf("Enter Which Table Do You Want = ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d  = %d",n,i,n*i);

    }
}