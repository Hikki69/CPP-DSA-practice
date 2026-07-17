#include<bits/stdc++.h>

using namespace std;
void sumNum(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    sumNum(i-1, sum+i);

}
int main(){
    int n;
    cin >> n;
    sumNum(n,0);
    return 0;
}
