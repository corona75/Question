#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Upper_Lower_Converter(char *x);

int main(void)
{
	char *s1 = "AbCdE";
	Upper_Lower_Converter(s1);

	return 0;
}



void Upper_Lower_Coverter(char *s)
{
	int i;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i] = tolower(s[i]);
		}
		if(s[i] >=97 && s[i] <= 122)
		{
			s[i] = toupper(s[i]);
		}
	printf("%s",s[i]);
	}
}
//�빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� ���