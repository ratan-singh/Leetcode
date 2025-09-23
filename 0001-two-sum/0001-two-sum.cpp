class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr; // {value, index}

        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end()); // sort by value

        int left = 0, right = n - 1;
        while (left < right) {
            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                return {arr[left].second, arr[right].second}; // return original indices
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {}; // no solution (though problem guarantees one)
    }
};
