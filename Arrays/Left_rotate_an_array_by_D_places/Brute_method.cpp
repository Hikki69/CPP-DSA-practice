#include<bits/stdc++.h>

using namespace std;
void rotateArray(vector<int>&arr,int n,int D){
    D = D%n;
    int temp[D];
    for(int i=0;i<D;i++){
        
        temp[i] = arr[i];
    }

    for(int i=D;i<n;i++){
        arr[i-D] = arr[i];
    }

    for(int i=n-D;i<n;i++){
       arr[i] = temp[i-(n-D)];
    }

}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
     cin >> arr[i];   
    }
    int D;
    cin >> D;
    rotateArray(arr,n,D);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// time complexity
// TC = O(N+D)

// space complexity
// SC = O(D)