#include <stdio.h>
#include "str.h"

int main(int argc, char const *argv[])
{
	char src[] = "   abc";
	char dest[] = " adcbefgh ";
	unsigned char *s;
	s = src;
	unsigned char *d;
	d = dest;

	// printf("%s\n", strcpy(d, s));
	// char arr[100]; 
	// *dest = strcat(d, s);
	// printf("%s\n", '\0');
	printf("%s\n", strim(d));
	my_memset(d, '@', 4);
	// printf("%s\n", dest);
	// printf("%d\n", a);
	// printf("%s\n", arr);
	
	return 0;
}