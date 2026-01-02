#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number n:";
    cin>>n;
    int i=1;
    int sum=0;
    while (i<=n){
        sum+=i;
        i=i+1;
    }
    cout<<sum<<endl;
    cout<<(n*(n+1))/2<<endl;
}