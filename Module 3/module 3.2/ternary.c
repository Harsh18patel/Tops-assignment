#include<stdio.h>
void main(){
    int i;
    printf("enter the number=");
    scanf("%d",&i);
    if((i%2==0)?printf("%d is a even number",i):printf("%d is a odd number",i));
}