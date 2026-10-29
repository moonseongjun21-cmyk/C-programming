#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[10][300];
	int i = 0;

	while (1)
	{
		printf("문자열 입력: ");
		scanf("%s", &str[i]);
		
		if (strcmp(str[i], "quit") == 0)
		{
			break;
		}
		if (i == 0)
		{
			printf("입력된 문자열: %s \n", str[i]);
		}
		if (i > 0)
		{
			strcat(str[0], " ");
			strcat(str[0], str[i]);
			printf("입력된 문자열: ");
			puts(str[0]);
		}
		i++;
	}
	return 0;
}




