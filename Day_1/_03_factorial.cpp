#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;

    cout<<factorial(n);
    return 0;
}