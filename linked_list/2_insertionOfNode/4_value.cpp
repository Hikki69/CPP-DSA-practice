#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* atValue(Node* head,int el,int val){
    if (head == NULL){
        return NULL;
    }
    if(head->data==val){
        return new Node(el,head);
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data== val){
            Node* newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> arr = {12,5,8,7};
    int el,val;
    cin >> el >> val;
    Node* head = convertArr2LL(arr);
    head = atValue(head,el,val);
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}