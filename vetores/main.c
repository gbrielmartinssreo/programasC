#include <stdio.h>

int main(){
    int vet[10] = {0};
    int num;

    for(int i=0;i<10;i++){
	    scanf("%d",&vet[i]);
    }
    
    scanf("%d", &num);

    for(int i = 0; i < 10; i++){
        if(vet[i] == num){
            printf("SIM");
            break;
        }
        if((i == 9) && (vet[i]!=num))
        {
            printf("NAO");
        }
    }
    return 0;
}
