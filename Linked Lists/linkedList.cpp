#include<iostream>
#include<stdio.h>
#include <memory>

using namespace std;

//1.add
//2.remove
//3.show
//4.Empty

struct node
{
  int number;
  std::shared_ptr<node> next;
};


bool isEmpty(std::shared_ptr<node> &head)
{
 cout<<"\nInside empty check function";
 return (head == NULL);
}


void add(std::shared_ptr<node> &head, int number)
{
 std:: shared_ptr<node> temp;
 temp.reset(new node);
 temp = head;   
 //temp = head; 
 
// cout<<"\n Adddress of head: "<<head.get();
// cout<<"\nAddress of temp: "<<temp.get();
 if(isEmpty(head))
 {
   head.reset(new node);
   head->number = number;
   head->next = NULL;
   cout<<"\nAdded first element";  
  }

  else
  {
   //  cout<<"\nAdding element to exisiting list";
     while(temp->next!= NULL)
       { 
     //   cout<<"\n traversing to next element----->"<<temp->number;
	temp = temp->next;
       }     
 
     shared_ptr<node> newNode; 
     newNode.reset(new node);
     newNode->number = number;
     newNode->next = NULL;
     temp->next = newNode;
    // cout<<"\n address of newNode: "<<newNode.get();

   //  head->next = temp;      
  }   
  //cout<<"\nExiting add";
}

void removeElement(std::shared_ptr<node> &head)
{
 std::shared_ptr<node> temp;
  temp = head;
  cout<<"\nIn Remove function";
  if(isEmpty(head))  cout<<"\nEmpty Already...";

  else
    {
      while(temp->next->next != NULL)
      temp = temp->next;
      
      temp->next = NULL;
      cout<<"\nNow last element is"<< temp->number;       
    }
}

void removeNum(std::shared_ptr<node> &head, int number)
{
  cout<<"\nIn Remove function\n"; 
  shared_ptr<node> temp, prev;
  prev = head;
 cout<<"\ninside removeNum";

 //First Element
 if(head->number == number) head = head->next;

 else
{  temp = head->next;
   while(temp->number != number)
      {
       cout<<"Navigating...\n";
       prev = temp;
       temp = temp->next;
      }
    prev->next = temp->next;
    cout<<"Deleting element-"<< temp->number;  
 }

}

void showList(std::shared_ptr<node> &head)
{ 
  cout<<"\n Display List..\n";
  std:: shared_ptr<node> temp;
 temp = head;  
 while(temp!= NULL)
    {
      cout<<temp->number<<"==>";
      temp = temp->next;	
    }  
//  cout<<head->number;     
}

void delCurrNode(shared_ptr<node> &currNode)
{

 cout<<"\n inside DelCurr\n";
 shared_ptr<node> temp;
 temp = currNode->next;
 currNode->number = temp->number;
 currNode->next = temp->next;
 cout<<"\n deleted node";

}

char menu()
{
  char choice; 

  cout<<"\nMenu\n1.Add(A)\n2.Remove(R)\n3.Show(S)\n4.Exit(E)\n";
  cin>> choice;
  return choice;
}


int main()
{
  int number =0;
  std::shared_ptr<node> head(nullptr), currNode;  
   char choice;
  do
  { 
    cout<<"\n In Main";  
    choice = menu();
  
     switch(choice)
      {
        case 'A':cout<<"Adding..;";
		add(head, 51);
		add(head, 18);
        	add(head, 2);
		add(head, 9);
		add(head, 12);
		add(head, 6);
		add(head, 99);
		add(head, 23);

		cout<<"\nBack to switch";
		showList(head);
	//	cout<<"SkippedShow List ";
		break;

        case 'R':cout<<"\nEnter num to del: "; cin>>number;
		cout<<"\nOkieee";
		removeNum(head,number);
		//currNode = head->next->next->next;
		//delCurrNode(currNode);
		showList(head);
		break;
			
      }    
   }while(choice!='E');
  
 return 0;
}









