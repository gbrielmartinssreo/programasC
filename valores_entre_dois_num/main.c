#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a,b;
    int maior,menor;

    scanf("%d",&a);
    if(a<-100 || a>100){exit(1);}
    scanf("%d",&b);
    if(b<-100 || b>100){exit(1);}

    if(a>b){
        maior=a;
        menor=b;}
    else{
        maior=b;
        menor=a;}

    for (int i=menor;i<=maior;i++){
	    printf("%d ",i);
	}

    return 0;
}
