#ifndef __basic_h__
#define __basic_h__

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int addition(double a,double b) {
double c = a + b;
printf("%lf + %lf = %lf\n",a,b,c);
return c;
}

int subtraction(double a,double b) {
double c = a - b;
printf("%lf - %lf = %lf\n",a,b,c);
return c;
}

int multiplication(double a,double b) {
double c = a * b;
printf("%lf * %lf = %lf\n",a,b,c);
return c;
}

int division(double a,double b) {
double c = a / b;
printf("%lf / %lf = %lf\n",a,b,c);
return c;
}
#endif 
