#include <bits/stdc++.h>
using namespace std;

// Recursive function to generate all permutations
void generatePermutations(int index, vector<int> &arr) {
    if (index == arr.size()) {
        for (int x : arr) cout << x << " ";
        cout << endl;
        return;
    }
    for (int i = index; i < arr.size(); i++) {
        swap(arr[index], arr[i]);     // choose
        generatePermutations(index + 1, arr);  // explore
        swap(arr[index], arr[i]);     // backtrack
    }
}

int main(){
    vector<int> arr = {1, 2, 3};
    generatePermutations(0, arr);
    return 0;
}