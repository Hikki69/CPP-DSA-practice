#include<bits/stdc++.h>

using namespace std;
void zeroInEnd(vector<int>&arr,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j=i;
            break;
    }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    zeroInEnd(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}

//time complexity
// TC = O(N)

// space complexity
// SC = O(1)