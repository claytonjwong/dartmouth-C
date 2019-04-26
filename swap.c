#include <stdio.h>

void reverseArray( int A[] );

int main(){
    int A[ 6 ];
    for( int i = 0; i < 6; ++i ){
        scanf("%d", &A[ i ]);
    }
    reverseArray( A );
    for( int i = 0; i < 6; ++i )
        printf("%d ", A[ i ] );
    printf("\n");
    return 0;
}

void reverseArray( int A[] ){
	for( int i = 0; i < 3; ++i ){
		int temp = A[ i ];
		A[ i ] = A[ 5-i ];
		A[ 5-i ] = temp;
	}
}

