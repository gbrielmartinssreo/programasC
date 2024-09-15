#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,moduleA;
	scanf("%d",&a);

	if(a<0){moduleA=a*-1;}
	else{moduleA=a;}

	if(moduleA>1000){exit(1);}

	if(a>0){
		printf("positivo");
	}
	else if(a==0){
		printf("nulo");
	}
	else{
		printf("negativo");
	}

	return 0;
}
