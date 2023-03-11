#include <stdio.h>

int main(){

	int x;
	short int y;
	long int z;

	printf("Please input an int:");
	scanf("%d",&x);
	printf("%d_decimal = %o_octal = %xhexadecimal.\n",x,x,x);

	printf("Please input a short int in octal:");
	scanf("%ho",&y);
	printf("%hd_decimal = %oh_octal = %hx_hexadecimal.\n",y,y,y);

	printf("Please intput a long int in hexadecumal:");
	scanf("%lx",&z);
	printf("%ld_decimal = %lo_octal = %lx_hexadecimal.\n",z,z,z);

}
