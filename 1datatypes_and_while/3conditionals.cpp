#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    // cout<<"value of n is n"<<endl;
    // if (n>0){
    //     cout<<"N is Positive"<<endl;
    // }
    // else if(n==0){
    //     cout<<"N is Zero"<<endl;
    // }else{
    //     cout<<"N is Negative"<<endl;
    // }
    int a,b;
    // cin>>a>>b;
    // cout<<"value of a and b is "<<a<<" "<<b<<endl;
    cout<<("Enter the value of A:")<<endl;
    cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;

    // if (a>b){
    //     cout<<"A is greater"<<endl;
    // }else if (b>a){
    //     cout<<"B is greater"<<endl;
    // }
    if (a>0){
        cout<<"a is a positive number"<<endl;
    }else{
        if (a<0){
            cout<<"a is negative number"<<endl;
        }else{
            cout<<"a is 0"<<endl;
        }
    }

}
