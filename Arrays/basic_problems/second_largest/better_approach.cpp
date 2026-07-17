#include<bits/stdc++.h>
// second largest element in an array
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    int second_largest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest = arr[i];
        }
    }

    cout << second_largest;


    return 0;
}