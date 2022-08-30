#include <stdio.h>
#include <math.h>
void main(){
    double x1;
    double y1;
    double x2;
    double y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%.4f", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}