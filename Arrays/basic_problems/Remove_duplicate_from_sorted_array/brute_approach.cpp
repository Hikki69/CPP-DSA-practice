#include<bits/stdc++.h>

using namespace std;
int explainSet(vector<int>&arr,int n){
    set<int>st;for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it:st){
        arr[index] = it;
        index ++;
    }
    return index;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int newArr = explainSet(arr,n);
    for(int i=0;i<newArr;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// time complexity 
// TC = O(NlogN + N)

// space complexity 
// Sc = O(N)