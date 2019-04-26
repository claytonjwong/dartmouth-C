#include <stdio.h>

int main(){
    int N;
    double avg=0;
    scanf("%d", &N);
    while(N--){
        int grade;
        scanf("%d", &grade);
        avg += grade;
    }
    avg /= N;
    printf("%.2lf\n", avg);
    return 0;
}
