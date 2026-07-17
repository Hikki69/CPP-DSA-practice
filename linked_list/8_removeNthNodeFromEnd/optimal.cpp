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

Node* removeNthNodeFromEnd(Node* head,int m){
    Node* fast  = head;
    for(int i=0;i<m;i++){
        fast = fast->next;
    }
    Node* slow = head;
    while(fast->next!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    if(fast == NULL){
        Node* newHead = head->next;
        delete(head);
        return newHead;
    }
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    delete(delNode);
    return head;
}

void print(Node*head){
    while(head != NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

int main(){
    int n,m;
    cin >> n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    Node* head = convertArr2LL(a);
    if(head == NULL) return 0;

    head = removeNthNodeFromEnd(head,m);
    print(head);
    return 0;
}

// time complexity 
// TC = O(len)

// space complexity
// SC = O(1)