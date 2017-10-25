// Dai , Fanng
// cs111 11A
// Homework 9

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

// Set max equals zero. And as a larger number comes up, max becomes that number.
int findMax(int array[ ], int length)
{
	int max = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[ i ] > max)
		max = array[ i ];
	}
	return max;
}

//Set min equal the first number which is array[0] and if there is a smaller number, min is that number.
int findMin(int array[ ], int length)
{
	int min = array[ 1 ];
	for (int i = 0; i < length; i++)
	{
		if (array[ i ] < min)
		min = array[ i ];
	}
	return min;
}

double findAverage(int array[ ], int length)
{
	// sum is always an integer while the average can be a decimal.
	int sum = 0; 
	double avg;
	// add up all the numbers in array
	for (int i = 0; i < length; i++)
	sum += array[ i ];
	// find the average by the total / length
	avg = double( sum ) / length;
	return avg;
}

int findMinGap(int array[ ], int length)
{
	// set min gap to a number bigger than what possibility of what the min gap can be
	// therefore, we can make it smaller
	int minGap = 100;
	for (int i = 0; i < length; i++)
	{
		// Take the absolute value of (first number - second number) to find the difference
		// if this difference is smaller than min gap, that is the new min gap.
		if (abs(array[ i ] - array[ i+1 ]) < minGap)
		minGap = abs(array[ i ] - array[ i+1 ]);
	}
	return minGap;
}

int findGapSum(int array[ ], int length)
{
	int difference, total = 0; 
	for (int i = 1; i < length; i++)
	{
		// find the absolute value of a value - value before that.
		// so array[1]-array[0]
		// it keeps going until we have added up all those differnces
		// which is gap sum
		difference = abs(array[ i ] - array[ i-1 ]);
		total += difference;
	}
	return total;
}

int main( )
{
	// randomize everytime
	srand ( time( 0 ) );
	// set the array size to 20
	// 20 numbers will print
	int array[ 20 ];
	// print the 20 random numbers
	for (int i=0; i<20; ++i)
	{
		// 60 is the start number and it will go up to 100
		array[i] = rand ( ) % 41 + 60;
		// print the arrays and a space between the numbers
		cout << array[ i ] << " ";
	}
	cout << endl;
	 // initialize all the value of the array;
	cout << "The max is " << findMax(array, 20) << endl;
	cout << "The min is " << findMin(array, 20) << endl;
	cout << "The average is " << findAverage(array, 20) << endl;
	cout << "The min gap is " << findMinGap(array, 20) << endl;
	cout << "The sum gap is " << findGapSum(array, 20) << endl;

	return 0;
}
