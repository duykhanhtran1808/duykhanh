#include <stdio.h>
int main(){
	int n;
	printf("Nhap 1 so: ");
	scanf("%d",&n);
	int count;

	for(int i = 1; i <= n; i++) {
		if(n%i==0) {
			count++;
		}
	}
	if(count == 2 || n ==1) {
		printf("so nguyen to");
		} else {
			printf("Hop so ");
			}
	return 0;
}




