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

Node* removeK(Node* head,int k){
    if(head == NULL) return head;
    if(head->data == k){
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    Node* prev = NULL;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == k){
            prev->next = prev->next->next;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

int main(){
    vector<int> arr = {12,5,8,7};
    int k;
    cin >> k;
    Node* head = convertArr2LL(arr);
    head = removeK(head,k);
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}