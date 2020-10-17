#include <string.h>
#include <iostream>
#include <fstream>
#define N 256
int counter = 0;
using namespace std;
class String
{
public:
	char* strh = new char[N];
	char* str;
	String();
	String(char* s);
	void print();
	~String();
	char* Run();
	void Set(char*);
};
String::String()
{
	str = new char[N];
	str[0] = '\0';
}
String::String(char* s)
{
	str = new char[N];
	strcpy(str, s);
}
String::~String()
{
	delete[] str;
	cout << "Destructor called" << endl;
}
void String::Set(char* s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		str[i] = s[i];
	}
	str[strlen(s)] = '\0';
}
char* String::Run()
{
	if (strlen(str) == 10)
	{
		char temp;
		for (int i = 0; i < strlen(str) - 1; i++) {
			for (int j = 0; j < strlen(str) - i - 1; j++) {
				if ((int)str[j] >= 65 and (int)str[j] <= 90 and
					((int)str[j + 1] < 65 or (int)str[j + 1] > 90))
				{
					temp = str[j];
					str[j] = str[j + 1];
					str[j + 1] = temp;
				}
			}
		}
		for (int i = 0; i < strlen(str); i++)
		{
			if ((int)str[i] < 65 or (int)str[i] > 90)
			{
				counter++;
			}
		}
		for (int i = 0; i < counter; i++)
		{
			if ((int)str[i] < 65 || (int)str[i] > 90)
			{
				strh[i] = str[i];
			}
		}
		strh[counter] = '\0';
	}
	ofstream RunFile;
	RunFile.open("First.txt", ios::app);
	if (counter == 0)
	{
		delete[] strh;
		RunFile << str << endl;
		RunFile.close();
		return str;
	}
	else
	{
		counter = 0;
		RunFile << strh << endl;
		RunFile.close();
		return strh;
	}
}
char* Run(String& obj) { return obj.Run(); }
void print(String& obj) 
{
	ofstream PrintFile;
	PrintFile.open("First.txt", ios::app);
	if(PrintFile.is_open())
	{
	if (counter == 0)
	{
		cout << obj.str << endl;
		PrintFile << obj.str << endl;
	}
	else 
	{
		cout << obj.strh << endl;
		PrintFile << obj.strh << endl;
	}
	PrintFile.close();
    }
    else cout << "Can't open this file";
}
int main()
{
	char s[265];
	cout << "Type anything: " << endl;
	cin.getline(s, 265);
	String str(s);
	cout << "You have type:" << endl;
	print(str);
	cout << "Output string:" << endl;
	cout << Run(str) << endl;
	cout << "Type anything: " << endl;
	cin.getline(s, 265);
	String* pstr;
	pstr = new String();
	pstr->Set(s);
	cout << "You have type:" << endl;
	print(*pstr);
	cout << "Output string:" << endl;
	cout << Run(*pstr) << endl;
	delete pstr;
	system("pause");
	return 0;
}
