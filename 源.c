#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void rereverse_string(char * string)
{
	if (*(++string) != '\0')
		rereverse_string(string);
	printf("%c", *(string - 1));
}
int main()
{
	char *a = "abcdef";
	rereverse_string(a);
	system("pause");
	return 0;
}