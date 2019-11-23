#include <stdio.h>
int main () {
	int first = 1, second = 1, sum = 0;
	printf("so 1 la: %d\n",first);
	printf("so 2 la: %d\n",second);
	for(int i = 3; first + second < 100; i++){
		sum = first + second;
		first = second;
		second = sum;
		printf("so %d la: %d \n",i,sum);
	}
	return 0;
}


