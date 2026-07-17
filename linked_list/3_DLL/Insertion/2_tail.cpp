#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrToDLL(vector<int>&arr){
    Node* head = new Node(arr[0]); 
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* insertHead(Node* head,int val){
    Node* newHead = new Node(val,head,nullptr);
    head->back = newHead;
    return newHead;
}

Node* insertTail(Node* head,int val){
    if(head->next == NULL){
        return insertHead(head,val);
    }

    Node* tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    Node* newTail = new Node(val,tail,tail->back);
    tail->back->next = newTail;
    tail->back = newTail;
    return head;
}

void print(Node*head){
    while(head != NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

int main(){
    int val;
    cin >> val;
    vector<int>arr = {1,2,3,4};
    Node* head = convertArrToDLL(arr);
    head = insertTail(head,val);
    print(head);
    return 0;
}