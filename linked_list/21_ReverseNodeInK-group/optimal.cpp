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

Node* funKthNode(Node* temp, int k){
    k -=1 ;
    while(temp!=NULL && k>0){
        k--;
        temp = temp->next;
    }
    return temp;
}

Node* reverseNodeInKgroup(Node* head, int k){
    Node* temp =head;
    Node* nextNode = NULL;
    Node* prevNode = NULL;
    while(temp!=NULL){
        Node* kthNode = funKthNode(temp,k);
        if(kthNode==NULL) {
            if(prevNode) prevNode->next = temp;
            break;
        }
        nextNode = kthNode->next;
        kthNode->next = NULL;
        reverseLL(temp);
        if(temp == head) head = kthNode;
        else {
            prevNode->next = kthNode;
        }
        prevNode = temp;
        temp = nextNode;
    }
    return head;
}

void print(Node*head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    Node* head = convertArr2LL(a);
    head = reverseNodeInKgroup(head, k);
    print(head);
    return 0;
}

// time complexity 
// TC = O(2n)

// space complexity
// SC = O(1)