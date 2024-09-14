#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416


int main(){
	float raio;
	scanf("%f",&raio);

	if(raio<0 || raio>1000){
		exit(1);
	}

	printf("%.2f",(raio*raio)*pi);

	return 0;
}
