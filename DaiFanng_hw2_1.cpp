/*
Dai , Fanng
CS111 11A Homework 2
Part 1
 
 Prompt the user to enter a number between 0 and 10. Any number including decimals.
 The program will print that number squared. If the number entered is not between 0
 and 10, the program will inform the user and exit the program.
 */
#include <iostream>
using namespace std;

int main(){
   double x;
   cout << "Enter a number between 0 and 10: ";
   cin >> x;
   if ( x > 0 && x < 10) cout << "The square is " << x * x << endl;
   else cout << "That is not a number between 0 and 10! The square is " << x * x << endl;
   return 0;
}
