#include <cstdio>

int main() {
    int i, n;
    int tmp, min, max;
    
    scanf("%d", &n);
    scanf("%d", &tmp);
    min = max = tmp;
    
    for(i = 1; i < n; i++) {
        scanf("%d", &tmp);
        if(tmp < min) min = tmp;
        if(tmp > max) max = tmp;
    }
    printf("%d\n%d\n", min, max);
    
    return 0;    
}
