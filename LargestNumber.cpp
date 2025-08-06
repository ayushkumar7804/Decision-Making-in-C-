// Ayush Yadav
// 24070123028

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Enter third number"<<endl;
    cin>>c;
    if(a>b && a>c)
    cout<<"The number "<<a<<" is largest";
    else if(b>a && b>c)
    cout<<"The number "<<b<<" is largest";
    else
    cout<<"The number "<<c<<" is largest";
    return 0;
}

// OUTPUT
// Enter first number
// 15
// Enter second number
// 51
// Enter third number
// 91
// The number 91 is largest
