// Dai, Fanng
// cs 111 11A
// Extra Credit 4

#include <iostream>
using namespace std;

int getMax(int array[], int cap) {
	int maxValue = array[0];
	for (int i = 1; i < cap; i++)
		if (array[i] > maxValue) maxValue = array[i];
	return maxValue;
}

int minIndex(int array[ ], int low, int high)
{
	int min = low;
	for (int i = low; i <= high; i++)
	{
		if (array[i] < array[min]) min = i;
	}
	return min;
}

void printChart(int integers[ ], char characters[ ], int cap, int max)
{
	for (int r = max; r >= 1; r--)
	{
		for (int c = 0; c < cap; c++)
		{
			if ( integers[c] >= r ) cout << characters[c];
			else cout << " ";
		}
		cout << endl;
	}
}

void swap (int integers[ ], char characters[ ], int i, int j)
{
	int tempInteger = integers[i];
	char tempCharacter = characters[i];
	integers [i] = integers [j];
	integers [j] = tempInteger;
	characters [i] = characters [j];
	characters [j] = tempCharacter;
}

void sort( int integers[ ], char characters[ ], int cap)
{
	for( int i = 0; i < cap -1; i++)
	{
		int index = minIndex(integers, i, cap-1);
		swap(integers, characters, i, index);
	}
}

int main ()
{
	int length = 6;
	int integers[length];
	char characters[length];

	cout << "Please enter six non-negative integers." << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "Integer #" << i << ": ";
		cin >> integers[i];
	}
	cout << endl;

	cout << "Please enter six characters." << endl;
	for ( int i = 0; i < length; i++)
	{
		cout << "Character " << i << ": ";
		cin >> characters[i];
	}
	cout << endl;

	int maxHeight = getMax( integers, length);
	cout << "Unsorted Bar Chart" << endl;
	printChart (integers, characters, length, maxHeight);
	cout << endl;

	sort (integers, characters, length);
	cout << "Sorted Bar Chart" << endl;
	printChart (integers, characters, length, maxHeight);
	return 0;
}
