/*
  Timothy Byrd
  Fall 2019
  CM 210

  This program uses a funcion (sub-function) to find the square of a given number and return that square value back to the main function (also called the Caller function). Hence, the subfunction is asometimes called 'Callee'.
*/

#include<iostream>
using namespace std;
//the function signature
int getSquare(int num);

int main()
{//beginning of the main function
  int numbers[3];
  int squares[3];
  int sumOfSquares=0;
  int i;
  for(i=0; i<3; i++)
  {//beginning of the for loop
   cout << "Enter a whole Number: ";
   cin>>numbers[i];
   squares[i] = getSquare(numbers[i]);// function call
   sumOfSquares += squares[i];
  } //end of the for loop

  cout<< "The sum of squares is: " << sumOfSquares << endl;

}//end of main function

//function definition
int getSquare(int n)
  {
    return n * n;
  }//end of the subfunction getSquare