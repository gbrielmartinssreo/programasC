#include <stdio.h>
#include <stdlib.h>

int main(void){
	float n1,n2,media;
	
	scanf("%f",&n1);
	if(n1<0 || n1>10){exit(1);}

	scanf("%f",&n2);
	if(n2<0 || n2>10){exit(1);}

	media=(n1*2+n2*3)/(2+3);

	if(media>=7){printf("Aprovado");}
	else if(media<3){printf("Reprovado");}
	else{printf("Final");}

	return 0;
}
