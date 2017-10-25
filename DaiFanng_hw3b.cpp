/* 
 Dai , Fanng
 CS111 11A homework 3
 part 2
 
 Prompts user to enter a year. Program will determine if that year is
 a leap year or not.
 */
#include <iostream>
using namespace std;

int main(){
   int year , a , b , c;
   cout << "Enter a year: ";
   cin >> year;
   a = year % 4;
   b = year % 400;
   c = year % 100;
   if ( a == 0 && b == 0 ){
      cout << "This is a leap year.\n";
      return 0;
       }
   if ( b == 0 && c == 0 ){
       cout << "This is a leap year.\n";
       return 0;
       }
   if ( a == 0 && c != 0 ){
       cout << "This is a leap year.\n";
       return 0;
       }
   else cout << "It is not a leap year.\n";
return 0;
}
