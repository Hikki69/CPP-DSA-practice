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

Node* sortLL(Node* head){
    if(head == NULL) return head;

    int cnt0 = 0,cnt1 = 0,cnt2 = 0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==0)cnt0++;
        else if(temp->data==1)cnt1++;
        else cnt2++;
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(cnt0){
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1){
            temp->data = 1;
            cnt1--;
        }
        else{
            temp->data = 2;
            cnt2--;
        }
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
    if(head == NULL) return 0;

    head = sortLL(head);
    print(head);
    return 0;
}

// time complexity 
// TC = O(2n)

// space complexity
// SC = O(1)