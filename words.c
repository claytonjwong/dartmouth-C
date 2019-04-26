#include <stdio.h>

int main(){
    const int N = 68;
    char* words[ N ][ 40 ];
    for( int i = 0; i < N; ++i ){
        scanf("%s", *words[ i ] );
    }
    for( int i = 67; i >= 0; --i ){
        printf("%s ", *words[ i ] );
    }
    return 0;
}

