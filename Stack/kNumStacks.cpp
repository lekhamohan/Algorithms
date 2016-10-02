#include<iostream>
#include<stdio.h>


using namespace std;

class KStacks

{

  int *top;
  int *prevTop;
  int *array;  
  int arrNum , stNum, free;


public:
  
  KStacks(int stNum, int arrNum);
  void push(int stNum , int num);
  bool isFullArray();
  void showArray();
};


KStacks::KStacks(int k, int n)   //k - stack nim ; n = array num
{
  cout<<"\n inside constructor with k and n "<<k<<", "<<n;
  top = new int[k];
  prevTop = new int[n];
  array = new int[n];
  arrNum = n;
  stNum = k;
  free = 0;
  
  for(int i=0; i<k;i++)
    top[i] = -1;

  for(int j=0; j<n; j++)
    { 
      prevTop[j] = j+1;
      array[j] = 0;
    }
  prevTop[n-1] = -1;
}

void KStacks::showArray()
{
  //cout<<"\n In Show Array";
  for(int i=0; i<arrNum; i++)
    cout<<"  "<<array[i];

  cout<<"\nFree is" << free<<"\n";
  for(int i = 0; i<stNum; i++)
    cout<<top[i] <<" ";
}

bool KStacks::isFullArray()
{  
 // cout<<"\n in isFullAyya()";
  return (free == -1) ; 
}


void KStacks::push(int stNum , int num)
{ 
 // cout<<"\n inside push fucntion stNum, num"<<stNum<<" "<<num;
 
  if (isFullArray())
  {
    cout<<"\n Stack Full\n";
    return;
  }  
  
  int i = free; 
  free = prevTop[i];
  prevTop[i] = top[stNum];
  top[stNum] = i; 
  cout<<"\n top of stNum is"<<top[stNum];
  array[i] = num;
  showArray(); 

}


int main()
{
  KStacks kStack(3,10);
  cout<<"\n Pushing 32 into 0\n" ;
  kStack.push(0, 32);
  cout<<"\n Pushing 10 into 0\n" ;
  kStack.push(1,15);
  kStack.push(2, 77);
  kStack.push(1, 32);
  kStack.push(1,89);
  kStack.push(0, 32);
  kStack.push(2, 11);
  kStack.push(2,43);
  kStack.push(0, 98);
  kStack.push(0, 48);
  kStack.push(0, 43);




//cout<<"\n Pushing 10 into \n" ;
  

  return 0; 
}
