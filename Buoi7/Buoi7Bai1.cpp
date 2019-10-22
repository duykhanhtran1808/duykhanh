#include <stdio.h>
int main() {
	int n;
	printf("Ban muon array may so? \n");
	scanf("%d",&n);
	int a[n];

	for(int i = 0; i<n;i++){
		printf("Moi nhap so thu %d \n",(i+1));
		scanf("%d",&a[i]);
	}
	double sum = 0;     
	int cnt = 0;
	for(int i = 0; i<n; i++){
		if(a[i] % 2 != 0) {
			sum += a[i];  
			cnt++;
		}
	}
	sum = (double) sum / cnt;
	printf("%lf",sum);
	
	
	return 0;
}
