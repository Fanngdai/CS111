/*
 Dai, Fanng
 CS111 11A Homework 1
 Question 1
 
 Prompts user for the bill amount, the percentage tip to give and the amount of people.
 Program will calculate the amount each individual will have to pay.
 */

#include <iostream>
using namespace std;

int main(){
   double bill_amt;
   double tip_pct;
   int  num_ppl;
   double  per_person;
   cout << " Enter the bill amount: ";
   cin >> bill_amt;
   cout << " Enter tip (in decimal form): ";
   cin >> tip_pct;
   cout << "Enter number of people: " ;
   cin >> num_ppl;
   per_person = ((bill_amt * tip_pct) + bill_amt) / num_ppl;
   cout << "Each person will pay: " << per_person << " dollars." << endl;
   return 0;
}
