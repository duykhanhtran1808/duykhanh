#include <stdio.h>
int main(){
	bool quit = false;
	int bill = 0;
	do {
		printf("========\n");
		printf("1. Do an\n");
		printf("2. Do uong\n");
		printf("3. Thoat\n");
		printf("4. Thanh toan\n");
		printf("========\n");
		printf("nhap so de lua chon: \n");
		int n;
		scanf("%d",&n);
		bool monan = true;
		bool douong = true;
		switch(n){
			case 1: 
			do {
				printf("=== Hay chon do an \n");
				printf("1. Ga (100 nghin)\n");
				printf("2. Bo (200 nghin)\n");
				printf("3. Quay lai \n");
				printf("=== Nhap so \n");
				int m;
				scanf("%d",&m);
				switch(m){
					case 1: printf("*** chon ga *** \n");bill += 100; printf("Bill cua ban la %d \n",bill);break;
					case 2: printf("*** chon bo *** \n");bill += 200; printf("Bill cua ban la %d \n",bill);break;
					case 3: monan = false; break;
				}
			} while(monan); break;
			case 2: 
			do {
				printf("=== Hay chon nuoc \n");
				printf("1. Coca (50 nghin)\n");
				printf("2. Nuoc loc (10 nghin)\n");
				printf("3. Quay lai \n");
				printf("=== Nhap so \n");
				int m;
				scanf("%d",&m);
				switch(m){
					case 1: printf("*** chon coca *** \n");bill += 50; printf("Bill cua ban la %d \n",bill); break;
					case 2: printf("*** chon nuoc *** \n");bill += 10; printf("Bill cua ban la %d \n",bill); break;
					case 3: douong = false; break;
				}
			} while(douong); break;
			
			case 3: quit = true;break;
			case 4: printf("Bill cua ban la %d \n",bill); break;
		}
	} while (!quit);
	printf("dat mon xong");
	
	return 0;
}
