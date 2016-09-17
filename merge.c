/*
 *	2015004720_SihwanOh_508
 */
#include<stdio.h>

void merge(int *list, int p, int q, int r){
	int i = p, j = q+1, idx = p, max = r;
	int newList[100000];
	while ( idx <= max ){
		if ( list[i] < list[j] && i <= q && j <= r){
			newList[idx] = list[j++];
		}
		else if ( list[i] >= list[j] && i <= q && j <= r ){
			newList[idx] = list[i++];
		}
		else{
			if ( i > q ){
				newList[idx] = list[j++];
			} else{
				newList[idx] = list[i++];
			}
		}
		idx++;
	}

	idx = p;
	while ( idx <= max ){
		list[idx] = newList[idx];
		idx++;
	}
}

void merge_sort(int *list, int p, int r){
	int q = 0;
	if ( p < r ){
		q = (p+r)/2;
		merge_sort(list,p,q);
		merge_sort(list,q+1,r);
		merge(list,p,q,r);
	}
}

int main ( void ){
	int i, j, N, list[100000];

	scanf("%d", &N);

	for ( i = 0; i < N; i++ ){
		scanf(" %d", &list[i]);
	}
	
	merge_sort(list, 0, N-1);
	
	for ( i = 0; i < N; i++ ){
		printf("%d\n", list[i]);
	}
	
	return 0;
}
