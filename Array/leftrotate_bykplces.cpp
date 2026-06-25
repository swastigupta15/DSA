#include<bits/stdc++.h>
using namespace std;
void left_rotate_kplaces(vector<int>&v, int k) {
    int n = v.size();
    k = k%n;
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());
    reverse(v.begin(), v.end());
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    left_rotate_kplaces(v, k);
    for(int i=0; i<v.size(); i++) {
        cout <<  v[i];
    }
}
