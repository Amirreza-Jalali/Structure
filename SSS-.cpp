#include"/Users/apple/Desktop/computer/bits.cpp"

using namespace std;

class BST 
{
    int data;
    BST *left, *right;

public:
    
    BST();

   
    BST(int);

    
    BST* insert(BST*, int);

    
    void inorder(BST*);
};
BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
BST ::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST ::insert(BST* root, int value)
{
    if(root==NULL)
    {
        return  new BST(value);
    }
        if(value < root->data)
        {
            root->left=insert(root->left , value);
        }
        else if(value > root->data)
        {
            root->right=insert(root->right , value);
        }
       return root; 
}
void BST ::inorder(BST* root)
{
   if(root!= NULL)
    {
        inorder(root->left);
        cout<<root->data<<"\n";
        inorder(root->right);
    }
}

int main()
{
    BST b, *root = NULL;
    root = b.insert(root, 50);
    b.insert(root, 30);
    b.insert(root, 20);
    b.insert(root, 40);
    b.insert(root, 70);
    b.insert(root, 60);
    b.insert(root, 80);

    b.inorder(root);
    return 0;
}





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
   
