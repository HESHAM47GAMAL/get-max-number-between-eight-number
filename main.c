#include<stdio.h>

int main()
{
    double num1, num2, num3, num4, num5, num6, num7,num8; // initialization eight varible
    printf("please enter number one: ") ;//asking user enter number one
scanf("%lf", &num1) ;
printf("please enter number two: ") ;//asking user enter number two
scanf("%lf", &num2) ;
printf("please enter number three: ") ;//asking user enter number three
scanf("%lf", &num3) ;
printf("please enter number four: ") ;//asking user enter number four
scanf("%lf", &num4) ;
printf("please enter number five: ") ;//asking user enter number five
scanf("%lf", &num5) ;
printf("please enter number six: ") ;//asking user enter number six
scanf("%lf", &num6) ;
printf("please enter number seven: ") ;//asking user enter number seven
scanf("%lf", &num7) ;
printf("please enter number eight: ") ;//asking user enter number eight
scanf("%lf", &num8) ;
double max =num1;// assume first number is max number
if(max<num2)//<-------1   ///in every if condition check if any number bigger than current max and if bigger this number become current max and continue until if condition end
{
max=num2;
}
if(max<num3)//<-------2
{
max=num3;
}
if(max<num4)//<-------3
{
max=num4;
}
if(max<num5)//<-------4
{
max=num5;
}
if(max<num6)//<-------5
{
max=num6;
}
if(max<num7)//<-------6
{
max=num7;
}
if(max<num8)//<-------7
{
max=num8;
}
printf("max value between eight number: %lf", max) ;
    return 0;
}
