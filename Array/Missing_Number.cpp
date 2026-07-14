//Brute force
/*#include<bits/stdc++.h>
using namespace std;
int find_missing(vector<int>&v) {
    for(int i=1; i<=v.size(); i++) {
        int flag=0;
        for(int j=0; j<v.size()-1; j++) {
            if(v[j]==i) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            return i;
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n-1);
    for(int i=0; i<v.size()-1; i++) {
        cin >> v[i];
    }
    cout << find_missing(v);
} */
//Better 
/*#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>v(n-1);
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }
    int hash[n+1] = {0};
    for(int i=0; i<v.size(); i++) {
        hash[v[i]]=1;
    }
    for(int i=1; i<=n; i++) {
        if(hash[i] == 0) {
            cout <<  i;
            break;
        }
    }
} */
//Optimal (sum)
/*#include<bits/stdc++.h>
using namespace std;
int missing_num(vector<int>&v, int n) {
    int sum_of_n = (n*(n+1))/2;
    int sum = 0;
    for(int i=0; i<v.size(); i++) {
        sum = sum + v[i];
    }
    return sum_of_n - sum;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n-1);
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }
    cout << missing_num(v, n);
}    */
//optimal (xor)
#include<bits/stdc++.h>
using namespace std;
int missing_num(vector<int>&v, int n) {
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0; i<v.size(); i++) {
        xor2 = xor2^v[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^n;
    return xor1^xor2;
}
int main() {
    int n;
    cin >> n;
    vector<int>v(n-1);
    for(int i=0; i<v.size(); i++) {
        cin >> v[i];
    }
    cout << missing_num(v, n);
}  


