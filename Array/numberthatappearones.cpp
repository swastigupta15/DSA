#include<bits/stdc++.h>
using namespace std;
int appear_ones(vector<int>&v, int n) {
    int xor1 = 0;
    for(int i=0; i<n; i++) {
        xor1 = xor1^v[i];
    }
    return xor1;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }
    cout << appear_ones(v, n);
}  