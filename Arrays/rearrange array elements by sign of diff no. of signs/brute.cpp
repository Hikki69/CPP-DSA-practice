#include<bits/stdc++.h>

using namespace std;
vector<int> rearrangeArr(vector<int>&a,int n){
    vector<int>pos;
    vector<int>neg;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        if(a[i]<0){
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index = neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            a[index] = pos[i];
            index++;
        }
    }
     else{
        for(int i=0;i<pos.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index = pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>results = rearrangeArr(a,n);
    for(int x:results){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(n)+O(min(pos,neg))+O(leftovers)
// TC = O(n) ---> wost tc when equal no. of pos and neg

// space complexity
// SC = O()