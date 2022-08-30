#include <stdio.h>

void main(){
    //a1x(+/−)b1y=c1
    //a2x(+/−)b2y=c2
    float x1;
    float y1;
    float cons1;
    float x2;
    float y2;
    float cons2;
    float ansx;
    float ansy;
    scanf("%fx%fy=%f\n%fx%fy=%f", &x1, &y1, &cons1, &x2, &y2, &cons2);
    ansx = (cons1 * y2 - y1 * cons2) / (x1 * y2 - y1 * x2);
    ansy = (x1 * cons2 - cons1 * x2) / (x1 * y2 - y1 * x2);
    if(ansx == 0){
        ansx = 0;
    }
    if(ansy == 0){
        ansy = 0;
    }
    printf("x=%.2f,y=%.2f", ansx, ansy);
}