#include<iostream>
using namespace std;

int mod(int a,int m){
    return a%m;
}

int subs(int n,int m){
    return n-m;
}

int main()
{
    int a,b,mul;
    cin>>a>>b;
    mul=a*b;
    cout<<"multiplication is :"<<mul<<endl;
    cout<<"modulouos is : "<<mod(a,b)<<endl;
    cout<<"subtraction is : "<<subs(a,b)<<endl;
    return 0;
}
