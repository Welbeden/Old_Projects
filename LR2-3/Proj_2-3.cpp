#include <iostream>
#include <string.h>
#include <string>
#include <vector>
using namespace std;
int counter = 0;
struct Human
{
	vector <string> MemCard1;
	vector <string> MemCard2;
	vector <string> MemCard3;
	void Memory(const char ASurname[256], const char AName[256], const char AMiddleName[256], int count)
	{
		for (int i = 0; i < count; i++)
		{
			MemCard1.push_back(ASurname);
			MemCard2.push_back(AName);
			MemCard3.push_back(AMiddleName);
		}
	}
};
struct Luggage
{
	vector <int> MemoryCard1;
	vector <int> MemoryCard2;
	int NumItem, Weight;
	void Memory2(int ANumItem, int AWeight, int count)
	{
		for (int i = 0; i < count; i++)
		{
			MemoryCard1.push_back(ANumItem);
			MemoryCard2.push_back(AWeight);
			NumItem = ANumItem;
			Weight = AWeight;
		}
	}
	void Verify()
	{
		if ((NumItem == 1) and (Weight == 20))
		{
			counter++;
		}
	}
};
struct Transport :Human, Luggage
{
	void OutMemory(int count)
	{
		for (int i = 0; i < count; i++)
		{
			cout << "Surname is - " << MemCard1[i] << endl;
			cout << "Name is - " << MemCard2[i] << endl;
			cout << "Middle Name is - " << MemCard3[i] << endl;
			cout << "Number of items - " << MemoryCard1[i] << endl;
			cout << "Weight items - " << MemoryCard2[i] << "kg" << endl << endl;
		}
	}
};
void Summarize()
{
	cout << "Is there a person with one item weighing 20 kg? - ";
	if (counter >= 1)
	{
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
}
int main()
{
	char AnySurname[256], AnyName[256], AnyMiddleName[256];
	int AnyItem, AnyWeight, count;
	cout << "Type number of passengers: ";
	cin >> count;
	cout << endl;
	Transport AnyHuman;
	for (int i = 0; i < count; i++)
	{
		cout << "Type Surname of passenger: ";
		cin >> AnySurname;
		cout << "Type Name of passenger: ";
		cin >> AnyName;
		cout << "Type MiddleName of passenger: ";
		cin >> AnyMiddleName;
		cout << "Type number of items: ";
		cin >> AnyItem;
		cout << "Type weight of passenger's item: ";
		cin >> AnyWeight;
		cout << endl;
		AnyHuman.Memory(AnySurname, AnyName, AnyMiddleName, count);
		AnyHuman.Memory2(AnyItem, AnyWeight, count);
		AnyHuman.Verify();
	}
	AnyHuman.OutMemory(count);
	Summarize();
	return 0;
}