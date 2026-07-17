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

void deleteGivenNode(Node* temp){
    Node* prev = temp->back;
    Node* front  = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back= nullptr;
        delete(temp);
        return ;
    }
    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete(temp);
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
    deleteGivenNode(head->next);
    print(head);
    return 0;
}