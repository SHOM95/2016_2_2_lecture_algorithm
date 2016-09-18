/*
 *	2015004720_SihwanOh_508
 */

#include<stdio.h>

int main ( void ){
	int i, j, N, key, list[30000];

	//input
	scanf("%d", &N);
	for ( i = 0; i < N; i++ ){
		scanf(" %d", &list[i]);
	}

	//process
	for ( j = 1; j < N; j++ ){
		key = list[j];
		i = j - 1;
		while ( i >= 0 && list[i] < key ){	// search backword for efficiency
			list[i+1] = list[i];	// Save to the next one as if the value is pushed to right
			i--;
		}
		list[i+1] = key;	// i+1 for i-- at the last of while
	}

	//output
	for ( i = 0; i < N; i++ ){
		printf("%d\n", list[i]);
	}
	return 0;
}
