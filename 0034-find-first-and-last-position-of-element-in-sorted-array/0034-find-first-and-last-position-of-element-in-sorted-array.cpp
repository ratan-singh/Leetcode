class Solution {
public:

    int findFirst(vector<int>& nums, int target){
        int l=0, r=nums.size()-1;
        int result = -1;

        while(l<=r){
            int mid = l+(r-l)/2;

            if(nums[mid] == target){
                result = mid;
                r = mid-1; //keep searching on the left
            }
            else if(nums[mid]<target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }

        return result;

    }

    int findLast(vector<int>& nums, int target){
        int l=0, r=nums.size()-1;
        int result = -1;

        while(l<=r){
            int mid = l+(r-l)/2;

            if(nums[mid] == target){
                result = mid;
                l = mid+1; //keep searching on the right
            }
            else if(nums[mid]<target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }

        return result;

    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIdx = findFirst(nums, target);
        int lastIdx = findLast(nums, target);

        return {firstIdx, lastIdx};
    }
};