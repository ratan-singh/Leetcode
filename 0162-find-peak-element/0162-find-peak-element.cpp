class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] > nums[mid + 1]) {
                r = mid; //peak can be in left half including mid
            } else {
                l = mid + 1; //peak is in right half
            }
        }

        return l; //canreturn any r or l as r = l
    }
};
