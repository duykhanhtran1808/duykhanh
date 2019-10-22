#include <stdio.h>
int main(){
	int n;
	printf("Ban muon array may so ? \n");
	scanf("%d",&n);
	int a[n];
	
	for(int i = 0; i < n; i++){
		printf("Moi nhap so thu %d \n",(i+1));
			scanf("%d",&a[i]);
	}	
	for(int i = 0;i<n; i++){
		if(a[i] < 0){
			a[i] = 0;
		}
		printf(" so thu %d  la %d\n",(i+1),a[i]);
	}

	return 0;
}
