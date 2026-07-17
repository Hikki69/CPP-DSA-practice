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

Node* fun(Node* head1,Node* head2){
    Node* t1 = head1;
    Node* t2 = head2;
    Node* dummyNode = new Node(-1);
    Node* current = dummyNode;
    int carry = 0;
    while(t1!=NULL || t2!=NULL){
        int sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum += t2->data;
        Node* newNode = new Node(sum%10);
        carry = sum/10;
        current->next = newNode;
        current = current->next;
        if(t1) t1= t1->next;
        if(t2) t2 = t2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        current->next = newNode;
    }
    
    return dummyNode->next;
}

void print(Node*head){
    while(head != NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>a1(n);
    for(int i =0;i<n;i++){
        cin >> a1[i];
    }
    vector<int>a2(m);
    for(int i =0;i<m;i++){
        cin >> a2[i];
    }
    Node* head1 = convertArrToDLL(a1);
    Node* head2 = convertArrToDLL(a2);
    Node* head = fun(head1,head2);
    print(head);
    return 0;
}

// time complexity 
// TC = O(max(n,m))

// space complexity
// SC = O(max(n1,n2))