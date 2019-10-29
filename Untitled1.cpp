#include <stdio.h>
bool search(int a[],int n,int b){ //n la do dai cua a[], b la so can tim
	for(int i = 0; i<n;i++){
		if(a[i] ==b){
			return true;
		}
	}
	return false;
	
}
void insole(int a[],int n){
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0) {
			printf("%d ",a[i]);
		}
	}
}
void fibonacci(int n){
	  int first = 0, second = 1, next, c;
 
  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
  }
  printf("%d", next);
}

int main() {
	//Test function search
	int a[3] = {5,4,3};
	if(search(a,3,4)){
		printf("hello \n");
	}
	//Test in so le trong mang
	insole(a,3); 
	//Test function fibonacci
	printf("\n");
	fibonacci(5);
	
	return 0;
}




