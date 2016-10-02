#include<iostream>
#include<string.h>
//----------------------------REMOVE DUPLICATES------------------------

using namespace std;


void isDup(string s)
{

  for(int i =0 ; i<s.length(); i++)
  {     int temp = s.length()-1;
        cout<<"\ninitial lenght:"<<temp;
	for(int j=i+1; j<s.length();j++)
	{
	  if(s[i] == s[j])
		{
	        for(int k=j; k<s.length();k++)
		    s[k] = s[k+1];
                    s.erase(s.begin()+temp); 
                    temp = s.length()-1; 
	  cout<<"\nchanged lenght:"<<temp;
//   cout<<"\nmatch found at: "<<i<<","<<j<<"\n";	
//		    isDup(s);	
		}
	}    

  }
    cout<<"\nremoved string is "<<s;
}

int main(int argc, char * argv[])

{

cout<<"Argument passed was:"<<argv[1]<<"\n";
isDup(argv[1]);

}
