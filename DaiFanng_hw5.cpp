// Dai , Fanng
// Computer science 111 11A
// Homework 5

#include <iostream>
using namespace std;
int main (){

   int n ;

   cout << "Enter a positive odd integer between 8 and 20: ";
   cin >> n;
   
   while ( n % 2 == 0 || n <=8 || n >=20){
      cout << "That's not an odd integer between 8 and 20. Try again. ";
      cin >> n;
   }
  
   cout << "Diagram 1:\n";
   for (int r = 1; r <= n ; r++){
      for (int c = 1; c <= n ; c++){
         if ( r == c || (r + c) == ( n + 1) || (n/2)+1 == c) cout << "*";
         else if ( r == (n/2)+1 && c < (n/2)+1 ) cout << "x";
         else if ( r == (n/2)+1 && c > (n/2)+1) cout << "+";
         else cout << " ";
      }
   cout << endl;
   }

   cout << "Diagram 2:\n";
   for (int r = 1; r <= n; r++){
      for (int c = 1; c <= n; c++){
      if ( (r == 1 || r ==n) && (n/2)+1 == c) cout << "*";
      else if ( (c == 1 || c == n) && (n/2)+1==r ) cout << "*";
      else if ( r == (n/2)+2  && c != (n/2)+1) cout << "*";
      else if ( r == n/2 && c != (n/2)+1 ) cout << "*";
      else if ( c == (n/2)+2 && r != (n/2)+1 ) cout << "*";
      else if ( c == n/2 && r!= (n/2)+1 ) cout << "*";
      else cout << " ";
      }
   cout << endl;
   }

return 0;
}
