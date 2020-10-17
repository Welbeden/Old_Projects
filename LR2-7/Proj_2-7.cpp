#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("1.txt", ios::binary | ios::in | ios::out);
	if (file.is_open())
	{
		int arr[256], arr2[256];
		char str[256];
		int n;
		int num = 0, symb = 0, change;
		cout << "Type length of your string: ";
		cin >> n;
		cout << "Type string. The length of your string is " << n << "." << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> str[i];
			arr[i] = (int)str[i];
			if ((int)str[i] >= 48 and (int)str[i] <= 57)
			{
				num++;
			}
			else symb++;
			file.write(reinterpret_cast<char*>(&arr[i]), sizeof(arr[i]));
		}
		file.seekg(0);
		if (num > symb)
		{
			for (int i = 0; i < num - 1; i++) {
				for (int j = 0; j < num - i - 1; j++) {
					if (((int)str[j + 1] >= 48 and (int)str[j + 1] <= 57) and 
						((int)str[j] < 48 or (int)str[j] > 57)) {
						change = str[j];
						str[j] = str[j + 1];
						str[j + 1] = change;
					}
				}
			}
			cout << "Numbers more than symbols" << endl;
			for (int i = 0; i < num; i++)
			{
				if ((int)str[i] >= 48 and (int)str[i] <= 57)
					arr2[i] = (int)str[i];
			}
			n = num;
			file.close();
		} else
		if (num < symb)
		{
			for (int i = 0; i < n - 1; i++) {
				for (int j = 0; j < n - i - 1; j++) {
					if (((int)str[j + 1] < 48 or (int)str[j + 1] > 57) and
						((int)str[j] >= 48 and (int)str[j] <= 57)) {
						change = str[j];
						str[j] = str[j + 1];
						str[j + 1] = change;
					}
				}
			}
			cout << "Symbols more than numbers" << endl;
			for (int i = 0; i < symb; i++)
			{
				if ((int)str[i] < 48 or (int)str[i] > 57)
					arr2[i] = (int)str[i];
			}
			n = symb;
			file.close();
		} else
		if (num = symb)
		{
			cout << "Symbols is equal to numbers" << endl;
			for (int i = 0; i < num+symb; i++)
			{
				arr2[i] = (int)str[i];
			}
			file.close();
		}
		ofstream file2;
		file2.open("2.txt", ios::binary);
		if (file2.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				file2.write(reinterpret_cast<char*>(&arr2[i]), sizeof(arr2[i]));
			}
			file2.close();
			for (int i = 0; i < n; i++)
			{
				cout << (char)arr2[i];
			}
		}
		else cout << "Can't open this file" << endl;
	}
	else cout << "Can't open this file" << endl;
	cout << endl;
	system("pause");
	return 0;
}
