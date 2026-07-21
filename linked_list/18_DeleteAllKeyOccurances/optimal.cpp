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

Node* deleteKeyOccurences(Node* head,int key){
    Node* temp = head;
    Node* prevNode = NULL;
    Node* nextNode = NULL;
    while(temp!=NULL){
        if(temp->data==key){
            if(temp == head){
                head = head->next;
            }
            nextNode = temp->next;
            prevNode = temp->back;
            if(nextNode) nextNode->back = prevNode;
            if(prevNode) prevNode->next = nextNode;
            delete(temp);
            temp = nextNode;
        }
        else{
            temp = temp->next;
        }
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
    int n, key;
    cin >> n >> key;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Node* head = convertArrToDLL(arr);
    head = deleteKeyOccurences(head,key);
    print(head);
    return 0;
}

// time complexity 
// TC = O(n)

// space complexity
// SC = O(1)
