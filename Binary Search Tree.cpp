#include <iostream>

using namespace std;
struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* GetNewNode(int data)
{
    BSTNode* newNode = new BSTNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
BSTNode* insert(BSTNode* root, int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
    }
    else if(data<=root->data)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
        return root;
}

bool search(BSTNode* root,int data)
{
    if(root == NULL)
    return false;
    
    if(root->data == data)
    return true;
    else if(data<=root->data)
    return search(root->left,data);
    else
    return search(root->right,data);
}
int main()
{
    BSTNode* root = NULL ;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,4);
    root = insert(root,8);
    root = insert(root,20);
    
    int number;
    cout<<"enter number to be searched\n";
    cin>>number;
    if(search(root,number)==true)
    cout<<"found";
    else
    cout<<"not found\n";
}
