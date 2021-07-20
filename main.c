#include<stdio.h>

int main()
{
    double a, b, c, d, e, f, g, h; // initialization eight varible
    printf("please enter number one: ") ;//asking user enter number one
scanf("%lf", &a) ;
printf("please enter number two: ") ;//asking user enter number two
scanf("%lf", &b) ;
printf("please enter number three: ") ;//asking user enter number three
scanf("%lf", &c) ;
printf("please enter number four: ") ;//asking user enter number four
scanf("%lf", &d) ;
printf("please enter number five: ") ;//asking user enter number five
scanf("%lf", &e) ;
printf("please enter number six: ") ;//asking user enter number six
scanf("%lf", &f) ;
printf("please enter number seven: ") ;//asking user enter number seven
scanf("%lf", &g) ;
printf("please enter number eight: ") ;//asking user enter number eight
scanf("%lf", &h) ;
double max =a;// assume first number is max number
if(max<b)//<-------1   ///in every if condition check if any number bigger than current max and if bigger this number become current max and continue until if condition end
{
max=b;
}
if(max<c)//<-------2
{
max=c;
}
if(max<d)//<-------3
{
max=d;
}
if(max<e)//<-------4
{
max=e;
}
if(max<f)//<-------5
{
max=f;
}
if(max<g)//<-------6
{
max=g;
}
if(max<h)//<-------7
{
max=h;
}
printf("max value between eight number: %lf", max) ;
    return 0;
}

