#include<iostream>
#include<string>

using namespace std;

void IsDuplicate(string s)

{

std::cout<<"\nin function";
for(int i=0; i<s.length();i++)
	{

	cout<<"Checking out\n"<<s[i];
	for(int j=i+1;j<s.length();j++)
		{
               	if (s[i]==s[j])
                   cout<<"match found at\n"<<j<<" pos - which is "<<s[j];
		}
	}
}

int main(int argc, char * argv[])

{
//string str = argv[1];
std::cout<<"\nIn main\n";
IsDuplicate( argv[1]);
}
