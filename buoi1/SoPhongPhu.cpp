#include<iostream>
using namespace std;

int sum[100005]={};
int cnt = 0;

int main() {
    int a, b;
    cin>>a>>b;
    
    for (int i=1; i<=b;i++) {
        for (int j=2*i; j<=b; j=j+i) sum[j] += i;
    }
    

    for (int i=a;i<=b;i++) {
        if (sum[i] > i) cnt++;
    }

    cout<<cnt;
}