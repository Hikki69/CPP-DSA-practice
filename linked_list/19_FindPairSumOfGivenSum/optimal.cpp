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

void pairWithGivenSum(Node* head, int sum){
    if(head==NULL) return;
    Node* left = head;
    Node* right = head;
    while(right->next!=NULL){
        right = right->next;
    }
    while(left!=right && left->back!=right){
        if(left->data+right->data<sum){
            left = left->next;
        }
        else if(left->data+right->data>sum){
            right = right->back;
        }
        else{
            cout<<left->data<<" " << right->data<<endl;
            left = left->next;
            right = right->back;
        }
    }
}

void print(Node*head){
    while(head != NULL){
        cout << head->data<<" ";
        head = head->next;
    }
}

int main(){
    int n, sum;
    cin >> n >> sum;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Node* head = convertArrToDLL(arr);
    pairWithGivenSum(head,sum);
    return 0;
}

// time complexity 
// TC = O(n)

// space complexity
// SC = O(1)
