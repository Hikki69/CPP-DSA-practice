#include<bits/stdc++.h>

using namespace std;
bool ls(vector<int>&a,int num){
    for(int i=0;i<a.size();i++){
        if(a[i]==num){
            return true;
        }
    }
    return false;

}
int longestConsecutiveSeq(vector<int>&a,int n){
    int longest =1;
    for(int i=0;i<n;i++){
        int x = a[i];
        int cnt =1;
        while(ls(a,x+1)==true){
            x = x+1;
            cnt = cnt+1;
        }
        longest = max(longest,cnt);
    }
        
    return longest;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << longestConsecutiveSeq(a,n);
    return 0;
}

// time complexity
// TC = O(N^2)+O(N)

// space complexity
// SC = O(1)