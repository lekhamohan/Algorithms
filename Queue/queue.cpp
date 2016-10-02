#include<iostream>
#include<stdio.h>


using namespace std;

struct node
{
  int num;
  node *next;
};


class Queue
{
  node *front;
  node *rear;

public:
  Queue();
  void enqueNum(int num);
  int  dequeueNum();
  void showQueue();
};


Queue::Queue()
{
  front = NULL;
  rear = NULL;
}

void Queue::enqueNum(int num)
{
  cout<<"\n inside Enq";
  node *temp = new node;
  //cout<<"\n check 1";
  temp->num = num;
  temp->next = NULL;
  
  cout<<"\n check 1";
  if(front == NULL)
  { 
    cout<<"\n check 2";  
    cout<<"\n first element";
   // rear->next = temp;
    front = temp;    
  }

  else
  { 
    cout<<"\nNON_FIRST element"; 
    rear->next = temp;
   }
  rear = temp;
  
}

void Queue::showQueue()
{

  if(front == rear)
  cout<<"\n\n Nothing to show";

  else
  {
    node *qPtr = front;
    cout<<"\n";
    while(qPtr != NULL)
    {     
      cout<<qPtr->num<<"--";
      qPtr = qPtr->next; 
    }  
  }
}

int Queue::dequeueNum()
{
  node * temp = new node;
  int delNum;
  if (rear == front)
    cout<<"\n Queue is empty";
   
  else
  {
    
    temp = front;
    front = front->next;        
  }
  delNum = temp->num;
  delete temp;
  return delNum;
  
}

int main()
{
  Queue queue;

  queue.enqueNum(5);   
  queue.enqueNum(10);
//  queue.showQueue();
  cout<<"FINAL LIST OF ELEMENTS";
  queue.enqueNum(24);   
  queue.enqueNum(76);
  queue.showQueue();

  cout<<"\n\nAfter popping";
  queue.dequeueNum();
  queue.showQueue();
  cout<<"\n\n after popping round 2";
  queue.dequeueNum();
  queue.showQueue();

  cout<<"\n\n Round 3";
  queue.dequeueNum();
  queue.dequeueNum();
  queue.showQueue();

  cout<<"\n moment of truth";
  queue.dequeueNum();
  queue.showQueue();


  return 0;
}
