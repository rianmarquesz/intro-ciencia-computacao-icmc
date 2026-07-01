#include <stdio.h>
#include <stdlib.h>

int main() {

    double a, b, c, x;
    double q, p, base, altura, area;
    double n;

    scanf("%lf %lf %lf", &a, &b, &c);
    scanf("%lf %lf", &p, &q);
    scanf("%lf", &n);

    base = (q - p) / n;
    area = 0, altura = 0;

    for(int i = 1; i <= n; i++){
        x = p + (i - 1) * base;
        altura = a*x*x + b*x + c;
        area += altura * base;
    }

    printf("%.2f", area);
    return 0;
}
