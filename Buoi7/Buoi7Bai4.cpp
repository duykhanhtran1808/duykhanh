#include <stdio.h>
int main(){
	int n;
	printf("Ban muon array may so ? \n");
	scanf("%d",&n);
	int a[n];
	
	for(int i = 0; i < n; i++){
		printf("Moi nhap so thu %d \n",(i+1));
		scanf("%d",&a[i]);
	
	for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				printf("Nhap lai so thu %d \n",(i+1));
				scanf("%d",&a[i]);
				j = -1;
			} 
		}
	

	for(int i = 0; i < n; i++){
		printf(" so thu %d  la %d\n",(i+1),a[i]);
	}
	return 0;
}
