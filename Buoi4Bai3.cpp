#include <stdio.h>
int main() {
	int a = 1;
	int b = 1;
	int temp;
	printf("1: %d \n",a);
	printf("2: %d \n",b);
	for(int i = 3; i<=20;i++) {
		temp = a;
		a += b;
		b = temp;
		printf("%d: %d \n",i,a);
	}
	return 0;
}
