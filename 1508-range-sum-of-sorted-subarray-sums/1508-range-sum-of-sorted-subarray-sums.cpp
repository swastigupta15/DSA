class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>preSum;
        for(int i=0; i<n; i++) {
            int sum = 0;
            for(int j=i; j<n; j++) {
                sum+=nums[j];
                preSum.push_back(sum);
            } 
        }
        sort(preSum.begin(), preSum.end());
        int ans = 0;
        int mod = 1e9+7;
        for(int i = left - 1; i < right; i++) {
            ans = (ans + preSum[i])%mod;
        }
        return ans;       
    }
};