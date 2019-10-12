#include <stdio.h>
int main() {
	int n;
	int tong;
	printf("nhap 1 so \n");
	scanf("%d",&n);
	
	for(int i =1; i<= n/2; i++){
		if(n % i ==0){
			tong += i;
		}
	}
	if(tong == n) {
		printf("so hoan hao");
	} else {
		printf("khong phai so hoan hao");
	}
	
	
	
	return 0;
}
