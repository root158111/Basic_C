#include <stdio.h>

int main(){

	int quit = 0;
	char c ;
	while(!quit){
		printf("continue?(y/n)");
		scanf(" %c",&c);
		if(c=='n'){
			quit = 1;
		}

	}
}
