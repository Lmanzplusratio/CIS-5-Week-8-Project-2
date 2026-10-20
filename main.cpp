#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 72; // change this number

// Project 2 — Isaiah Salvatierra
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

using std::endl;
using std::cout;

int main() {
  const int N = 30;
  int scores[N];
  int sum = 0, A = 0, B = 0, C = 0, D = 0, F = 0, pass = 0;
  const int scoreAt10 = 81; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));
 
  for (int i = 0; i < N; ++i) 
  {
     scores[i] = rand() % 100;
  }

 const int scoreAt20 = 64; // change this number
  scores[0] = scoreAt0;
  const int scoreAt27 = 41; // change this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  // Changing all certain index elements here
  scores[0] = 75;
  scores[10] = 85;
  scores[20] = 59;
  scores[27] = 49;

  for (int i = 0; i < N; ++i) // Displaying the Student Indexes and their scores respectively
   {
    cout << "Student " << i << ":" << " " << scores[i] << endl;
   }
 
  for (int i = 0; i < N; ++i) // For loop on score rankings and where they land in grading scale
   {
     sum += scores[i];
     if (scores[i] >= 90) ++A;
     else if (scores[i] < 90 && scores[i] >= 80) ++B;
     else if (scores[i] < 80 && scores[i] >= 70) ++C;
     else if (scores[i] < 70 && scores[i] >= 60) ++D;
     else if (scores[i] < 60) ++F;
     if (scores[i] >= 70) ++pass;
 
   }
   cout << "Ok, here is a breakdown of those grades with the proper updates: \n"
        << "A:" << A << endl << "B:" << B << endl << "C:" << C << endl
        << "D:" << D << endl << "F:" << F << endl << "Pass:" << pass << endl;
 
 for (int i = 0; i < N; ++i) // While loop inside for loop indicating what students should go to office hours
   {  
    while (i < N) 
    {
     if (scores[i] < 60)
      cout << "Student " << i << " should visit office hours!" << endl; 
     ++i;
    }
   }
  
  return 0;
}
