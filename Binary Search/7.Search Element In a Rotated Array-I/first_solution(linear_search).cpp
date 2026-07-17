#include<bits/stdc++.h>

using namespace std;
// for Array containing unique elements

int searchElementInRotatedArr(vector<int>&a,int n,int target){
    for(int i=0;i<n;i++){
        if(a[i]==target){
            return i;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    cout << searchElementInRotatedArr(a,n,target);
    return 0;
}

// time complexity
// TC = O(n)

// space complexity
// SC = O(1)