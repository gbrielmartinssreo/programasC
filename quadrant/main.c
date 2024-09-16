#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,y;

    scanf("%d",&x);
    if(x<(-100) || x>100){exit(0);}

    scanf("%d",&y);
    if(y<(-100) || y>100){exit(0);}

    if(x>0 && y>0){printf("Q1");}
    else if(x<0 && y>0){printf("Q2");}
    else if(x<0 && y<0){printf("Q3");}
    else if(x>0 && y<0){printf("Q4");}
    else{printf("eixos");}

    return 0;
}


