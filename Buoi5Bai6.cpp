#include <stdio.h>
int main(){
	bool quit = false;
	int giohang[4];
	do {
		printf("========\n");
		printf("1. Do an\n");
		printf("2. Do uong\n");
		printf("3. Thoat\n");
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
				printf("1. Ga \n");
				printf("2. Bo \n");
				printf("3. Quay lai \n");
				printf("=== Nhap so \n");
				int m;
				scanf("%d",&m);
				switch(m){
					case 1: printf("*** chon ga *** \n"); break;
					case 2: printf("*** chon bo *** \n"); break;
					case 3: monan = false; break;
				}
			} while(monan); break;
			case 2: 
			do {
				printf("=== Hay chon nuoc \n");
				printf("1. Coca \n");
				printf("2. Nuoc loc \n");
				printf("3. Quay lai \n");
				printf("=== Nhap so \n");
				int m;
				scanf("%d",&m);
				switch(m){
					case 1: printf("*** chon coca *** \n"); break;
					case 2: printf("*** chon nuoc *** \n"); break;
					case 3: douong = false; break;
				}
			} while(douong); break;
			
			case 3: quit = true;break;
		}
	} while (!quit);
	printf("dat mon xong");
	
	return 0;
}
