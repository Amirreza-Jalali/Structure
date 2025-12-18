#include "/Users/apple/Desktop/computer/bits.cpp"
using namespace std;

template <typename T>

class node{  
   private:
    friend class link_list;
   node *next;
   T data;
 }*start=null ;
template <typename T>
class link_list{            
   public: 
      void insert_begin(T);
      void insert_last(T);
      void insert_index(T ,T);
      void reomve_last();
      void remove_first();
      void remove_index(T);
      void display();
};
template <typename T>
void link_list::insert_begin(T value){
   node *p,*n=new node;
   n->next=NULL;
   n->data=value;
   if(start==NULL){
      start=n;
      start->next=NULL;
   }
   else{
      p=start;
      start=n;
      n->next=p;
   }
}
template <typename T>
void link_list::insert_index(int value,int index){
   node *p,*pr,*n=new node;
   n -> next=NULL;
   n -> data=value;
   pr=start;
   for(int i=0;i<index;i++){
      pr=pr -> next;
   }
   p=pr -> next;
   pr -> next=n;
   n -> next=p;
}
template <typename T>
void link_list::insert_last(int value){
   node *pr,*n=new node;
   n->data=value;
   pr=start;
   n->next=NULL;
   while(pr->next!=NULL){
      pr=pr->next;
   }
   pr->next=n;
}
template <typename T>
void link_list::remove_first(){
   node *p=start;
   start=p->next;
   free(p);
}
template <typename T>

void link_list::remove_index(int index){
   node *p=start;
   for(int i=0;i<index;i++){
      p=p->next;
   }
   node *pr=p->next;
   p->next=pr->next;
   free(pr);
}
template <typename T>

void link_list::reomve_last(){
   node *p=start;
   while(p->next->next!=NULL){
      p=p->next;
   }
   node *pr=p->next;
   free(pr);
   p->next=NULL;
}
template <typename T>

void link_list::display(){
   node *p=start;
   while(p!=NULL){
      cout<<p->data<<" ";
      p=p->next;
   }
   cout<<endl;
}
main(){
   link_list <string>ob;
   while(true){
      int n;
      cout<<"1)insert_begin\n2)insert_last\n3)insert_index\n4)remove_first\n5)remove_index\n6)remove_last\n7)display\n8)END\n";
      cin>>n;

   switch (n)
   {
   case 1:
      int x;
      cout<<"enter a number = ";
      cin>>x;
      ob.insert_begin(x);
    break;
   case 2:
      cout<<"enter a number = ";
      cin>>x; 
      ob.insert_last(x);
        break; 
   case 3:
      int y;
      cout<<"enter a number = ";
      cin>>x;
      cout<<"enter a index = ";
      cin>>y; 
      ob.insert_index(x,y); 
      break; 

  case 4:
      ob.remove_first();
       break;
   case 5:
      cout<<"enter index = ";
      cin>>x;
      ob.remove_index(x);
       break;
   case 6:
      ob.reomve_last();
      break;
   case 7:
      ob.display();
       break;
   case 8:
      return 0;
      

     }
   }
 }