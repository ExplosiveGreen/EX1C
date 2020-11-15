#include "stdio.h"
#include "myMath.h"

int main(){
double x,f1,f2,f3;
printf("Please inset a real number: ");
scanf("%lf",&x);
f1=sub(add(Exponent(x),Power(x,3)),2);
f2=add(mul(3,x),mul(2,Power(x,2)));
f3=sub(div(mul(4,Power(x,3)),5),mul(2,x));
f1*=10000;
f2*=10000;
f3*=10000;
printf("the value of f(x)=e^x + x^3 -2 at the point %lf is: %10.4lf\n",x,((int)f1)/10000.0);
printf("the value of f(x)=3x+2x^2 at the point %lf is: %10.4lf\n",x,((int)f2)/10000.0);
printf("the value of f(x)=(4x^3)/5 -2x at the point %lf is: %10.4lf\n",x,((int)f3)/10000.0);
return 0;
}