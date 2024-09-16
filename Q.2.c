#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any small or capital alphabet: ");
	scanf("%c", &ch);
	if((ch>='A' && ch<='Z' )||(ch>='a' && ch<='z'))
	{
		
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	printf("It is vowel ");
	else
	printf("It is consonant");
	}
	
	else
	printf("Invalid input.");
	
	return 0;
}