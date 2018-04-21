#include <cstdio>
#define PI 3.141592654

int main() {
    double r;

    scanf("%lf", &r);
    
    printf("%.6lf\n", PI * r * r);
    printf("%.6lf\n", ((r * 2) * (r * 2)) / 2.0);
    
    return 0;    
}
