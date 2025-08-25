#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    // Check if 'a' is the greatest
    if(a > b && a > c && a > d){
        cout << a << " is the greatest." << endl;
    }

    // Check if 'a' is the smallest
    if (a < b && a < c && a < d){
        cout << a << " is the smallest." << endl;
    }

    // Check if 'b' is the greatest
    if(b > a && b > c && b > d){
        cout << b << " is the greatest." << endl;
    }

    // Check if 'b' is the smallest
    if(b < a && b < c && b < d){
        cout << b << " is the smallest." << endl;
    }

    // Check if 'c' is the greatest
    if(c > a && c > b && c > d){
        cout << c << " is the greatest." << endl;
    }

    // Check if 'c' is the smallest
    if(c < a && c < b && c < d){
        cout << c << " is the smallest." << endl;
    }

    // Check if 'd' is the greatest
    if(d > a && d > c && d > b){
        cout << d << " is the greatest." << endl;
    }

    // Check if 'd' is the smallest
if(d < a && d < c && d < b){
        cout << d << " is the smallest." << endl;
    }
}    