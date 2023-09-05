#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	IOS
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int tc;
	cin>>tc;
	while(tc--) {
		int queries;
		cin>>queries;
		multiset<int>mt;
		while(queries--) {
			string  s;
			cin>>s;

			if(s=="add") {
				int x;
				cin>>x;
				mt.insert(x);
			}
			else if(s=="eraseall") {
				int x;
				cin>>x;
				if(mt.find(x)!=mt.end())
					mt.erase(x);
			}
			else if (s=="erase") {
				int x;
				cin>>x;
				if(mt.find(x)!=mt.end())
					mt.erase(mt.find(x));
			}
			else if( s=="find") {
				int x;
				cin>>x;
				if(mt.find(x)!=mt.end()) {
					cout<<"YES\n";
				}
				else {
					cout<<"NO\n";
				}
			}
			else if(s=="count") {
				int x;
				cin>>x;
				cout<<mt.count(x)<<"\n";
			}
			else if(s=="print") {
				for(auto itr : mt)
					cout<<itr<<" ";
				cout<<"\n";
			}
			else if(s=="empty") {
				mt.clear();
			}
 		}
	}

}