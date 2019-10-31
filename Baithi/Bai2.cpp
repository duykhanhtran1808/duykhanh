#include <stdio.h>
int main() {
	int year = 0;
	double rate = 0, capitalsum = 0, interest = 0;
	printf("Moi nhap so von gui (> 0) \n");
	scanf("%lf",&capitalsum);
	printf("Moi nhap so nam gui tien (> 0) \n");
	scanf("%d",&year);
	printf("Moi nhap lai suat ngan hang (khong dien %%)\n");
	scanf("%lf",&rate);
	
	for(int i = 1; i <= year; i++){
		interest = capitalsum * (rate / 100);
		capitalsum += interest;
		printf("Year %d - interest %lf - sum: %lf \n",i,interest,capitalsum);
	}
		
	return 0;
}
