#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a[25];
    a[0] = 1;
    for (int i = 1; i <= 20; i++)  
        a[i] = 1ll*a[i-1]*i;
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1ll*a[i];
    cout << sum;
}
