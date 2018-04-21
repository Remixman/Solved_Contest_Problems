#include <cstdio>

int main() {
    int a, b, c;
    int sum_score;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    sum_score = a + b + c;
    
    if(sum_score >= 80)
        printf("A\n");
    else if(sum_score >= 75)
        printf("B+\n");
    else if(sum_score >= 70)
        printf("B\n");
    else if(sum_score >= 65)
        printf("C+\n");
    else if(sum_score >= 60)
        printf("C\n");
    else if(sum_score >= 55)
        printf("D+\n");
    else if(sum_score >= 50)
        printf("D\n");
    else
        printf("F\n");

    return 0;    
}
