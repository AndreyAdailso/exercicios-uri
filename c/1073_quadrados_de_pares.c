#include <stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	for(i = 0; i <= n; i++){
		if(i != 0 && i % 2 == 0){
			printf("%d^%d = %d\n", i, i,i*i);
		}
	}
	return 0;
}

