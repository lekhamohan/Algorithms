/**
* Implement your own atoi, given a string
* Handle possible error cases
*Challenge accepted from LeetCode
**/

#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

class Solution 
{
  public:
    int myAtoi(char* input);   
};

bool checkNumeric(char input)
{
 //cout<<"CheckNum: "<<input; 
 return (input>= '0' && input<= '9') ? true : false;
}

int Solution::myAtoi(char * input)
{    
  int num = 0;
  for(int i=0; input[i]!= '\0'; i++)		//Check if Numeric
  {   
    cout<<"\n current numeric:"<<input[i]<<"  prev Num: "<<num; 
    if(checkNumeric(input[i])) 
    {
      cout<<"\n"<<num<<"*"<<10<<"+"<<input[i];
      num = num*10 + input[i];
      cout<<"\nNum is"<<num;
    }
  }
   
if(input[0] == '-') num = num* -1;		//Handle negative numbers

return num;
}

int main()
{
  Solution sol;
  char input[] = "-45673";
  cout<<"\nResult is: "<<sol.myAtoi(input);
  return 0;
}
