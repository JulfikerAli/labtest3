#include<iostream>
using namespace std;

int mod(int a,int m){
    return a%m;
}

int main()
{
    int a,b,mul;
    cin>>a>>b;
    mul=a*b;
    cout<<"multiplication is :"<<mul<<endl;
    cout<<"modulouos is : "<<mod(a,b)<<endl;
    return 0;
}
