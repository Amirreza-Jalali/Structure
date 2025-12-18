#include "/Users/apple/Desktop/computer/bits.cpp"
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
}*first=NULL;

class link
{
    public:
    node *create_node(int );
    void insert_first();
    void insert_last();
    void display();
};

node *link :: create_node(int v)
{
   node *p,*n;
   p=first;
   n=create_node(v);
   n->data = v;
   n->next = NULL; 
  if(first==NULL)
  {
      n->prev=NULL;
      first=n;
  }
  else{
      p=first;
      while (p->next!=NULL)
      {
          p=p->next;
          n->next=p;
          p->prev=n;
      }
      
      
      
  }
   
   return n;
}

void link :: display()
{
     node *p;
     p=first;
     cout<<"----------------------------\n";
     if(first == NULL)
     {
        cout<<"list is empty\n";
     }
    while (p!=NULL) 
    {
        cout<<p->data<<"  ";
        p=p->next;
    }
    cout<<"----------------------------\n";

}
void link :: insert_first()
{
    node*p,*n;
    int v;
    if(first==NULL)
    {
        cout<<"first create the list\n";
        return ;
    }

    p=first;
    n=new (node);
       
       n->data=v;
       n->next=first;
       n->prev=NULL;


       first=n;
       first->prev=n;
       first=n;
}
    void link :: insert_last()
    {
        node *p,*pre,*n;
        int c=0;
        int v;
        n=create_node(v);
        cout<<"v :";
        cin>>v;
        p=first;
        pre=first;
        while (p->next!=NULL)
        {
            p=p->next;
        }
        n->next=NULL;
        p->next=n;


    }

int main() 
{
    link n;
            cout<<"1. Create"<<endl;
            cout<<"2. Insert at begining"<<endl;
            cout<<"3. Insert "<<endl;
            cout<<"4. Display"<<endl;
            cout<<"5. Exit"<<endl;
			
			cout<<"\n\nEnter(1..5): ";
            cin>>choice;
            
			switch ( choice )
            {
            case 1:
                cout<<"Enter: ";
                cin>>x;
                create(x);
                cout<<endl;
                break;

            case 2:
                cout<<"Enter: ";
                cin>>x;
                n.insert_first(x);
                cout<<endl;
                break;

            case 3:
                cout<<"Enter: ";
                cin>>x;
                cout<<"Insert Element after postion: ";
                cin>>pos;
                insert_last(x, pos);
                cout<<endl;
                break;

            case 4:
                show();
                cout<<endl;
                break;

            case 5:
                exit(1);
            }
        }
    
    return 0;
}





