# include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data1){
        data=data1;
        next=NULL;
    }

};
Node* createll(vector<int>&arr){
    if (arr.size()==0){
        return NULL;
    }Node*head=new Node(arr[0]);
    Node*temp=head;
    for (int i=1;i<arr.size();i++){
        temp->next=new Node(arr[i]);
        temp=temp->next;

    }return head;
}void printll(Node*head){
    if (head==NULL){
        return;
    }Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{vector<int>arr={1,2,3,4,5,6,8,7,10,9};
Node*head=createll(arr);
printll(head);

 return 0;
}