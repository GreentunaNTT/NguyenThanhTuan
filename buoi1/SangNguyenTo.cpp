#include<iostream>
using namespace std;

int prime[200005]={};

int main() {
    int a, b;
    cin>>a>>b;
    
    for (int i=2; i<=b;i++) {
        if (prime[i] == 0) {
            for (int j=2*i; j<=b; j=j+i) prime[j] = 1;
        }
    }

    for (int i=a;i<=b;i++) {
        if (prime[i] == 0 && i!=1) cout<<i<<endl;
    }
}