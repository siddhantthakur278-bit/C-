#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int spaces=n-i;
        while(spaces){
            cout<<" "<<" ";
            spaces=spaces-1;
        }
        int j=1;
        int value=1;
        while(j<=i){
            cout<<value<<" ";
            value=value+1;
            j=j+1;
            
        }
        int v=1;
        int k=2;
        while(k<=i){
            cout<<v<<" ";
            v=v+1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
}