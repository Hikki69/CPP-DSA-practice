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

Node* middleElement(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    int middleNode = (cnt/2)+1;
    temp = head;
    while(temp!=NULL){
        middleNode--;
        if(middleNode == 0) break;
        temp = temp->next;
    }
    return temp;
}

void print(Node*head){
    if(head != NULL){
        cout << head->data;
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
    head = middleElement(head);
    print(head);
    return 0;
}

// time complexity 
// TC = O(n)

// space complexity
// SC = O(1)