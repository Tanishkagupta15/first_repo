#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,fac=1;
    cout<<"Enter any number for factorial: ";
    cin>>n;
    for(i=1;i<=n;++i) {
        fac=fac*i;
    }
    cout<<"factorial of "<<n<<" is "<<fac;
    return 0;

}
