// Program to convert the string into lowercase or uppercase using string function and manually

/*
		indranil = INDRANIL - strupr(string)
		INDRANIL = indranil - strlwr(string)
*/

#include <stdio.h>
#include <string.h>
int main()
{
	//using string function
	/*char str[100];
	printf("Enter a string: ");
	gets(str);
	printf("LOWER CASE TO UPPER CASE: %s",strupr(str));*/

	//manually
	char s[100];
	int i;
	printf("Enter a string: ");
	gets(s);
	for(i=0; s[i]!='\0'; i++)
	{
		if(s[i]>='a' && s[i]<='z'){
			s[i] = s[i] - 32;
		}
		else{
			s[i] = s[i] + 32;
		}	
	}
	printf("string is: %s", s);

}