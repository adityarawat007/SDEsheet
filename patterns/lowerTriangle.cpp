#include<iostream>
using namespace std;

// this will print Lower * triangle

int main () {
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
    return 0;
}