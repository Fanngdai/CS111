/* 
 Dai , Fanng
 CS111 11A Homework 3
 part 1
 
 Program prompts the user to enter an integer that is 8 digits.
 If the integer entered is not 8 digits, or is negative, it will
 inform the user. Otherwise, it will let the user know if that integer
 is divisible by 3 or 7.
 */
#include <iostream>
using namespace std;
int main(){
   int a , b , c , d , e;
   cout << "Enter a eight digit integer:  ";
   cin >> a;
   while ((a <= 9999999) || (a > 99999999)){
      cout << "That is not an eight digit number! Try again. ";
      cin >> a;
      }
   b = a % 100000;
   c = b / 1000;
   d = c % 3;
   e = c % 7;
   if (d==0 && e==0)
       cout << c << " is divisible by 3 and 7. \n";
   else if (d==0 && e!=0)
       cout << c << " is divisible by 3 and not 7. \n";
   else if (d!=0 && e==0)
       cout << c << " is divisible by 7 and not 3. \n";
   else if (d!= 0 && e!=0)
       cout << c << " is not divisible by both 3 and 7. \n";
   return 0;
}
