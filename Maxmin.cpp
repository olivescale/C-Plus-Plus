
#include<iostream>

using namespace std;

int main(){

 int a,b,c,d;
 cin>>a>>b>>c>>d;
 if(a>b && a>c && a>d){

 cout<<a<<" "<<"is the greatest.\n";
 }

if (a<b && a<c && a<d){

 cout<<a<<" "<<"is the smallest\n.";

}

if(b>a && b>c && b>d){

 cout<<b<<" "<<"is the greatest\n";

 }
if(b<a && b<c && b<d){
cout<<b<<" "<<"is the smallest\n.";

}

if(c>a && c>b && c>d){

cout<<c<<" "<<"is the greatest\n.";
 }

 if(c<a && c<b && c<d){

cout<<c<<" "<<"is the smallest\n.";

 }
if(d>a && d>c && d>b){

cout<<d<<" "<<"is the greatest\n.";

}

else {

cout<<d<<" "<<"is the smallest.\n";

 }
 
}

