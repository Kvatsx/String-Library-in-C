#include <ctype.h>
#include <xlocale.h>
#include "str.h"
#include <stdio.h>
#include <stdlib.h>

/* start implementing your functions here */

/* One is done for you */

int my_strncasecmp(const char *s1, const char *s2, int len)
{
	unsigned char c1, c2;

	if (!len)
		return 0;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		c1 = tolower(c1);
		c2 = tolower(c2);
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}

char *strcpy(char *dest, const char *src)
{
	int size = 0;
	char *c1;
	c1 = src;
	while ( *c1++ != '\0' )
	{
		size++;
	}
	dest = (char*) malloc((size+1)*sizeof(char));
	int i=0;
	while ( *src != '\0' )
	{
		dest[i++] = *src;
		*src++;
	}
	dest[size] = '\0';
	printf("%s\n", dest);
	return dest;

}

char *my_strncpy(char *dest, const char *src, int count)
{
	int size = 0;
	char *c1;
	c1 = src;
	while ( *c1++ != '\0' )
	{
		size++;
	}
	dest = (char*) malloc((size+1)*sizeof(char));
	int i=0;
	for ( int j=0; j<count; j++ )
	{
		if ( *src == '\0' )
		{
			break;
		}
		dest[i++] = *src;
		*src++;
	}
	dest[size] = '\0';
	printf("%s\n", dest);
	return dest;
}

char *strcat(char *dest, const char *src)
{
	char *out;
	int size1 = 0;
	char *c1;
	c1 = dest;
	while ( *c1++ != '\0' )
	{
		size1++;
	}
	char *c2;
	c2 = src;
	while ( *c2++ != '\0' )
	{
		size1++;
	}
	out = (char*) malloc((size1+1)*sizeof(char));
	int i=0, j=0;
	while ( *dest )
	{
		out[i++] = *dest++;
		// printf("%s\n", out);
	}
	while ( *src )
	{
		out[i++] = *src++;
		// printf("%s\n", out);
	}
	out[i] = '\0';
	dest = (char*) malloc((size1+1)*sizeof(char));
	for (int ik = 0; ik < size1+1; ik++)
	{
		dest[ik] = *out++;
	}
	// printf("%s\n", dest);
	return dest;
	// int i=0; 
	// while ( src[i] != '\0' )
	// {
	// 	dest[size1+i+1] = src[i];
	// 	i++;
	// }
	// return dest;

}

char *my_strncat(char *dest, const char *src, int count)
{
	char *out;
	int size1 = 0;
	char *c1;
	c1 = dest;
	while ( *c1++ != '\0' )
	{
		size1++;
	}
	out = (char*) malloc((size1+count+1)*sizeof(char));
	int i=0, j=0;
	while ( *dest )
	{
		out[i++] = *dest++;
		// printf("%s\n", out);
	}
	for ( int ij = 0; ij<count; ij++ )
	{
		out[i++] = *src++;
		// printf("%s\n", out);
	}
	out[i] = '\0';
	dest = (char*) malloc((size1+1)*sizeof(char));
	for (int ik = 0; ik < size1+count+1; ik++)
	{
		*dest++ = *out++;
	}
	printf("%s\n", dest);
	return dest;
}

int strcmp(const char *cs, const char *ct)
{
	char *c1;
	char *c2;
	c1 = cs;
	c2 = ct;
	int size1 = 0;
	while ( *c1++ != '\0' )
	{
		size1++;
	}
	int size2 = 0;
	while ( *c2++ != '\0' )
	{
		size2++;
	}
	c1 = cs;
	c2 = ct;
	if ( size1 != size2 )
	{
		return 0;
	}
	else
	{
		for ( int i=0; i<size1; i++ )
		{
			if ( *c1++ != *c2++ )
			{
				return 0;
			}

		}
		return 1;
	}
}

int my_strncmp(const char *cs, const char *ct, int count)
{
	char *c1;
	char *c2;
	c1 = cs;
	c2 = ct;
	int size1 = 0;
	while ( *c1++ != '\0' )
	{
		size1++;
	}
	int size2 = 0;
	while ( *c2++ != '\0' )
	{
		size2++;
	}
	c1 = cs;
	c2 = ct;
	if ( size1 != size2 && count > size1 )
	{
		return 0;
	}
	else
	{
		if ( count > size1 )
		{
			for ( int i=0; i<size1; i++ )
			{
				if ( *c1++ != *c2++ )
				{
					return 0;
				}

			}
			return 1;
		}
		else
		{
			for ( int i=0; i<count; i++ )
			{
				if ( *c1++ != *c2++ )
				{
					return 0;
				}
			}
			return 1;
		}
	}
}

char *strchr(const char *s, int c)
{
	char *c1;
	c1 = s;
	while ( *c1 )
	{
		if ( *c1 == c )
		{
			return c1;
		}
		c1++;
	}
	return "";
}

char *strchrnul(const char *s, int c)
{
	char *c1;
	c1 = s;
	while ( *c1 )
	{
		if ( *c1 == c )
		{
			break;
		}
		c1++;
	}
	return c1;
}

char *strrchr(const char *s, int c)
{
	char *c1;
	c1 = s;
	int size = 0;
	while ( *c1 )
	{
		c1++;
		size++;
	}
	for ( int i =0; i<size+1; i++ )
	{
		if ( *c1 == c )
		{
			return c1;
		}
		c1--;
	}
	return "";
}

char *strnchr(const char *s, int count, int c)
{
	char *c1;
	c1 = s;
	int i=1;
	while ( *c1 )
	{
		if ( i>count )
		{
			break;
		}
		if ( *c1 == c )
		{
			return c1;
		}
		c1++;
		i++;
	}
	return "";
}

char *skip_spaces(const char *str)
{
	char *c;
	c = str;
	int size = 0;
	while ( *c )
	{
		c++;
		size++;
	}
	char *out;
	out = (char*) malloc((size+1)*sizeof(char));
	c = str;
	int flag =0;
	int index = 0;
	while ( *c )
	{
		if ( *c != ' ' && flag == 0 )
		{
			flag = 1;
		}
		if ( flag == 1 )
		{
			out[index] = *c;
			index++;
		}
		c++;
	}
	str = *out;
	out[index] = '\0';
	return out;
}
char *strim(char *s)
{
	char *c;
	c = s;
	int size = 0;
	while ( *c )
	{
		c++;
		size++;
	}
	char *out;
	out = (char*) malloc((size+1)*sizeof(char));
	c = s;
	int flag =0;
	int index = 0;
	while ( *c )
	{
		if ( *c != ' ' && flag == 0 )
		{
			flag = 1;
		}
		if ( flag == 1 )
		{
			out[index] = *c;
			index++;
		}
		c++;
	}
	out[index] = '\0';
	return out;
	// char *a;
	// a = out;
	// int size2 = 0;
	// while ( *a )
	// {
	// 	a++;
	// 	size2++;
	// }
	// char *out2;
	// out2 = (char*) malloc((size2+1)*sizeof(char));
	// for (  )
}

int my_strlen(const char *s)
{
	int size = 0;
	char *c;
	c = s;
	while ( *c )
	{
		c++;
		size++;
	}
	return size;
}

int strnlen(const char *s, int count)
{
	int len = 0;
	char *c;
	c = s;
	while ( *c )
	{
		c++;
		len++;
	}
	if ( len < count )
	{
		return len;
	}
	else
	{
		return count;
	}
}

void *my_memset(void *s, int c, int count)
{
	char *c1;
	c1 = s;
	for ( int i=0; i<count; i++ )
	{
		*c1++ = c;
	}
	printf("%s\n", s);
}