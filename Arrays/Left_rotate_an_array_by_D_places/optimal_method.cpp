#include<bits/stdc++.h>

using namespace std;
void reverse(vector<int>&arr,int start,int end){
    while(start<end){
       swap(arr[start],arr[end]);
    start++;
    end--;
    }
}
void rotateArray(vector<int>&arr,int n,int d){
    if(n == 0) return;
    int d=d%n;
    if(d==0){
        return;
    }
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    rotateArray(arr,n,d);
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}