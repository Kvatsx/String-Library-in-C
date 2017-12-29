Name: Kaustav Vats
Roll No: 2016048

BRIEF:

At first i was scared, because we have to use C Lang. I was not really confident with some of the concept in C lang like using pointers. In my previous programms on c, i mostly used to avoid using pointers as they are hard to debug. 
After this lab, i am comfortable with pointers now and would love to practise more on it. I learned how libraries are used in C Lang and related the implementation about the function included in libraries.
Static Linking copies all library modules used in program in execution.
Dynamic Linking names of external libraries are included in program, actual linking takes place at run time.

STEPS:

We were given str.h, str.c file.
Firstly i implemented all methods that were declared in header file (str.h).
Then i included header file str.h
I also created main.c to test the functions i implemented.
Then i made Makefile. Using the help from lab1demo files.
Then i compiled libraries. Both the static and dynamic libraries.
Then i individually tested both libraries.

FUNCTIONS IMPLEMENTED:

int my_strncasecmp(const char *s1, const char *s2, int len);
char *strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, int count);
char *strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, int count);
int strcmp(const char *cs, const char *ct);
int my_strncmp(const char *cs, const char *ct, int count);
char *strchr(const char *s, int c);
char *strchrnul(const char *s, int c);
char *strrchr(const char *s, int c);
char *strnchr(const char *s, int count, int c);
char *skip_spaces(const char *str);
char *strim(char *s);
int my_strlen(const char *s);
int strnlen(const char *s, int count);
void *my_memset(void *s, int c, int count);

FUNCTIONS NOT IMPLEMNETED:

- none
