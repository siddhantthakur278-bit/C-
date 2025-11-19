#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    int c=0;
    while (i<=n){
        if (n%i==0){
            c=c+1;
        }
    i=i+1;
    }
    if (c>2){
        cout<<"not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }
}
