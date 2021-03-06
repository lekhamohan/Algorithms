/**
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: 
 * (you may want to display this pattern in a fixed font for better legibility)
 *  P   A   H   N
    A P L S I I G
    Y   I   R
 * And then read line by line: "PAHNAPLSIIGYIR"
 * Write the code that will take a string and make this conversion given a number of rows:
 * string convert(string text, int nRows);
 * convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".
  Challenge Taken from LeetCode
*/

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
    
    int row =0; int step = 1;    			    //Push character row by row
    for(int i = 0; i<strSize; i++)
      { 
        tempStr[row].push_back(s[i]);       //appending string row-wise

        if(row == 0) step = 1;
        else if(row == numRows-1) step = -1;
       
        row = row+step;
      }       
  
  s.clear();				    

  for(int i=0; i< numRows; i++) 
    { 
       s.append(tempStr[i]);
       s.append("\n");
    }
  //delete tempStr;
  return s;
 }
};



int main()
{
  Solution sol; int numRows = 3; //Number of rows to be displayed
  string str = "PayPalIsHiring";
  
  cout<<"\nZig-Zag converted string is:\n"<<sol.convert(str,numRows)<<"\n";

  return 0;
}
