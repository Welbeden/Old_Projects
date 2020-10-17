#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	char num;
	int counter1 = 0, counter2 = 0;
	int times;
	string nameFirst, nameSecond, ext = ".txt", str = "", numbers = "", allstr = "";
	ofstream file;
	cout << "Type first file name: ";
	cin >> nameFirst;
	nameFirst += ext;
	file.open(nameFirst);
	if (!file.is_open())
	{
		cout << "Can't open this file";
	}
	else
	{
		cout << "Type number of strings: ";
		cin >> times;
		cout << "Type string " << times << " times: " << endl;
		for (int i = 0; i < times; i++)
		{
			string stringMain;
			cin >> stringMain;
			file << stringMain << endl;
		}
		file.close();
		ifstream file;
		file.open(nameFirst);
		if (!file.is_open())
		{
			cout << "Can't open this file";
		}
		else
		{
			while (!file.eof())
			{
				file.get(num);
				allstr += num;
				if ((num == '0') or (num == '1') or (num == '2') or (num == '3') or (num == '4') or
					(num == '5') or (num == '6') or (num == '7') or (num == '8') or (num == '9'))
				{
					numbers += num;
					counter1++;
				}
				else if ((num != '0') and (num != '1') and (num != '2') and (num != '3') and (num != '4') and
					(num != '5') and (num != '6') and (num != '7') and (num != '8') and (num != '9'))
				{
					str += num;
					if ((num != '\n'))
						counter2++;
				}
			}
			file.close();
			if (counter1 > counter2)
			{
				cout << "Numbers more than symbols" << endl;
				ofstream file2;
				cout << "Type second file name: ";
				cin >> nameSecond;
				nameSecond += ext;
				file2.open(nameSecond);
				if (!file2.is_open())
				{
					cout << "Can't open this file";
				}
				else
				{
					file2 << numbers;
					cout << "Result: " << endl << numbers << endl;
					file2.close();
				}
			}
			else if (counter1 < counter2)
			{
				cout << "Symbols more than numbers" << endl;
				ofstream file2;
				cout << "Type second file name: ";
				cin >> nameSecond;
				nameSecond += ext;
				file2.open(nameSecond);
				if (!file2.is_open())
				{
					cout << "Can't open this file";
				}
				else
				{
					file2 << str;
					cout << "Result: " << endl << str << endl;
					file2.close();
				}
			}
			else if (counter1 == counter2)
			{
				cout << "The nmuber of symbols is equal to the number of numbers" << endl;
				ofstream file2;
				cout << "Type second file name: ";
				cin >> nameSecond;
				nameSecond += ext;
				file2.open(nameSecond);
				if (!file2.is_open())
				{
					cout << "Can't open this file";
				}
				else
				{
					file2 << allstr;
					cout << "Result: " << endl << allstr << endl;
					file2.close();
				}
			}
		}
	}
	system("pause");
	return 0;
}
	

   

