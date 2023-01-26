#include<stdio.h>
void main(){
    float year,days;
    printf("enter the year to convert into days=");
    scanf("%f",&year);
    printf("enter the days to convert into year=");
    scanf("%f",&days);
    printf("\nconveted value of year into days=%f",year*365);
      printf("\nconveted value of year into days=%f",days/365);
}