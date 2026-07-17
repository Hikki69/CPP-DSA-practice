#include<bits/stdc++.h>

using namespace std;
void print1(int n){
   
    for(char i=0;i<n;i=i+1){
        for(char j=0;j<n;j=j+1){
            cout << "*";
        }
        cout << "" << endl;
    } 
}
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
         print1(n);
    }
   
}