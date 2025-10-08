class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());  // Sort the array
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];  // Initialize with the first 3 elements

        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];

                // If exact match, return immediately
                if (currentSum == target) return currentSum;

                // Update closest sum if needed
                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }

                // Move pointers based on comparison
                if (currentSum < target)
                    ++left;
                else
                    --right;
            }
        }

        return closestSum;
    }
};
