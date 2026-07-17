#include<bits/stdc++.h>

using namespace std;
void zeroInEnd(vector<int>&arr,int n){
    // step-1
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    // step-2
    int nz = temp.size();
    for(int i=0;i<nz;i++){
        arr[i] = temp[i];

    }

    // step-3
    for(int i=nz;i<n;i++){
        arr[i] = 0;
    }
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    zeroInEnd(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// time complexity
// TC = O(2N)

// space complexity
// SC = O(N)