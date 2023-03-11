#include <stdio.h>

int main(){
	int i = 1;
	while(i < 100){
		if( (i % 7 == 0) || (i % 13 == 0) ){
			printf("%d\n",i);
		}

		i++;
	}
}
