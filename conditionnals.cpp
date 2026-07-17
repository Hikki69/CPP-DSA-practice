#include<bits/stdc++.h>

using namespace std;
//write a program that takes an input of age
    // and prints if you are adult or not
    int main(){
        int age;
        cin  >> age;
        if(age >=18) {
            cout << "your an adult";
        }
        // else{
        //     cout << "Your not an adult";

        // }
        else if(age<=18){
            cout << "Your not an adult";

        }
    return 0;
}