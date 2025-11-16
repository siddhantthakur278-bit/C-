#include <iostream>
using namespace std;
int main(){
    int a = 123;
    cout << a << endl;
    char b ='v';
    // char b='assd' //in char type we can give single character only.
    cout << b <<endl;
    // bool bl=1;
    bool bl=true;
    cout << bl << endl;

    float f = 1.2345;
    cout<<f<<endl; 
    
    double d = 1.23;
    cout<< d <<endl;

    int size=sizeof(a);
    cout<< "size of a is:"<< size << endl;

    // type casting --->

    int x='d';
    cout << x << endl;

    char y=98;
    cout << y << endl;

    char z = 123456;
    cout << z << endl;

    int w=-2;
    cout << w << endl;

    unsigned int u =122;
    cout << u << endl;

    unsigned int t = -112;
    cout << t << endl;

    // arithmetic operators---->

    int v = 2/5;
    cout << v <<endl;

    int s =2.0/5;
    cout << s <<endl;

    cout << 2.0/5<<endl;

    float q=2.0/5;
    cout <<q<<endl;

    double p=2.0/5;
    cout << p <<endl;

    //relational operators------>
    int n =2;
    int o=3;

    // bool first=(n==o);
    // bool first=(n>o);
    // bool first=(n<o);
    // bool first=(n>=o);
    // bool first=(n<=o);
    bool first=(n!=o);
    cout<< first <<endl;

    //logical operators------>
    int s1=21;
    cout << !s1<<endl;
     
    
}