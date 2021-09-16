#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

Node* newNode(int data){
    Node* stackNode=new Node();
    stackNode->data=data;
    stackNode->next=NULL;
    return stackNode;
}

int isEmpty(Node* root){
    return !root;
}

int Push(Node** root,int data){
    Node* head=newNode(data);
    head->next=*root;
    *root=head;
    cout << data << " pushed to stack\n";
}

int Pop(Node** root){
    if(isEmpty(*root)){
        return INT_MIN;
    }
    Node* temp=*root;
    *root=(*root)->next;
    int poped=temp->data;
    free(temp);
    return poped;
}

int Peek(Node* root){
    if(isEmpty(root)){
        return INT_MIN;
    }
    return root->data;
}

int main(){
    Node* root=NULL;
	Push(&root,10);
	Push(&root,20);
	Push(&root,30);
	Push(&root,40);
	Push(&root,50);
	cout << "poped from stack :" << Pop(&root)<<endl;
    cout << "Top element is " << Peek(root) << endl;
    cout << "Elements present in stack : ";
     while(!isEmpty(root)){
         cout<<Peek(root)<<" ";
        Pop(&root);
     }
     return 0;
}