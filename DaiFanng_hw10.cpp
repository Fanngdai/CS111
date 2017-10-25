// Dai , Fanng
// cs 111 11A
// Homework 10

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// function to print 2d array
void printArray(int array[8][8] )
{
	// Different everytime print out
//	srand (time(0));
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
		{
			// the random number start at 10 goes up 90#'s
			array[row][column] = rand( )% 90 + 10 ;
			cout << array[row][column] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void sumRow(int array[ ][8] )
{
	int sum[8] = {0};
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
			{
				sum[row] += array[row][column];
			}
	}
	for (int row = 0; row < 8; row++) cout << "Sum of row " << row << " is: " << sum[row] << endl;
}

void sumColumn( int array[ ][8])
{
	int sum[8] = {0};
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
		{
			sum[column] += array[row][column];
		}
	}
	for (int column = 0; column < 8; column++) cout << "Sum of Column " << column << " is: " << sum[column] << endl;
}

void leftRight(int array[ ][8])
{
	int sum = 0;
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
		{
			if ( row == column) sum += array[row][column];
		}
	}
	cout << "Main diagonal sum is: " << sum << endl;
}

void rightLeft(int array[ ][8])
{
	int sum = 0;
	for (int row = 0; row < 8; row++)
	{
		for (int column = 0; column < 8; column++)
		{
			if( row + column == 7) sum += array[row][column];
		}
	}
	cout << "Other diagonal sum is: " << sum << endl;
}

int main()
{
	int array[8][8];

	// prints array
	printArray( array );
	// prints sum of row 0-7
	sumRow( array );
	// prints sum of column 0-7
	sumColumn( array );
	// prints sum of diagonal from top left to bot right
	leftRight( array );
	// prints sum of diagonal from top right to bot left
	rightLeft( array );

	return 0;
}
