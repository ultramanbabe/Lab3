#include<iostream>
using namespace std;

int main(){
    double x=0,n=6;

    while(n<=19){
        x=x+(1/n);
        n++;
    }
    cout<<x;
    return 0;
}