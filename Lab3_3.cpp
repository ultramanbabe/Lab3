#include<iostream>
using namespace std;

int main(){
    double x=0,n=2;

    while(n<=69){
        x=x+(1/n);
        n++;
    }
    cout<<x;
    return 0;
}