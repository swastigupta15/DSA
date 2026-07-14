#include<bits/stdc++.h>
using namespace std;
int max_consecutive(vector<int>&v, int n) {
   int maxi = 0;
   int count = 0;
   for(int i=0; i<n; i++) {
    if(v[i]==1) {
        count++;
        maxi=max(maxi, count);
    } else {
        count = 0 ;
    }
   }
   return maxi;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }
    cout << max_consecutive(v, n);
}  