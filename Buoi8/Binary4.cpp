#include <stdio.h>
int main(){
	printf("Nhap so bien muon tao: \n");
	int n;
	scanf("%d",&n);
	int a[n];
	
	int mid,search,low = a[0],high = a[n-1];
	bool flag = false; 
	printf("Ban muon tim so nao? \n");
	scanf("%d",&search);
	while(low <= high){
		mid = (high + low)/2;
		if(a[mid] == search){
			flag = true;
			printf("Tim thay o index %d\n",mid);
			break;
		} else if(search<a[mid]){
			high = mid -1;
		} else if(search>a[mid]){
			low = mid+1;
		}
		if(!flag){
			printf("Khong tim thay so");
		}		
	}
	return 0;
}
