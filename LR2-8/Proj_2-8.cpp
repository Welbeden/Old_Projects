#include <iostream>
#include <cmath>
using namespace std;
class Operations
{
protected:
	int mult = 1;
	int InSumNumber()
	{
		cout << "Type sum times: ";
		cin >> mult;
		return 0;
	}
private:
	static float Square1;
	static float Square2;
	int SquareFirst()
	{
		for (int i = 0; i < mult; i++)
			Square1 += pow(FirstNum,2);
		return 0;
	}
	int SquareSecond()
	{
		for (int i = 0; i < mult; i++)
			Square2 += pow(SecondNum, 2);
		return 0;
	}
public:
	float FirstNum = 0, SecondNum = 0;
	int counter = 0;
	int SquareSum(float FirstNum, float SecondNum)
	{
		this->FirstNum = FirstNum;
		this->SecondNum = SecondNum;
		InSumNumber();
		SquareFirst();
		SquareSecond();
		return 0;
	}
	int OutResult()
	{
		float* arr1[] = { &this->Square1, &this->Square2 };
		cout << "Sum square of first number: " << *arr1[0] << endl;
		cout << "Sum square of second number: " << *arr1[1] << endl;
		if (*arr1[0] > *arr1[1])
		{
			cout << "Square " << FirstNum << " more than " << SecondNum << " square" << endl;
			counter++;
		}
		else cout << "Square " << SecondNum << " more than " << FirstNum << " square" << endl;
		return 0;
	}
	int OutDifference()
	{
		float res;
		float* arr2[] = { &this->Square1, &this->Square2 };
		if (counter == 1)
		{
			res = *arr2[0] - *arr2[1];
			cout << FirstNum << " more than " << SecondNum << " on " << res << endl;
		}
		else
		{
			res = *arr2[1] - *arr2[0];
			cout << SecondNum << " more than " << FirstNum << " on " << res << endl;
		}
		return 0;
	}
};
float Operations::Square1 = 0;
float Operations::Square2 = 0;
int main()
{
	float FirstNum, SecondNum;
	cout << "Type 2 float numbers: ";
	cin >> FirstNum >> SecondNum;
	Operations* num = new Operations;
	num->SquareSum(FirstNum, SecondNum);
	num->OutResult();
	num->OutDifference();
	system("pause");
	return 0;
}
