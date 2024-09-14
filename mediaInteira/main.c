#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,moduleA,moduleB;

	scanf("%d",&a);
	if(a<0){
		moduleA=a*-1;
	}else{
		moduleA=a;
	}

	if(moduleA>1000){
		exit(0);
	}

	
	scanf("%d",&b);
	if(b<0){
		moduleB=b*-1;
	}else{
		moduleB=b;
	}

	if(moduleB>1000){
		exit(0);
	}

	printf("%d",(a+b)/2);

	return 0;
}
