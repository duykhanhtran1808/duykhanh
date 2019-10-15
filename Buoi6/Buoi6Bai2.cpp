#include <stdio.h>
int main(){
	int a[20];
	for(int i = 0; i < 20; i++){
		printf("Nhap so thu %d \n",(i+1));
		scanf("%d",&a[i]);
	}
	printf("Cac so le la \n");
	for(int i = 0; i < 20; i++){
		if(a[i] % 2 != 0){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
