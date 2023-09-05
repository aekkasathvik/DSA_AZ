#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        stack<int>st;
        for(int i=0;i<n;i++) {
            while(!st.empty() && a[st.top()]>=a[i]) {
                st.pop();
            }
            if(st.empty())
            {
                cout<<0<<" ";
            }
            else {
                cout<<st.top()+1<<" ";
            }
            st.push(i);
        }
        cout<<endl;
    }

    return 0;
}
