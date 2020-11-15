#include "myMath.h"
#include <stdio.h>
double Exponent(int x){
return Power(2.71828182846,x);
}
double Power(double x,int y){
double result=1;
while(y>0){
result*=x;
y--;
}
while(y<0){
result*=1/x;
y++;
}
return result;
}