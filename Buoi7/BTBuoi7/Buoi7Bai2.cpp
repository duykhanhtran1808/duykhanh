#include <stdio.h>
int main(){
	int n;
	printf("Nhap so so nguyen muon tao: \n");
	scanf("%d",&n);
	int a[n];
	int low;
	bool flag = true;
	for(int i = 0; i < n; i++){
		printf("Nhap so nguyen thu %d: \n",(i+1));
		scanf("%d",&a[i]);
		if(a[i] > 0 && flag){
			low = a[i];
			flag = false;
		}
		if(a[i] < low && a[i] > 0 && !flag){
			low = a[i];
		}
	}
	printf("So duong nho nhat la: %d",low);
	return 0;
}
