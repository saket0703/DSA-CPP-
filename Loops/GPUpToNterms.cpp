#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number upto n terms";
    cin>>n;
    // 1 2 4 8 16
    int a=1,r=2;
    for(int i=1;i<=n;i++){ // N times loops Chalegaa
        cout<<a<<" ";
        a *= r;
    }
}