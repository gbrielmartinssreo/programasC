#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x;

    scanf("%d",&x);
    if(x<1 || x>100){exit(1);}

    for (int i=0; i<x; i++){
        printf("NepsAcademy eh Sucesso\n");
	}
    return 0;
}
