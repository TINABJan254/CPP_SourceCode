#include <bits/stdc++.h>
using namespace std;

vector<int> findPairDifference(int T, vector<pair<pair<int, int>, vector<int>>>& tests) {
    vector<int> results;

    for (int i = 0; i < T; i++) {
        int N = tests[i].first.first;
        int X = tests[i].first.second;
        vector<int>& A = tests[i].second;

        unordered_set<int> numSet;
        bool found = false;

        for (int j = 0; j < N; j++) {
            if (numSet.find(A[j] - X) != numSet.end()) {
                results.push_back(1);
                found = true;
                break;
            }

            numSet.insert(A[j]);
        }

        if (!found) {
            results.push_back(-1);
        }
    }

    return results;
}

int main() {
    int T;
    cin >> T;

    vector<pair<pair<int, int>, vector<int>>> tests;

    for (int i = 0; i < T; i++) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);

        for (int j = 0; j < N; j++) {
            cin >> A[j];
        }

        tests.push_back(make_pair(make_pair(N, X), A));
    }

    vector<int> results = findPairDifference(T, tests);

    for (int i = 0; i < T; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
