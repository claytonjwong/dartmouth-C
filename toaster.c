#include <stdio.h>

int main(){
    char type = '\0';
    size_t N = 0;
    scanf( "%c %zu", &type, &N );
    size_t size = ( type == 'c' )? sizeof( char )
                : ( type == 's' )? sizeof( short )
                : ( type == 'i' )? sizeof( int )
                : ( type == 'd' )? sizeof( double )
                : 0;
    size_t total = N * size;
    if( total > 999999 )
        printf( "%zu MB and ", ( total / 1000000 ));
    total %= 1000000;
    if( total > 999 )
        printf( "%zu KB and ", ( total / 1000 ));
    total %= 1000;
    printf( "%zu B\n", total );
    return 0;
}
