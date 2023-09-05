#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;

    while (T--) {
        int Q;
        cin >> Q;

        deque<int> dq;
        vector<int> vec;

        while (Q--) {
            string query;
            cin >> query;

            if (query == "insertback") {
                int x;
                cin >> x;
                dq.push_back(x);
            } else if (query == "eraseback") {
                if (!dq.empty()) {
                    dq.pop_back();
                }
            } else if (query == "insertfront") {
                int x;
                cin >> x;
                dq.push_front(x);
            } else if (query == "erasefront") {
                if (!dq.empty()) {
                    dq.pop_front();
                }
            } else if (query == "printfront") {
                if (!dq.empty()) {
                    cout << dq.front() << endl;
                } else {
                    cout << 0 << endl;
                }
            } else if (query == "printback") {
                if (!dq.empty()) {
                    cout << dq.back() << endl;
                } else {
                    cout << 0 << endl;
                }
            } else if (query == "print") {
                int x;
                cin >> x;
                if (x < vec.size()) {
                    cout << vec[x] << endl;
                } else {
                    cout << 0 << endl;
                }
            }
        }
    }

    return 0;
}
