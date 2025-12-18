#include "/Users/apple/Desktop/computer/bits.cpp"
//#include<bits/stdc++.h>
using namespace std;

 class node
 { 
   public:
   int data;
   node *next;

 }*first=NULL;
 class link
 { 
   public:
   node* create_node(int);
   void insert_first();
   void insert_last( );
   void insert_pos();
   void delete_pos();
   void zoj();
   void display();
 };

  void link :: display()
 {
   node* p=first;
   if(p == NULL)
   {
     cout<<"list is empty\n";
   }
   else{
     for(p=first ;p->next != NULL ;p = p-> next)
     {
       cout<< p->data<<"  ";
     }
   }
   cout<<"\n";
 }


  node* link::create_node(int v)
  {
  node *n=new node;
    n->data=v;
    n->next=NULL;
    return n;
}



void link :: insert_first()
{
  node *n,*p;
  int v;
  cout<<"v :";
  cin>>v;
  n=create_node(v);
  
    p=first;
    first=n;
    first -> next=p;
}

void link :: insert_last()
{
  node *n,*p;
  int v;
  cout<<"v :";
  cin>>v;

  n=create_node(v);
  p=first;

  while (p->next != NULL)
  {
    p = p->next;
  }
  
  n->next=NULL;
  p -> next=n;
}

void link :: insert_pos()
{
  node *p,*n,*pre;
  int v , pos , c=0;
  cout<<"data :";
  cin>>v;

  n=create_node(v);

  cout<<"position :";
  cin>>pos;

  int i;
  p=first;

  while (p != NULL)
  {
    p = p->next;
    c++;
  }
  if(pos == 1)i
  {
    if(first ==NULL)
    {
      first=n;
      first -> next =NULL;
    }
    else{
      p=first;
      first=n;
      first ->next=n;
    }
  }
    else if(pos>1 && pos <= c)
    {
      p=first;
      for(int i=0;i < pos ;i++)
      {
        pre=p;
        p = p->next;
      }
      pre -> next = n;
      n -> next = p;
    } 
    else {
      cout<<"position is out of range \n";
    }
  }


  void link :: delete_pos()
    {
      node *p ,*pre;
      int pos,c=0;
      
      if(first == NULL) return ;
      cout<<"position :";
      cin>>pos;
      p=first;
      if(pos==1)
      {
        first= p->next;
      }
      else
      {
        while( p!=NULL )
        {
          p=p->next;
          c++;
        }
        if(pos>=2  &&  pos<=c)
        {
          p=first;
          for(int i=1;i<=pos-1;i++)
          {
            pre=p;
            p=p->next;
          }
          pre->next = p->next;
        } 
        else{
          cout<<"position is out of range\n";
        }
        free(p);
      }
    }

 int main()
 {
   link n;
   int x;
   first=NULL;
   while (1)
   {
     cout<<"1. insert in begin" << endl;
     cout<<"2. insert at last  " <<endl;
     cout<<"3. insert in position  " << endl;
     cout<<"4. delete \n";
     cout<<"5. display     " << endl;
     cout<<"6. exit           " << endl;
     cout<<"enter(1..6):      " << endl;
     
   cin >>x;
       
	switch(x)
	{
		case 1:
			    n.insert_first();
			    cout<<endl;
			    break;
		
		case 2:
			    n.insert_last();
          cout<<"\n";
          break;
		case 3:
			    n.insert_pos();
          cout<<"\n";
          break;
    case 4:
          n.delete_pos();
          cout<<"\n";
          break;
    case 5:
          n.display();
			    cout<<"  ";
			    break;
         
    case 6:
          exit(1);
			    break;
         
	}
   	
   }
   return 0;
 }
  
