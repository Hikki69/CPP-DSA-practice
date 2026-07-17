#include<bits/stdc++.h>

// You are given an array A of size N, where A[i]
// represents the number of pages in the i-th book.
// You are also given an integer M representing the number of students.
// Your task is to allocate all books to the students such that:
// Each student gets at least one book.
// Each book is allocated to exactly one student.
// Books assigned to a student must be contiguous.
// The allocation should be done in such a way that 
//the maximum number of pages assigned to any student is minimized.
// Return that minimum possible maximum number of pages.
// If allocation is not possible, return -1.

using namespace std;
int sum (vector<int>&a,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum ;
}
int fn(vector<int>&a,int n,int pages,int m){
    int students = 1,pagestudents = 0;
    for(int i=0;i<n;i++){
        if(pagestudents+a[i]<=pages){
            pagestudents += a[i];
        }
        else{
            students++;
            pagestudents = a[i];
        }
    }
    return students;
}
int minNumOfPages(vector<int>&a,int n,int m){
    int low = *max_element(a.begin(),a.end());
    int high = sum(a,n);
    for(int pages = low;pages<=high;pages++){
        int cntstudents = fn(a,n,pages,m);
        if(cntstudents == m) return pages;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    cout << minNumOfPages(a,n,m);
    return 0;
}

// time complexity
// TC = O(sum-max+1)*O(n)

// space complexity
// SC = O(1)