#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node*next;

    public:
    Node(int data1,Node* next1,Node* back1){
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
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


Node* oddEvenLL(Node* head){
    if(head==NULL || head->next == NULL) return head;

    Node* temp = head;
    vector<int>b;
    while(temp!=NULL && temp!=NULL ){
        b.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp) b.push_back(temp->data);
    temp = head->next;
    while(temp!=NULL && temp->next!=NULL){
        b.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp) b.push_back(temp->data);
    int i=0;
    temp = head;
    while(temp!=NULL){
        temp->data = b[i];
        i++;
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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    Node* head = convertArr2LL(a);
    head = oddEvenLL(head);
    print(head);
    return 0;
}

// time complexity 
// TC = O(n)

// space complexity
// SC = O(1)