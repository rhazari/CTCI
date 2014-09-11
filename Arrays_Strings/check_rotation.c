#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main()
{
	char* buff = (char*)malloc(sizeof(char)*SIZE);
	printf("Enter string 1\n");
	scanf("%s",buff);

	char* rot = (char*)malloc(sizeof(char)*SIZE);
	printf("Enter string 2\n");
	scanf("%s",rot);

	char* temp = (char*)malloc(sizeof(char)*SIZE*2);
	char* ptr = buff;
	int idx = 0;
	while(*ptr)
	{
		temp[idx++] = *ptr++;
	}
	ptr = buff;
	while(*ptr)
	{
		temp[idx++] = *ptr++;
	}

	//printf("%s\n",temp);

	if(strstr(temp,rot))
		printf("string 2 is a rotation of string 1\n");
	else
		printf("string 2 is not a rotation of string 1\n");
	
	return 0;
}
