#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main()
{
	char* buff = (char*)malloc(sizeof(char)*SIZE);
	printf("Enter a string with spaces\n");
	scanf("%[^\n]s",buff);

	//printf("%s\n",buff);
	char* temp = (char*)malloc(sizeof(char)*SIZE);
	int idx = 0;
	while(*buff)
	{
		if(*buff != ' ')
		{
			temp[idx++] = *buff++;
		}
		else
		{
			temp[idx++] = '%';
			temp[idx++] = '2';
			temp[idx++] = '0';
			*buff++;	
		}
	}
	
	printf("%s\n",temp);
	 
	return 0;
}
