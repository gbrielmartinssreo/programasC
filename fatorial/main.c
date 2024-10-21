#include <stdio.h>

int main(void){
	int n;
	int fat;

	scanf("%d",&n);

	for(int i=0;i<=n;i++){
		if(i==0){
			fat=1;
		}
		else{
			fat=i*fat;
		}
	}

	printf("%d",fat);

	return 0;
}
