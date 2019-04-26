#include <stdio.h>

int main(){
    int w[2], N=0;
    w[0]=0, w[1]=0;
    scanf("%d", &N);
    for( int team=0; N--; team ^= 1 ){
        int weight = 0;
        scanf("%d", &weight);
        w[ team ] += weight;
    }
    printf("Team %c has an advantage\n", w[ 0 ] > w[ 1 ] ? '1' : '2' );
    printf("Total weight for team 1: %d\n", w[0]);
    printf("Total weight for team 2: %d\n", w[1]);

    
    return 0;
}
