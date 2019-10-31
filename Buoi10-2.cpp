#include <stdio.h>
#include <stdlib.h>
int main() {
	int *ary;
	ary = (int *)malloc(5 * sizeof(int));
	
	for(int i = 0; i< 5; i++) {
		scanf("%d",ary+i);
	}
	for(int i = 0; i< 5; i++) {
		printf("%d\t",*(ary+i));
	}
	ary = (int *)realloc(ary, 8*sizeof(int));
	for(int i = 5; i<8; i++){
		scanf("%d",ary+i);
	}
	for(int i = 0; i< 8; i++) {
		printf("%d\t",*(ary+i));
	}
	free(ary);
	return 0;
}
