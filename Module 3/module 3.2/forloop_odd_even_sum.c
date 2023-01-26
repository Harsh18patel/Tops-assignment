#include<stdio.h>
void main(){
    int n;
    int sum=0;

    printf("enter the number n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){

        
        sum=sum+i;
        printf("\n%d",i);
        }
    }
        printf("\n sum of even number %d",sum);
    


    int a;
    

    printf("\nenter the number a=");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            printf("\n%d",i);
        }
    }
    printf("\n sum of even number %d",sum);
}