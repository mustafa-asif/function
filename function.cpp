#include <iostream>
using namespace std;
int add(int a, int b);
int sub(int z, int x);
int mul(int y, int c);
int divide(int h, int d);
int main()
{
	int num1, num2, result, choice;
	cout << "enter number 1" << endl;
	cin >> num1;
	cout << "enter number 2" << endl;
	cin >> num2;
	cout << "/n press 1 for addition /n press 2 for subraction /n press 3 for multiplcation /n press 4 for division" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		result = add(num1, num2);
		cout << "your result is" << result << endl;
		break;
	case 2:
		result = sub(num1, num2);
		cout << "your result is " << result << endl;
		break;
	case 3:
		result = mul(num1, num2);
		cout << "your result is" << result << endl;
		break;
	case 4:
		result = divide(num1, num2);
		cout << "your result is" << result << endl;
		break;

	}
	system("pause");
}
int add(int num1, int num2)
{
	return(num1 + num2);
}
int sub(int num1, int num2)
{
	return(num1 - num2);
}
int  mul(int num1, int num2)
{
	return(num1 * num2);
}
int divide(int num1, int num2)
{
	return(num1 / num2);
}