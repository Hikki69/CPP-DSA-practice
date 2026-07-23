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

Node* findNthNode(Node*temp, int k){
    int cnt = 1;
    while(temp!=NULL){
        if(cnt==k) return temp;
        cnt++;
        temp = temp->next;
    }
    return temp;
}

Node* rotateLLbyK(Node* head, int k){
    if(head==NULL || k==0) return head;
    Node* lastNode=head;
    int n =1;
    while(lastNode->next!=NULL){
        lastNode = lastNode->next;
        n++;
    }
    if(k%n==0) return head;
    k = k%n;
    lastNode->next = head;
    
    Node* newLastNode= findNthNode(head,n-k);
    head = newLastNode->next;  
    newLastNode->next = NULL;
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
    head = rotateLLbyK(head, k);
    print(head);
    return 0;
}

// time complexity 
// TC = O(2n)

// space complexity
// SC = O(1)