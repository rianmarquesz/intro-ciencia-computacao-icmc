#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    const double g = 9.81;
    const double pi = 3.141592653589793;
    double vel;
    double ang;

    scanf("%lf %lf", &vel, &ang);

    double t;
    double a;

    double rad;
    rad = ((ang * pi) / 180.0);

    t = 2 * vel * sin(rad) / g;
    a = vel*vel * sin(rad*2.0) / g;

    printf("Tempo de Voo: %.2f s \nAlcance Maximo: %.2f m", t, a);
    return 0;
}
