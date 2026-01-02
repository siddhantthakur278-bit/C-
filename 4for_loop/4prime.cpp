#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the number : ";
    cin >>n;
    int fact=0;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            fact+=1;
        }
    }
    if (fact==2){
        cout<<"number "<<n<<" "<<"is Prime"<<endl;
    }else{
        cout<<"number "<<n<<" "<<"is not Prime"<<endl;
    }
}