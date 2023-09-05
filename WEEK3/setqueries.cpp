#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    #endif
    int T;
    cin >> T;

    while (T--) {
        int q;
        cin>>q;
        set<int>s;
        while(q--) {
            int x;
            cin>>x;
            if(x==1) {
                long long  a;
                cin>>a;
                s.insert(a);
            }
            else {
                long long  a;
                cin>>a;
                long long lowest_value=a;
                auto itr=lower_bound(s.begin(),s.end(),a);
                while(itr!=s.end() && *itr==lowest_value) {
                    lowest_value++;
                    itr++;
                }
                cout<<lowest_value<<endl;
            }
        }

    }

    return 0;
}
