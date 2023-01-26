#include<stdio.h>
void main(){
    int no=1234;
    int rem1=no%10;
    int sum;
    printf("last no..%d",rem1);
    int rem;
    while(no!=0)
    {
        rem=no%10;
        no=no/10;
    }
    printf("\n first no...%d",rem);

    sum=rem+rem1;
    printf("\nsum of first and last no is ...%d",sum);
}

