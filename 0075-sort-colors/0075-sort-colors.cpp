class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int s= 0;
        int e=n-1;
        int i=0;

        while(i<=e){
            if(nums[i]<1){
                swap(nums[i],nums[s]);
                s++;
                i++;
            }
            else if(nums[i]>1){
                swap(nums[i],nums[e]);
                e--;
            }
            else{
                i++;
            }
        }

    }
};