#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen muon tao: \n");
	scanf("%d",&n);
	int a[n];
	int sole;
	
	for(int i = 0; i < n; i++){
		printf("Nhap so nguyen thu %d: \n",(i+1));
		scanf("%d",&a[i]);
		if(a[i] % 2 != 0){
			sole = a[i];
	}
}
	printf("So le cuoi cung la %d",sole);	
	return 0;
}
