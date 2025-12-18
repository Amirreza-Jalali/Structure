#include "/Users/apple/Desktop/computer/bits.cpp"
#include<iostream>
#include<cstdio>
#include<cstdlib>


using namespace std;
///////////////////////////////////////
struct node
{
        int            data;
        struct node   *next;
        struct node   *prev;
}*start;
/////////////////////////////////////////////////////////
void create(int value)
{
        struct node *s,*t;
        
        t = new(struct node); 
        t->data = value;
        t->next = NULL;
        
        if (start == NULL)
        {
            t->prev = NULL;
            start = t;
        }
        else
        {
            s = start;
            while (s->next != NULL)
            s = s->next;
            s->next = t;
            t->prev = s;
        }
}
/////////////////////////////////////////////////////////
void add_first(int value)
{
        if (start == NULL)
        {
            cout<<"First Create the list."<<endl;
            return;
        }
        
        struct node *t;
        t = new(struct node);
        
        t->data = value;
		t->prev = NULL;
        t->next = start;
        
        start->prev = t;
        start = t;    
}
    
/////////////////////////////////////////////////////////
void add_pos(int value, int pos)
{
        struct node *t, *p;
        
		if (start == NULL)
              return;
    
        p = start;
        for (int i = 0;i < pos-1 ; i++)
        {
            p = p->next;
            if (p == NULL)
            {
                cout<<"Error"<<endl;
                return;
            }
        }
        
        t = new(struct node);
        t->data = value;
        if (p->next == NULL)
        {
            p->next = t;
            t->next = NULL;
            t->prev = p;      
        }
        else
        {
            t->next = p->next;
            t->next->prev = t;
            p->next = t;
            t->prev = p;
        }
}
/////////////////////////////////////////////////////////
void show()
{
        struct node *t;
        cout<<"-----------------------------\n";
        if (start == NULL)
        {
            cout<<"list is epmty"<<endl;
        cout<<"-----------------------------\n";
            return;
        }
        
        t = start;
        while (t != NULL)
        {
            cout<<t->data<<"  ";
            t = t->next;
        }
        cout<<"NULL"<<endl;
        cout<<"-----------------------------\n";
}


void deletenode(int item)
    {
        struct node *t, *q;
        
        if (start->data == item)
        {
            t = start;
            start = start->next;  
            start->prev = NULL;
            free(t);
            return;
        }
        
        q = start;
        while (q->next->next != NULL)
        {   
           if (q->next->data == item)  
            {
                t = q->next;
                q->next = t->next;
                t->next->prev = q;
                free(t);
                return;
            }
            q = q->next;
        }
        
        if (q->next->data == item)    
        { 	
            t = q->next;
            free(t);
            q->next = NULL;
            return;
        }
        
        cout<<"not found"<<endl;
    }
///////////////////
int main()
{
        int choice, x, pos;
        
        while (1)
        {
            cout<<"1. Create"<<endl;
            cout<<"2. Insert at begining"<<endl;
            cout<<"3. Insert after position"<<endl;
            cout<<"4. Display"<<endl;
            cout<<"5. delete \n";
            cout<<"6. Exit"<<endl;
			
			cout<<"\n\nEnter(1...6): ";
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
                add_first(x);
                cout<<endl;
                break;
            case 3:
                cout<<"Enter: ";
                cin>>x;
                cout<<"Insert Element after postion: ";
                cin>>pos;
                add_pos(x, pos);
                cout<<endl;
                break;
            case 4:
                show();
                cout<<endl;
                break;
            case 5:
                cout<<"position :";
                cin>>pos;
                deletenode(pos);
                cout<<endl;
                break;
            case 6:
                exit(1);
                break;
            }
        }
return 0;
}
