#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(vector<int>&arr,int n){
    int i= 0;
    for(int j=0;j<n;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int newArray = removeDuplicates(arr,n);
    for(int i=0;i<newArray;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}

// time complexity 
// TC = O(N);

// spcae complexity 
// SC = O(15)