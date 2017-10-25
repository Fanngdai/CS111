// Dai , Fanng
// cs111 11A
// Homework 7

# include <iostream>
using namespace std;

bool isPrime(int n){
	for (int x=2; x<n; x++){
	if (n % x == 0) return false;
	}
	return true;
}

int fibonacci(int n){
	if (n<2) return n;
	int f = 0, f1 = 0, f2 = 1;
	for (int i = 2; i <= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

void number(int n){
	for (int c=1; c<=n; c++)
	cout << c;
}

void space(int n){
	for (int c=1; c<=n; c++)
	cout << " ";
}

int main(){

	cout << "The first 8 prime fibonacci numbers are: ";
	for (int x = 3; x <= 25; x++){
		if ( isPrime (fibonacci (x))) cout << fibonacci (x) << " ";
	}
	cout << endl << endl;

	cout << "Diagram 1" << endl;
	for (int r=1; r<=5; r++){
		number(r);
		cout << endl;
	}
	
	cout << "Diagram 2" << endl;
	for (int r=1; r<=5; r++){
		space(r-1);
		number(6-r);
		cout << endl;
	}
			
	cout << "Diagram 3" << endl;
	for (int r=1; r<=5; r++){
		space(5-r);
		number(2*r-1);			
		cout << endl;
	}
						
	cout << "Diagram 4" << endl;
		for (int r=1; r<= 5; r++){
			number(6-r);
			cout << endl;
		}
	cout << endl;

	return 0;  
}
   
