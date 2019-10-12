#include <stdio.h>
int main(){
	bool quit = false;
	int giohang[4];
	do {
		printf("========\n");
		printf("1. Ga nuong\n");
		printf("2. Ca hap\n");
		printf("3. Canh cua\n");
		printf("4. Banh bao\n");
		printf("5. Thoat chuong trinh\n");
		printf("========\n");
		printf("nhap so de lua chon: \n");
		int n;
		scanf("%d",&n);
		switch(n){
			case 1: printf("***chon ga nuong \n");break;
			case 2: printf("***chon ca hap \n");break;
			case 3: printf("***chon canh cua \n");break;
			case 4: printf("***chon banh bao \n");break;
			case 5: quit = true;break;
		}
	} while (!quit);
	printf("dat mon xong");
	
	return 0;
}
