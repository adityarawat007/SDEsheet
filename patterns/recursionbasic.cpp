#include<bits/stdc++.h>
using namespace std;

// Recursive function

int cnt=1;
void fn(){
    if(cnt==10) return;
    cout<<cnt<<endl;
    cnt++;
    fn();
    
}

int main(){

    //function called
    fn();

    return 0;
}