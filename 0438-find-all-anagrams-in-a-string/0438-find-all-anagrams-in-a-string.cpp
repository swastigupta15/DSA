class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int m = s.length();
        int n = p.length();
        int freqS[26]={0};
        int freqP[26]={0};
        if(n>m) {
            return ans;
        }
        for(int i=0; i<n; i++) {
            freqP[p[i]-'a']++;
        }
        for(int i=0; i<n; i++) {
            freqS[s[i]-'a']++;
        }
        if(equal(freqP, freqP+26, freqS)) {
            ans.push_back(0);
        }
        for(int i=n; i<m; i++) {
            freqS[s[i-n]-'a']--;
            freqS[s[i]-'a']++;
            if(equal(freqP, freqP+26, freqS)) {
                ans.push_back(i-n+1);
            }
        }
        return ans;
    }
};