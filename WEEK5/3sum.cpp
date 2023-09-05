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
        int N;
        long long target;
        cin >> N >> target;

        vector<long long > A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        long long minAbsDiff = LLONG_MAX;
        for (int i = 0; i < N - 2; ++i) {
            int left = i + 1;
            int right = N - 1;

            while (left < right) {
                long long sum = A[i] + A[left] + A[right];
                long long absDiff = abs(sum - target);

                if (absDiff < minAbsDiff) {
                    minAbsDiff = absDiff;
                }

                if (sum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }

        cout << minAbsDiff << endl;
    }

    return 0;
}
