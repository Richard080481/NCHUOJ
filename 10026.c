#include <stdio.h>
#include <math.h>
void main(){
    float a;
    float b; 
    float c;
    scanf("%f %f %f", &a, &b, &c);
    float s = (a + b + c)/2;
    printf("%.2f", sqrt(s*(s-a)*(s-b)*(s-c)));
}