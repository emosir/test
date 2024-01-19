#include <stdio.h>
#include <string.h>
void reverseString(char *str,int start,int end)
{
	while(start < end)
  { 
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	start++;
	end--;
  }
}
void reverseWords(char *str)
{
	int length = strlen(str);
	int start = 0;
	for (int end = 0; end <= length; end++)
	{
		if((str[end]>='a'&&str[end]<='z')||(str[end]>='A'&&str[end]<='Z'))
		{
			continue;
		}
		else
		{
			if(start != end)
			{
				reverseString(str,start,end-1);
			}
			start = end + 1;
		}
	} 
}
int main() 
{
	char str[100];
	fgets(str,sizeof(str),stdin);
	reverseWords(str);
	printf("%s",str);
	return 0;
}
