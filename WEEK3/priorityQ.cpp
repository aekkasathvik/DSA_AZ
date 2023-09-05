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
            priority_queue<int,vector<int>,less<int>>pq;
            int q;
            cin>>q;
            while(q--) {
                string s;
                cin>>s;
                if(s=="add") {
                    int x;
                    cin>>x;
                    pq.push(x);
                }
                else if(s=="remove") {
                    if(!pq.empty()) {
                        pq.pop();
                    }
                }
                else  if(s=="print"){
                    if(!pq.empty()) {
                        cout<<pq.top()<<"\n";
                    }
                    else {
                        cout<<0<<"\n";
                    }
               
                }
            }
    }

    return 0;
}
