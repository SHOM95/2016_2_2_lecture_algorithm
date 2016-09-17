/*
 *	2015004720_SihwanOh_508
 */


#include<stdio.h>

int main ( void ){
	int i, j, N, key, list[30000];
	
	scanf("%d", &N);
	for ( i = 0; i < N; i++ ){
		scanf(" %d", &list[i]);
	}

	for ( j = 1; j < N; j++ ){
		key = list[j];
		i = j - 1;
		while ( i >= 0 && list[i] < key ){
			list[i+1] = list[i];
			i--;
		}
		list[i+1] = key;
	}

	for ( i = 0; i < N; i++ ){
		printf("%d\n", list[i]);
	}
	return 0;
}
