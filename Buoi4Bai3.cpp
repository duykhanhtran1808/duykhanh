#include <stdio.h>
int main() {
	int a = 1;
	int b = 1;
	int c = 2;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("1: %d \n",a);
	printf("2: %d \n",b);
	printf("3: %d \n",c);

	
	
	for(int i = 4; n >= c ;i++) {
		a=b;
		b=c;
		c=a+b;
		printf("%d: %d \n",i,c);
	}
	return 0;
}
