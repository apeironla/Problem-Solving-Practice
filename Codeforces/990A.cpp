#include<iostream>
using namespace std;

int main(){

long long int n,m;
long long int a,b,p;
cin>>n>>m>>a>>b;

if(n%m == 0)cout<<"0"<<endl;
else{
    p = n%m;
    cout<<min((p*b),(m-p)*a)<<endl;
}


return 0;
}
