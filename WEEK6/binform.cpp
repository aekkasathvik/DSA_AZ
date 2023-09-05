#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    for(int i=32;i>=0;i--) {
        if(n&(1<<i))
            cout<<"1";
        else
            cout<<"0";
    }

    return 0;
}
