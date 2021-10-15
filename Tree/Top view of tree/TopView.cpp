#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
};
Node* getnode(int data){
    Node* newnode= new Node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

Node* insert(Node* root,int data){
    if(root==NULL){
        root=getnode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}
//top view of tree 
void topview( Node* root){
    queue<pair<int,Node*>> q;
    map<int,int>m;
    if(root==NULL){
        return;
    }
    q.push({0,root});
    while(!q.empty()){
        Node* current=q.front().second;
        int h=q.front().first;

        q.pop();
        if(!m[h]){
            m[h]=current->data;
        }
        if(current->left) q.push({h-1,current->left});
        if(current->right)q.push({h+1,current->right});
    }
    for(auto x:m){
        cout<<x.second<<" ";
    }
}
int main(){
    Node* root = getnode(1);
    root->left = getnode(2);
    root->right = getnode(3);
    root->left->right = getnode(4);
    root->left->right->right = getnode(5);
    root->left->right->right->right = getnode(6);
    cout << "Following are nodes in top view of Binary "
            "Tree\n";
    topview(root);
    return 0;
}