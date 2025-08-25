#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int mn=min({a,b,c,d,e});
    cout<<mn<<" "<<"is the smallest.\n";
    int mx=max({a,b,c,d,e});
    cout<<mx<<" "<<"is the greatest.\n";
    return 0;
}
