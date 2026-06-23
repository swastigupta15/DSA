#include <bits/stdc++.h>
using namespace std;

// function to reverse vector
void reverseArray(vector<int> &v) {
    int i = 0, j = v.size() - 1;

    while(i < j) {
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    reverseArray(v);  // calling function

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}