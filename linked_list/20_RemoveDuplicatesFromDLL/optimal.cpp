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

Node* deleteDuplicateInDLL(Node*head){
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        Node* nextNode = temp->next;
        while(nextNode!=NULL && nextNode->data == temp->data){
            Node* duplicate = nextNode;
            nextNode = nextNode->next;
            delete(duplicate);
        }
        temp->next = nextNode;
        if(nextNode)nextNode->back = temp;
        temp = temp->next;
    }
    return head;
}

void print(Node*head){
    while(head != NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Node* head = convertArrToDLL(arr);
    head = deleteDuplicateInDLL(head);
    print(head);
    return 0;
}

// time complexity 
// TC = O(n)

// space complexity
// SC = O(1)
