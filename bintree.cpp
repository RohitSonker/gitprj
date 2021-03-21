#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node (int d){
        left=right=NULL;
        data=d;
    }
};
void postorder(Node * root){
    if(root!=NULL){
        postorder(root->left);
        cout<<root->data<<endl;
        postorder(root->right);
    }

}
void inorder(Node * root){
    if(root!=NULL){
        cout<<root->data<<endl;
        inorder(root->left);
        
        inorder(root->right);
    }

}
int main(){
Node *root=new Node(8);
root->left=new Node(3);
root->right=new Node(10);
root->left->left=new Node(1);
root->left->right=new Node(6);
postorder(root);
cout<<"inorder";
inorder(root);
}