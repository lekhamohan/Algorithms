#include<stdio.h>
#include<iostream>

using namespace std;

class TwoStack
{

int topBeg;
int topEnd;
int *arr;
int size;

public:

TwoStack(int n)
{
  size =  n;
  arr = new int[size]; 
  topBeg = -1;
  topEnd = size;
}

void pushBeg(int num)
{
  if(topBeg < topEnd-1)
  {
    topBeg++;
    arr[topBeg] = num;     
  }

  else
    cout<<"\nStackOverflow";
}

void pushEnd(int num)
{  
  if(topBeg < topEnd -1)
  {
    topEnd --;
    arr[topEnd] = num;
  }
 
  else
    cout<<"\nStackOverflow";
}

void popBeg()
{
  if(topBeg == -1)
   cout<<"StackBeg Empty";
  
 else
 {
   int delNum = arr[topBeg];
   topBeg --; cout<<"\n popped element Beg is "<<delNum;
 }
 

}

void popEnd()
{
  if(topEnd == -1)
   cout<<"StackEnd Empty";
  
 else
  {
   int delNum = arr[topEnd];
   topEnd ++; cout<<"\n popped element End is "<<delNum;
  }

}

void showArray()
{ 
  cout<<"\n";
  for(int i=0; i<=topBeg; i++)
    cout<<arr[i]<<"****>";
  for(int i=size; i>=topEnd; i--)
   cout<<arr[topEnd]<<"==>";
}


};


int main()
{
  TwoStack ts(5);
  ts.pushBeg(7);
  ts.pushBeg(9);
  ts.pushEnd(12);
  ts.pushEnd(71);
  ts.pushEnd(34);
  //ts.showArray();
 
  ts.popBeg();
  ts.popEnd();
 
  cout<<"\n should be 7";
  ts.popBeg();
  ts.popEnd();
  ts.popEnd();
  ts.popEnd();
  //ts.showArray();

  return 0;
}


