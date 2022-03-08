#include "time24.hpp"
struct BSTNode
{
    BSTNode* left;
    Time24 data;
    BSTNode* right;
// necessary operators, constructors/destructors, functions can be added

    public:
        BSTNode(){};
        BSTNode(Time24 t)
        {
            left=NULL;
            data=Time24(t.hr,t.min,t.sec);
            right=NULL;
        }
        BSTNode* insert(BSTNode* root, Time24 data)
        {
        if(root == NULL)
        {
            return new BSTNode(data);
        }
        else
        {
            BSTNode* cur;
        }
        if(data < root->data)
        {
            cur = insert(root->left, data);
            root->left = cur;
        }
        else
        {
            cur = insert(root->right, data);
            root->right = cur;
        }
        return root;
        }
        void Inorder(BSTNode* root)
        {
            if(!root)
            { 
                return;
            }
            Inorder(root->left);
            if(root->data.hr < 10)
            {
                cout<<"0";
            }
            cout<<root->data.hr<<":";
            if(root->data.min < 10)
            {
                cout<<"0";
            }
            cout<<root->data.min<<":";
            if(root->data.sec < 10)
            {
                cout<<"0";
            }
            cout<<root->data.sec<<endl;
            Inorder(root->right);
        }
};
