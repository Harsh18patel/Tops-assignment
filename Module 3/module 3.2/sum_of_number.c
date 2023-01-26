#include<stdio.h>
void main(){
    int no=4567;
    int sum;
    int rem;
    while(no!=0)
    {
        rem=no%10;
        no=no/10;
    sum=rem+sum;
    }
    
    printf("\nsum of given no is ...%d",sum);
}