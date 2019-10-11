#include <stdio.h>
int main() {
	int n;
	printf("== Moi nhap n == \n");
	scanf("%d",&n);
	printf("== Cac so < n va chia het cho 3 == \n");
	for(int i; i<n; i++){
		if(i%3==0){
			printf("- %d - ",i);
		}
	}
	return 0;
}
