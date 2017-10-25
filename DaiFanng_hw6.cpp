// Dai , Fanng
// Cs 111 11A
// Homework 6

# include <iostream>
# include <cstdlib>
# include <cmath>
using namespace std;
int main(){

// part a
   int n=1;
   double sum=0;
   while (n <= 500){
      if (n % 2 == 0 ){
	     sum = sqrt(n)+ sum;
		 n++;
      }
	  else n++;
   }
   cout << "Sum of square root of even numbers from 1 to 500: " << sum << endl;
   cout << endl;

// part b
   srand(time(0));
   for (int r=1; r<=10; r++){
      for (int c=1; c<=40; c++){
         n = rand() % 100;
		 while ( n%2 != 1) {
		    n = rand() % 100;
		 }
		 if (n % 2 == 1){
		    cout << n << "\t";
			c++;
		 }
	  }
   cout << endl;
   }
   cout << endl;

return 0;
}
