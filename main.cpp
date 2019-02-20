#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int,int,int);
void swap(int&,int&);

//Read in three numbers, then sort them greatest to least
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);

  cout<<"From greatest to least, they are: ";
  //Reversing this line allows us to display the numbers in descending order while still using a sort in ascending order
  cout<<numC<<","<<numB<<","<<numA<<endl;
  return 0;
}

//sortDescending - takes in three integers and compares them, sorting them from smallest to largest
//first being the smallest, and third being the largest
void sortDescending(int first, int second, int third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}

//swap function switches the two integers passed in
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
