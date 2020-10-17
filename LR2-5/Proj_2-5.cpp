#include <iostream>
#include <string.h>
using namespace std;
int Reverse(char* str)
{
	char s2[256];
	for (int i = 0; i < strlen(str); i++)
	{
		s2[i] = str[strlen(str) - i - 1];
	}
	s2[strlen(str)] = '\0';
	puts(s2);
	return 0;
}
int main()
{
	char s[256];
	cin.getline(s,256);
	Reverse(s);
	return 0;
}
