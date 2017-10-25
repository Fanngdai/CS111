/* 
 Dai , Fanng
 CS111 11A Homework 2
 Part 2
 
 Program prompts user to enter a positive digit that is 3 digits long.
 Program will check if the integer entered is positive or not. If the
 program is not positive, or it is not 3 digits, it will inform the user
 and exit the program. Otherwise, it will add all the digits within that
 integer and print the sum.
 */
#include <iostream>
using namespace std;
int main (){
   int x;
   cout << "Please input 3-digit positive integer: " ;
   cin >> x;
   if ( x >= 100 && 999  >= x){
      int a , b , c , d;
      a = x / 100 ;
      b = x / 10;
      c = b % 10;
      d = x % 10;
      cout << "The product of all the digits in " << x << " is " << a * c * d << "." << endl ;
      return 0 ;}
   else cout <<"That is not a 3-digit postive integer! Good bye!" << endl;
   return 0;
}
