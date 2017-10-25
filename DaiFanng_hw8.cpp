// Dai , Fanng
// cs111 11A
// Homework8

#include <iostream>
#include <cmath>
using namespace std;

int sumDigit(int x)
{ 
	if (x < 100)
	{
		cout << x;
		return x;
	}
	int sum = sumDigit(x/100);
	cout << " + "<< x % 100;
	return sum + x % 100;
}

int main()
{
	cout << "Please enter an integer greater than zero: ";
	int n;
	cin >> n;
	cout << " = " << sumDigit(n) << endl;
	return 0;
}
