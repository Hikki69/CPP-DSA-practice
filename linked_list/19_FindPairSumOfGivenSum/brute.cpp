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
    Node* temp1 = head;
    while(temp1!=NULL){
        Node* temp2 = temp1->next;
        while(temp2!=NULL && temp1->data+temp2->data <=sum){
            if(temp1->data+temp2->data == sum){
                cout<<temp1->data << " " << temp2->data << endl;
            }
            temp2 = temp2->next;
        }
        temp1 =temp1->next;
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
// TC = O(n^2)

// space complexity
// SC = O(1)
