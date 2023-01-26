#include<stdio.h>
void main(){
    float p;
    float t;
    float r;
    printf("enter the value of principal amount p=");
    scanf("%f",&p);
    
    printf("enter the value of loan period t=");
    scanf("%f",&t);
    printf("enter the value of rate of interest r=");
    scanf("%f",&r);

    //simple interest= p*t*r/100
    printf("simple intrest is=%f",(float)p*t*r/100);
}