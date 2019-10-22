#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen muon tao: \n");
	scanf("%d",&n);
	int a[n];
	int streak = 0;
	int temp = 0;
	
	for(int i = 0; i < n; i++){
		printf("Nhap so nguyen thu %d: \n",(i+1));
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < n; i++){
		if(a[i] >0){
			temp++;
		} else if(a[i] <= 0 && temp > streak){
			streak = temp;
			temp = 0;
		} else {
			temp = 0;
		}
	}
	if(temp > streak){
		streak = temp;
	}
	
	printf("Chuoi so duong lon nhat co %d so",streak);
	
	return 0;
}
