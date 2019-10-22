#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen muon tao: \n");
	scanf("%d",&n);
	int a[n];
	int sum = 0;
	int temp = 0;
	
	for(int i = 0; i < n; i++){
		printf("Nhap so nguyen thu %d: \n",(i+1));
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < n; i++){
		if(a[i] >0){
			temp += a[i];
		} else if(a[i] <= 0 && temp > sum){
			sum = temp;
			temp = 0;
		} else {
			temp = 0;
		}
	} 
	if(temp > sum){
		sum = temp;
	}
	
	printf("Tong cua chuoi dai nhat la %d",sum);

	
	return 0;
}
