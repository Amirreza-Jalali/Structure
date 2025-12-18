#include "/Users/apple/Desktop/computer/bits.cpp"
using namespace std;
class node
{
    public:
    int data;
    node* right;
    node* left;
};

class link
{
    public:
    node* create_node(int );
    void preorder(node * );
};


node* link:: create_node(int v)
{
    node *n=new node;
    n->data=v;
    n->left=NULL;
    n->right=NULL;

    return n;
}
void link :: preorder(node * p)
{
     if (p!=NULL)
    {
        cout<<p->data << "  ";
        preorder(p->left);
        preorder(p->right);
    }
}

int main()
{
    link *root=create_node(1);

    root->left =create_node(2);
    root->right=create_node(3);

    root->left->left=create_node(4);
    root->right->right=create_node(5);

    root->left->right->left=create_node(6);

    cout<<"preorder : ";
    preorder (root);
    cout<<"\n\n";

    return 0;
}