#include <stdio.h>
int main(){
	int ar[10];
	for(int i = 0; i < 10; i ++){
		printf("nhap phan tu thu %d\n",(i+1));
		scanf("%d",&ar[i]);
		
	}	
	int max = ar[0];
	int min = ar[0];
	for(int i = 0; i < 10; i ++){
		if(max < ar[i]){
			max = ar[i];
		} 

		if(min > ar[i]){
			min = ar[i];
		}
	}	
	int nmax = min;
	int nmin = max;
	for(int i = 0; i < 10; i ++){
		if(nmax < ar[i] && ar[i] < max){
			nmax = ar[i];
		} 
		if(nmin > ar[i] && ar[i] > min){
			nmin = ar[i];
		}
	}
	printf("Max = %d\n",max);
	printf("Gan Max = %d\n",nmax);
	printf("Min = %d\n",min);
	printf("Gan Min = %d\n",nmin);

	
	return 0;
}


