#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next  = next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int  i=0;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int length (Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cout<< temp->data << " ";
        temp = temp->next;
        cnt++;

    }
    cout<<endl;
    return cnt;
}

int searchInLL(Node*head,int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        else {
            temp = temp->next;
        }
    }
    return 0;
}

int main(){
    int val;
    cin >> val;
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    // while (temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    cout<< length(head) << endl;
    cout << searchInLL(head,val);

    return 0;
}