#include <stdio.h>
#include <stdlib.h>

int main(void){
	int l;

	scanf("%d",&l);

	if(l>1000 || l<1){exit(1);}

	printf("%d",l*l);

	return 0;
}
