#include"/Users/apple/Desktop/computer/bits.cpp"
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
     node *create_node(int );
     void display();
     void insert_first();
     void insert_last();
     void maxlist();
     void insert_pos();
     void deletepos();
 };
 node *link :: create_node(int v)
 {
     node *n;
     n=new node;
     n->data=v;
     n->next=NULL;
     return n;
 }
 void link:: display()
 {
     node *p;
     p=first;
     cout<<"----------------------------\n";
     if(first==NULL)
     {
         cout<<"list is empty";
         
     }
     for(;p!=NULL;p=p->next)
     {
         cout<<p->data<<"  "; 
     }
     cout<<"\n----------------------------";

 }
 void link :: insert_first()
 {
     node *p,*n;
     int  v;
     cout<<"v :";
     cin>>v;
     n=create_node(v);

     p=first;
     first=n;
     first->next=p;
 }
 void link :: insert_last()
 {
     node *p,*n;
     p=first;
     int v;
     cout<<"v :";
     cin>>v;
     n=create_node(v);
     while (p->next!=NULL)
     {
         p=p->next;
     }
     p->next=n;
     n->next=NULL;     
     
 }
 void link :: maxlist()
 {
     node*p;
     p=first;
     int max=0;
     while (p->next!=NULL)
     {
         if(p->data > max)
         {
             max=p->data;
         }
         p=p->next;
     }
     cout<<"max is :"<<max<<"\n";
 }
 void link :: insert_pos()
 {
     node *n,*p,*pre;
     p=first;
     int pos,c=0,v;
     cout<<"v :";
     cin>>v;
     n=create_node(v);
     cout<<"position :";
     cin>>pos;
     int i;
     while (p->next!=NULL)
     {
         p=p->next;
         c++;
     }
     if(pos==1)
     {
         if(first==NULL)
         {
             first=n;
             first->next=NULL;
         }  
         else{
              p=first;
              first=n;
              first->next=p;
         } 
     }
     if(pos>1 &&  pos<=c)
     {
         p=first;
         for(int i=0;i<pos;i++)
         {
             pre=p;
             p=p->next;
         }
         n->next=p;
         pre->next=n;
     }
     else{
         cout<<"position is out of range\n";
     }
 }
void link :: deletepos()
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
     while (1)
     {
         cout<<"1. insert first\n";
         cout<<"2. insert_pos\n";
         cout<<"3. insert last \n";
         cout<<"4. delete\n";
         cout<<"5. dispaly\n";
         cout<<"6. max\n";
         cout<<"7. exit\n";
         cout<<"enter(1...7)\n";

         int x;
         cin>>x;
         switch(x)
         {
             case 1:
                    n.insert_first();
                    cout<<"\n";
                    break;
             case 2:
                    n.insert_pos();
                    cout<<"\n";
                    break;
             case 3:
                    n.insert_last();
                    cout<<"\n";
                    break;
             case 4:
                    n.deletepos();
                    cout<<"\n";
                    break;
             case 5:
                    n.display();
                    cout<<"\n";
                    break;
             case 6:
                    n.maxlist();
                    cout<<"\n";
                    break;
             case 7: 
                    exit(1);
         }
     }
return 0;
 }