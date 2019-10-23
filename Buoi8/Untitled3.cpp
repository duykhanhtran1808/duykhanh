#include <stdio.h>
int main(){
	int data[5] = {53,43,6,26,8};
	int tmp,i,j;
	for(j = 1;j<5; j++){
		i=j-1;
		tmp = data[j];
		while((i>=0) && (tmp < data[i])){
			data[i+1] = data[i];
			i--;
		}
		data[i+1] = tmp;
	}
	for(int i = 0; i < 5; i++){
		printf("%d ",data[i]);
	}
	
	
	return 0;
}
