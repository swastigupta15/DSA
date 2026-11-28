class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currSum = 0;

        // Calculate sum of first k elements
        for (int i = 0; i < k; i++) {
            currSum += nums[i];
        }

        int maxSum = currSum;

        // Slide the window
        for (int i = k; i < nums.size(); i++) {
            currSum += nums[i] - nums[i - k];

            maxSum = max(maxSum, currSum);
        }

        return (double)maxSum / k;
    }
};
