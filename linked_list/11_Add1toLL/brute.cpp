#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node*next;
    

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
      
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
       
    }
};

Node* convertArr2LL(vector<int> &arr){
    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    
    return head;
}

Node* reverseLL(Node* head){
    Node* temp = head;
    Node* prev =NULL;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

Node* add1toLL(Node* head){
    head = reverseLL(head);
    int carry = 1;
    Node* temp = head;
    while(temp!= NULL){
        temp->data += carry;
        if(temp->data<10){
            carry = 0;
            break;
        }
        else{
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }
    if(carry == 1){
        Node* newNode = new Node(1);
        head = reverseLL(head);
        newNode->next = head;
        return newNode;
    }
    head =reverseLL(head);
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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    Node* head = convertArr2LL(a);
    head = add1toLL(head);
    print(head);
    return 0;
}

// time complexity 
// TC = O(3n)

// space complexity
// SC = O(1)