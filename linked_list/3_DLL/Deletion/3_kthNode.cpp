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

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete(prev);
    return head; 
}

Node* deleteTail(Node* head){
   if(head==NULL) return NULL;
   Node* tail = head;
   while(tail->next!=NULL){
    tail = tail->next;
   }
   Node* prev = tail->back;
   prev->next = nullptr;
   tail->back = nullptr;
   delete(tail);
   return head;
}

Node* deleteKthNode(Node* head,int k){
    if(head == NULL)return NULL;
   int cnt = 0;
   Node* temp = head;
   while(temp!=NULL){
    cnt++;
    if(cnt == k)break;
    temp = temp->next;
   }
   Node* prev = temp->back;
   Node* front = temp->next;
   if(prev==NULL && front==NULL){
    return NULL;
   }
   else if(prev == NULL){
    return deleteHead(head);
   }
   else if(front== NULL){
    return deleteTail(head);
   }
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete(temp);
   return head;
}

void print(Node*head){
    while(head != NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

int main(){
    int k;
    cin >> k;
    vector<int>arr = {1,2,3,4};
    Node* head = convertArrToDLL(arr);
    head = deleteKthNode(head,k);
    print(head);
    return 0;
}