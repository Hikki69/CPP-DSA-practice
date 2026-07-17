#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> three_sum(vector<int>&a,int n){
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0&&a[i]==a[i-1]) continue;
        int j =i+1;
        int k=n-1;
        while(j<k){
            int sum = a[i]+a[j]+a[k];
            if(sum <0) j++;
            else if(sum >0) k--;
            else{
                vector<int>temp={a[i],a[j],a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && a[j]==a[j-1]) j++;
                while(j<k && a[k]==a[k+1]) k--;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<vector<int>>result=three_sum(a,n);
    for(auto &triplet:result){
        for(int x:triplet){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

// time complexity
// TC =O(nlogn)+O(n*n)

// space complexity
// SC = O(number of triplets)