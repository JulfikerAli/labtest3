#include<iostream>
using namespace std;

int mod(int a,int m){
    return a%m;
}

int subs(int n,int m){
    return n-m;
}

int sum(int a,int b){
    return a + b;
}
int divi(int number1,int number2)
{
	if(number2 == 0) {
		cout<<"division is impossible"<<endl;
		return 0;
	}
	else return number1/number2;
}

int main()
{
    int a,b,mul;
    cin>>a>>b;
    mul=a*b;
    cout<<"multiplication is :"<<mul<<endl;
    cout<<"modulouos is : "<<mod(a,b)<<endl;
    cout<<"subtraction is : "<<subs(a,b)<<endl;
    cout<<"summation is : "<<sum(a,b)<<endl;
    cout<<"division is : "<<divi(a,b)<<endl;
    return 0;
}
