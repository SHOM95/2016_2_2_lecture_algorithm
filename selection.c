/*
 *  2015004720_SihwanOh_508
 */
#include<stdio.h>

int main ( void ){
    int i, j, N, M, index, temp, list[30000];

    scanf("%d %d", &N, &M);
    //input
    for ( i = 0; i < N; i++ ){
        scanf(" %d", &list[i]);
    }

    //work
    for ( i = 0; i < M; i++ ){
        index = i;
        for ( j = i+1; j < N; j++ ){
            if ( list[index] > list[j] ){
                index = j;
            }
        }
        temp = list[i];
        list[i] = list[index];
        list[index] = temp;
    }

    //output
    for ( i = 0; i < N; i++ ){
        printf("%d\n", list[i]);
    }

    return 0;
}
