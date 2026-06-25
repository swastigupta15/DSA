#include<bits/stdc++.h>
using namespace std;
int remove_duplicates(vector<int>&v) {
    int i=0;
    for(int j=1; j<v.size(); j++) {
        if(v[i]!=v[j]) {
            i++;
            v[i]=v[j];
        }
    }
    return i+1;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }
    int newsize = remove_duplicates(v);
    for(int i=0; i<newsize; i++) {
        cout <<  v[i];
    }
}