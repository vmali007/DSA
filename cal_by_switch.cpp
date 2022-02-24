#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the first value : "<<endl;
    cin>>a;

    cout<<"Enter the second value : "<<endl;
    cin>>b;

    char opt;
    cout<<"Enter the operater : "<<endl;
    cin>>opt;
    
    switch(opt){
        case '+': cout<<a+b<<endl;
                  break;
        case '-': cout<<a-b<<endl;
                  break;
        case '*': cout<<a*b<<endl;
                  break;
        case '/': cout<<a/b<<endl;
                  break;
        default: cout<<"Enter the valid operater(+,-,*,/)"<<endl;
    }

    return 0;
}