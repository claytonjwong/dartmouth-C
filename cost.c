#include <stdio.h>

int main(){
    int N = 0;
    double cost = 0.0;
    scanf("%d%lf", &N, &cost);
    printf("%.2lf", cost / ( N+1 ));
    return 0;
}
