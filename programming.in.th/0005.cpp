#include <cstdio>
#include <cmath>

int main() {
    double a, b, c;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    c = sqrt((a * a) + (b * b));
    printf("%.6lf\n", c);
    
    return 0;    
}
