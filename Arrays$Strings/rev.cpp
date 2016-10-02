#include<iostream>
#include<string.h>


using namespace std;

// 1.get input
//2.pass funcn
//3.store in temp
//reverse


//void reverse(string s)
//{
//  cout<<"entered string is "<<s<<"\n";
//  string temp;
//  int size = s.length();
//  for(int i=size; i>=0;i--)
//	{
////	 char t = s[i].c_str();
//         temp.append(s[i]);
//	}
//
//  cout<<"reversed string is"<<temp<<"\n";
//
//}
//

void reverse(char * s)
{

char * first = s;
char * last = s+strlen(s);
cout<<"\n the contents of first and last  "<<first<<","<<last;
//while(first<last)
//	{
//	  --last;
//	  char temp = * first;
//	  cout<<"\n temp ---" << temp;
//	  *first = * last;
//	  cout<<"\n first----" << first;
//	  *last = temp;	
//	  cout<<"\n last ---" << last;
//	  ++ first;
//
//	}
//          cout<<"\nlast "<< last; 	
//          cout<<"\nfirst "<< first<<"\n"; 	
int length = strlen(s);
char rev[length],temp[length];

for(int i = 0; i<=length; i++)
{
-- last;
rev[i] = *last;
}
  cout<<"\nThe reveresed string is: "<< rev<<"\n";
}


int main(int argc, char ** argv)

{
//  cout<<"Sent argument was  "<< argv[1]<<"\n";
  reverse(argv[1]);

}
