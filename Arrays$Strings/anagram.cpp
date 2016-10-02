#include<iostream>
#include<string.h>

using namespace std;

//char* checkAnagram(char* s)
//{
//  cout<<"\n inside fucntion";
//  int j = strlen(s)-1;  
//	
//  for(int i=0 ; i<strlen(s)/2; i++)
//   {
//     if(s[i] == s[j])
//       return(char*)"yes";
//     
//     else
//	return (char*)"no";	
//
//   }
//
//}
//

char* checkAnagram(string s)
{
  cout<<"\n inside fucntion";
  int j = s.length()-1;  
	
  for(int i=0 ; i<s.length()/2; i++)
   {
     if(s[i] == s[j])
       return(char*)"yes";
     
     else
	return (char*)"no";	

   }

}



  
  
  int  main(int argc, char*argv[])
  {
  
    char* s;
    cout<<"enter word to check for anagrams\n";
   // cin>>s;
    
    cout<<"\n"<<checkAnagram(argv[1]); 

  }


