#include<iostream>
#include<string>

using namespace std;

class Solution 
{
  public:
    string reverseString(string s) 
    {
      if(s == "")  throw (s);
      if(s.length() == 1) return s;
      string leftStr = s.substr(0,s.length()/2); 
      string rightStr = s.substr(s.length()/2,s.length()); 
         
      return reverseString(rightStr) + reverseString(leftStr);
    }
};

int main()
{
  Solution sol;
  try
  {
    cout<<"\n"<<sol.reverseString("Paypal")<<"\n\n"; }
    catch(string s) {
    cout<<"\nYour arrgument can not be null\n";
  } 
 return 0;
}
