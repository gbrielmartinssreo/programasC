#include <stdio.h>

int main(){
	
	int a = 0;
	int resp = 0;
	
	scanf("%d", &a);
	
	for(int i = 1; i <= 10; i++){
		
		resp = a * i;
		
		printf("%d * %d = %d\n", a, i, resp);
		
	}
	
	return 0;
}