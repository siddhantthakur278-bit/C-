#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n){
        int col=1;
        while(col <= row){
            char c=('A'+row+col-2);
            cout<<c<<" ";
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
}