7#include <stdio.h>
int main(){
	int a[10];
	int temp;
	for(int i = 0; i < 10; i++){
		printf("Nhap so thu %d \n",(i+1));
		scanf("%d",&temp);
		if(temp % 2 == 0){
			printf("Moi nhap lai so le \n");
			i--;
		} else {
			a[i] = temp;
		}
	}
	printf("Cac so le la \n");
	for(int i = 0; i < 10; i++){
		if(a[i] % 2 != 0){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
