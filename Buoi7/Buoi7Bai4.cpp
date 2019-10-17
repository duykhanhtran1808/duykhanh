#include <stdio.h>
int main(){
	int n;
	printf("Ban muon array may so ? \n");
	scanf("%d",&n);
	int a[n];
	
	for(int i = 0; i < n; i++){
	printf("Moi nhap so thu %d \n",(i+1));
	scanf("%d",&a[i]);
	if(i > 0){
		bool check;
		for(int j = 0; j < i; j++){
			if(a[i] == a[j]){
				check = false;
				break;
			} else {
				check = true;
			}
		}
		if(check == false){
			i--;
		}
	}
	}		
	for(int i = 0; i < n; i++){
		printf(" so thu %d  la %d\n",(i+1),a[i]);
	}
	return 0;
}
