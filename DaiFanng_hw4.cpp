/*
 Fanng , Dai
 CS111 11A Homework 4
 Question 1
 */

//http://cpp.sh/5jwlp

#include <iostream>
using namespace std;

int main(){
  cout << "To get the final average and highest score, enter -1.\n";
  cout << "You MUST enter a number from 0 to 100!\n";
  int student = 1;
  double score = 0 , t = 0 , h = 0;
  // h is high score
  // t is total score
   
  while ( score >= 0 && score <= 100){
    cout << "Enter the score for student " << student << ": ";
    cin >> score;
    student ++;
    t = score + t;
      
    // max. if the score now is bigger, it is the max.
    if ( score > h){
      h = score;
    }
  }  
   
  // if the score is not between -1 and 100 terminates.
  if (score < -1 || score > 100){
    cout << "I warned you to enter a number from 0 to 100! Good-bye.";
    return 0;
  }
   
  if ( score == -1 ){
    cout << "The average is " << (t+1) / (student - 2) << endl;
    cout << "The highest score is " << h << endl;
    return 0;
  }
}

// I have a question about my code. I don't understand why I have to put (-2) in the average section.
// Shouldn't it be -1?
