//-----------Given a string, implement ZigZag conversion-----------------
// Challenge Taken from LeetCode

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution 
{
  public:
 
  string convert(string s, int numRows)
  {
    //cout<<"\n Inside convert Function\n"<<s;
    int strSize = s.length();  
    string *tempStr = new string[numRows];  //Temp string object
    
    int row =0;    			    //Push character row by row
    for(int i = 0; i<strSize; i++)
      { 
        tempStr[row].push_back(s[i]);       //appending string row-wise
        if(numRows == row+1) row = -1;
        row = row+1;
      }       
  
  s.clear();				    

  for(int i=0; i< numRows; i++) 
    {
       s.append(tempStr[i]);
       s.append("\n");
    }

  return s;
 }
};



int main()
{
  Solution sol; int numRows = 4; //Number of rows to be displayed
  string str = "PayPalIsHiring";
  
  cout<<"\nZig-Zag converted string is:\n"<<sol.convert(str,4)<<"\n";

  return 0;
}
