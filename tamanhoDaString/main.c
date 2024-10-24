#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char stringA[20];
	
	fgets(stringA,sizeof(stringA),stdin);
	stringA[strcspn(stringA, "\n")]='\0';

	if(strlen(stringA)<1 && strlen(stringA)>50)
		exit(1);

	printf("%d",strlen(stringA));
	
	return 0;
}
