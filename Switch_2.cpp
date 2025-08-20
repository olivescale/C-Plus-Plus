#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    switch (a%2){
        case 0:
        cout<<a<<" "<<"is Even";
        break;
        case 1:
        cout<<a<<" "<<"is Odd";
        break;
    }
}