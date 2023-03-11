#include <stdio.h>

int main(){
	char cmd;

	begin:
		scanf(" %c",&cmd);
		if(cmd != 'q')
			goto begin;
		printf("exit\n");
}
