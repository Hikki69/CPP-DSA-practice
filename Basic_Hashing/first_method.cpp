#include<bits/stdc++.h>

using namespace std;
int f(int num,int arr[],int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == num){
            cnt = cnt+1;
        }
    }
    return cnt;
}
int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "enter the numbers in arrays: ";
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number to count: ";
    cin >> num;
    cout << f(num,arr,n);
    return 0;
}

// time complexity tc = 5* O(n) 