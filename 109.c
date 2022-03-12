#include <stdio.h>

int compare(const char * ch1, const char * ch2)
{
	return *ch1-*ch2;
}

void sort(char* ch1, char* ch2, char* ch3)
{
	int i = 0, j = 0, k = 0;
	while(*(ch1+i) && *(ch2+j))
		{
			
			if(compare(ch1+i, ch2+j)>0)
				{
					*(ch3+k++) = *(ch2+j);
					j++;
				}
			else
				{
					*(ch3+k++) = *(ch1+i);
					i++;
				}
		}
	if(*(ch1+i) == '\0')
		{
			while(*(ch2+j))
				{
					*(ch3+k++) = *(ch2+j);
					j++;
				}
		}
	else if(*(ch2+j) == '\0')
		{
			while(*(ch1+i))
				{
					*(ch3+k++) = *(ch1+i);
					i++;
				}
		}
}

//字符串升序排列
int main()
{
	char ch1[100] = "acdfn";
	char ch2[100] = "bghijk";
	char ch3[200] = {0};
	
	sort(ch1, ch2, ch3);
	
	printf("%s\n", ch3);
	return 0;
}
