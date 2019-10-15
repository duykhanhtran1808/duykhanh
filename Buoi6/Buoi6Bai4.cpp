#include <stdio.h>
int main(){
	int a[10];
	int temp;
	for(int i = 0; i < 10; i++){
		printf("Nhap so thu %d \n",(i+1));
		scanf("%d",&temp);
		if(temp == 0){
			printf("Moi nhap lai so khac 0, 0 thi lam sao nghich dao duoc :D \n");
			i--;
		} else {
			a[i] = temp;
		}
	}
	double nghichdao;
	printf("Cac so nghich dao la \n");
	for(int i = 0; i < 10; i++){
		nghichdao = (double) 1/a[i];
			printf("%lf ",nghichdao);
	}
	
	
	return 0;
}
