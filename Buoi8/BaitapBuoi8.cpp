#include <stdio.h>
int main(){
	printf("Tao mang a[n] so, n = ");
	int n;
	scanf("%d",&n);
	int a[n];
	
	for(int i = 0; i<n;i++){
		printf("Moi nhap a[%d] \n",i);
		scanf("%d",&a[i]);
	}
	printf("============ \n");
	printf("Nhap so can tim \n");
	int x;
	bool search = false;
	scanf("%d",&x);
	for(int i = 0; i<n;i++){
		if(a[i] == x){
			printf("Tim thay %d o vi tri a[%d] la gan nhat",x,i);
			search = true;
			break;
		}
	}
	if(!search){
		printf("Khong tim thay so");
	}
	
	return 0;
}
