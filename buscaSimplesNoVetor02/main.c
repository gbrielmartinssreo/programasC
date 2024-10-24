#include <stdio.h>
#include <stdlib.h>

void enche(int num,int ocorre[]){
    for(int i=0;i<10;i++){
        if(ocorre[i]==0){
            ocorre[i]=num;
            return;
        }
    }
}


int main(void){

    int vet[10];
    int ocorre[10]={0};
    int num;
    int cont=0;

    for (int i=0;i<10;i++)
        scanf("%d",&vet[i]);
    
    scanf("%d",&num);

    for(int i=0;i<10;i++){
        if(num==vet[i]){
            cont++;
            enche(i,ocorre);
        }
    }

    if(cont==0){
        printf("Mia x");
        exit(0);
    }
        

    printf("%d\n",cont);
    for(int i=0;i<10;i++){
        if(ocorre[i]==0)
            break;
        printf("%d ",ocorre[i]);
    }

}