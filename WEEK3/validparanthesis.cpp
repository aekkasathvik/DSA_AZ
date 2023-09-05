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
        string s;
        cin>>s;
        stack<int>s1,s2;
        for(auto itr :s) {
            if(itr=='(')
                s1.push(itr);
            else {
                if(!s1.empty() && itr ==')') {
                    s1.pop();
                }
                else {
                    s2.push(itr);
                }
            }
        }
        cout<<s1.size()+s2.size()<<"\n";
    }

    return 0;
}
