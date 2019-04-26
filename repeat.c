#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void swap( char *first, char *second ){
    char temp = *first;
    *first = *second;
    *second = temp;
}

int main(){
    char S[ 101 ];
    scanf("%s", S);
    bool isSwap = false;
    do {
        isSwap = false;
        for( int i = 1; i < 101 && S[ i ] != '\0'; ++i ) if( S[ i-1 ] > S[ i ] ){
            swap( &S[ i-1 ], &S[ i ] );
            isSwap = true;
        }
    } while( isSwap );
    int repeat = 0;
    for( int i = 1; i < 101 && S[ i ] != '\0'; ++i ){
        if( S[ i-1 ] == S[ i ] ){
            ++repeat;
        }
        while( S[ i-1 ] == S[ i ] && i < 101 && S[ i ] != '\0' ){
            ++i;
        }
    }
    printf("%d", repeat);
    return 0;
}
