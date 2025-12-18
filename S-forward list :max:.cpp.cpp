#include "/Users/apple/Desktop/computer/bits.cpp"
using namespace std;

class node
{
    public:
    int data;
    node *next;
} *first=NULL;
class link 
{
    public:
    node* create_node(int );
    void insert_first();
    void insert_last();
    void cheak_max();
    void display();
};



node *link :: create_node(int v )
{
    node *n=new node;
    n->data=v;
    n->next=NULL;
    return n;
}

void link :: insert_first()
{
    node *p,*n;
    int v;
    cout<<" v :";
    cin>>v;
    n=create_node(v);
    p=first;
    
    first=n;
    first->next=p;
    
}

void link :: insert_last()
{
    node *p,*n;
    int v;
    cout<<" v:";
    cin>>v;
    n=create_node(v);

    p=first;
    while (p!=NULL)
    {
       p=p->next;
    }
    n->next=NULL;
    p->next=n;

}

void link :: cheak_max()
{
    node *p;
    int max=0;
    p=first;
    while (p!=NULL)
    {       
       if(p->data > max)
       {
           max=p->data;
       }  
       p=p->next;
    }
    cout<< "--------------------------------\n";
    cout<<"mx is :::: "<<max<<"   "<<"\n";
    cout<< "--------------------------------\n";
}
void link ::display()
{
    node *p;
    p=first;
    
    if(first == NULL)
    {
       cout<< "--------------------------------\n";
        cout<<"list is empty\n";
       cout<< "--------------------------------\n";
        return;
    }
    cout<< "--------------------------------\n";
    for(;p->next!=NULL; p=p->next)
    {
        cout<<p->data<<"  ";
    }
    cout<<"\n";
    cout<< "--------------------------------\n";
}
int main()
{
    link n;
    int x;
    first=NULL;
    while(1)
    {
        cout<<"1. insert first\n";
        cout<<"2. insert last\n";
        cout<<"3. max  \n";
        cout<<"4. display\n";
        cout<<"5. exit\n";
        cout<<"(1...5)\n";



        cin>>x;



        switch (x)
        {
        case 1:
                n.insert_first();
                cout<<"\n";
                break;
        case 2:
                n.insert_last();
                cout<<"\n";
                break;
        case 3:
                n.cheak_max();
                cout<<"\n";
                break;
        case 4:
                n.display();
                cout<<"\n";
                break;
        case 5:
                exit(1);
                break;
        }

    }
    
    return 0;
}