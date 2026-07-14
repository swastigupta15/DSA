//Brute force
/*#include<bits/stdc++.h>
using namespace std;
int Longest_subarray(vector<int>&v, int n, int k) {
    int len = 0;
    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum+=v[j];
            if(sum == k) {
              len = max(len,j-i+1);
            }
        }
    }
    return len;
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
    cout << Longest_subarray(v, n, k);
} */
//Better (Hashing -> Mapping) (if array has zeros and negative )
/*#include<bits/stdc++.h>
using namespace std;
int Longest_subarray(vector<int>&v, int n, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for(int i=0; i<v.size(); i++) {
        sum+=v[i];
        if(sum==k) {
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()) {
            int len = i-preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()) {
        preSumMap[sum] = i;
        }
    }
    return maxlen;
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
    cout << Longest_subarray(v, n, k);
}*/
//optimal solution (for +ve and 0)
#include<bits/stdc++.h>
using namespace std;
int Longest_subarray(vector<int>&v, int n, int k) {
    int left = 0; int right = 0;
    int sum = v[0];
    int maxLen = 0;
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= v[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right-left+1);
        } 
        right++;
        if(right<n)  {
            sum += v[right];
        }
    }
    return maxLen;
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
    cout << Longest_subarray(v, n, k);
}