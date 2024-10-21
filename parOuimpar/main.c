#include <stdio.h>

int main(){
	
	int a,b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	if((a+b)%2==0){
		printf("Bino");
	}else{
		printf("Cino");
	}
	
	return 0;
}