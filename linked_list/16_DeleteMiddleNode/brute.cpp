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

Node* DeleteMiddleElement(Node* head){
    if(head==NULL || head->next==NULL) return head;
    int t = 0;
    Node* temp = head;
    while(temp!=NULL){
        t++;
        temp = temp->next;
    }
    int t2 = t/2;
    temp = head;
    while(temp!=NULL){
        t2--;
        if(t2==0){
            Node* mid = temp->next;
            temp->next = temp->next->next;
            delete(mid);
            break;
        }
        temp = temp->next;
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
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    Node* head = convertArr2LL(a);
    head = DeleteMiddleElement(head);
    print(head);
    return 0;
}

// time complexity 
// TC = O(n + n/2)

// space complexity
// SC = O(1)