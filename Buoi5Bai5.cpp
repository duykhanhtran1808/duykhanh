#include <stdio.h>
int main() {
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int count;
	for(int i = 1; i <= n; i++) {
		
		
		
		for(int j = 1; j <= i; j++) {
				
			if(i % j == 0){
				count++;
				
			}	
		}
		
		if(count == 2 || i == 1){
			printf("(%d) ",i);
		}
		count = 0;
	}	
	return 0;
}
