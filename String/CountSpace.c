#include <stdio.h>

int countSpace(const char s[]){

	int count=0,i;
	for(i=0;s[i]!='\0';i++){
		if(s[i]==' '){
			count++;
		}
	}
	return count;
}

int main(){
	char str[]="this is a test.";

	printf("There are %d space(s) in the string.\n",countSpace(str));
	return 0;
}
