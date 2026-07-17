#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* KthPlace(Node* head,int el,int k){
    if (head == NULL){
        if(k==1) return new Node(el,nullptr);
        else return NULL;
    }
    if(k==1){
        return new Node(el,head);
    }
    int cnt =0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt== k-1){
            Node* newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> arr = {12,5,8,7};
    int el,k;
    cin >> el >> k;
    Node* head = convertArr2LL(arr);
    head = KthPlace(head,el,k);
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}