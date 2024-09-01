#include <bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cout<<"Enter any character :";
    cin>>a;
    int b=int(a);
    if(b<48){
        cout<<"Sorry program is showing error!!You can enter an aphabet and a number only!! ";
    }
    else if(b<=57){
        cout<<"The character is a number!!";
    }
    else if(b<65){
        cout<<"Sorry program is showing error!!You can enter an aphabet and a number only!! ";
    }
    else if(b<=90){
        cout<<"The charcter is a an uppercase alphabet!!";
    }
    else if(b<97){
        cout<<"Sorry program is showing error!!You can enter an aphabet and a number only!! ";
    }
    else if(b<=112){
        cout<<"The character is a lowercase alphabet!!";
    }
    else{
        cout<<"Sorry program is showing error!!You can enter an aphabet and a number only!! ";
    }
    
    return 0;
}