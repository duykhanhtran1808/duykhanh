#include <stdio.h>
int main(){
	int n;
	int tich = 1;
	printf("Moi nhap n \n");
	scanf("%d",&n);
	if(n == 0){
		printf("1");
	} else {
	
	for(int i = 1; i <= n;i ++){
		tich *= i;
	}
	printf("%d",tich);
	
}
	
	return 0;
}
