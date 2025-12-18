#include"/Users/apple/Desktop/computer/bits.cpp"

using namespace std;
 class node
 {
     public:
     int data;
     node*left;
     node*right;

     node(int data_)
     {
         data=data_;
         left=NULL;
         right=NULL;
     }
 };

 int sum_of_left(node *root)
 {
     if(root==NULL)
     {
         return 0;
     }
     stack<node*> stack_;
     stack_.push(root);
     
     int sum=0;

     while (stack_.size() > 0)
     {
        node* currentnode=stack_.top();
        stack_.pop();

        if(currentnode->left !=NULL)

        {
            stack_.push(currentnode->left);
            if(currentnode->left->left==NULL && currentnode->left->right==NULL)
            {
                sum+=currentnode->left->data;
            }
        }
        if(currentnode->right!=NULL)
        {
            stack_.push(currentnode->right);
        }
     }
     return sum;
    
 }
 int main()
 {
    node *root                =     new node(20);
    root->left                =     new node(9);
    root->right               =     new node(49);
    root->right->left         =     new node(23);
    root->right->right        =     new node(52);
    root->right->right->left  =     new node(50);
    root->left->left          =     new node(5);
    root->left->right         =     new node(12);
    root->left->right->right  =     new node(12);
    
    cout<<"\n";
    cout << "Sum of left is :" << sum_of_left(root) <<"\n";
    return 0;
 }
