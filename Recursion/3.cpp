#include <iostream>
using namespace std;

void decending(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    decending(n-1);
}

void ascending(int n){
    if(n==0){
    cout<<"0"<<" ";
    return ;
    }
    ascending(n-1);
    cout<<n<<" ";
}

int main() {
 int n = 5;
 int ans;
 cout<<"Ascending sequence is:- "<<endl;
 ascending(n);
 cout<<endl;
 cout<<"Deceding seqence is:- "<<endl;
 decending(n);
  
  return 0;
}