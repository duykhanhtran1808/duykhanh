#include <stdio.h>
int main(){
	int ary[9] = {9,8,7,6,5,4,3,2,1};
	int temp;
	for(int i = 0; i < 8; i++){
		for(int j = 0; j<9-i-1;j++){
			if(ary[j]>ary[j+1]){
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;	
				
			}
		}
	}
	for(int i = 0; i < 9; i++){
		printf("%d ",ary[i]);
	}
	
	return 0;
}
