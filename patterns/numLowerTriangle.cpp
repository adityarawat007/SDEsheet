#include<iostream>
using namespace std;

// this will print Lower counting triangle

int main () {
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<j;
        }
        cout<<""<<endl;
    }
    return 0;
}