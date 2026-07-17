#include<bits/stdc++.h>
// optimal solution is just the in built code of the next_permutation stl function
using namespace std;
vector<int> nextPermutation(vector<int>&a,int n){
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>=index;i--){
        if(a[i]>a[index]){
            swap(a[i],a[index]);
            break;
        }
    }
    reverse(a.begin()+index+1,a.end());
    return a;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>ans = nextPermutation(a,n);
    for(int x:ans){
        cout << x << " ";
    }
    return 0;
}

// time complexity
// TC = O(3n) ---> worst case

// space complexity
// SC = O(1)