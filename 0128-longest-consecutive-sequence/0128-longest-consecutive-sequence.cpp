// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();

//         sort(nums.begin(), nums.end());

//         // Return 0 if array is empty
//         if (n == 0) return 0; 

//         int longest = 1;
//         int lastSmaller = INT_MIN;
//         int count = 0;

//         for(int i=0; i<n; i++){
//             if(nums[i] - 1 == lastSmaller){
//                 count += 1;
//                 lastSmaller = nums[i];
//             }else if(nums[i] != lastSmaller){
//                 count = 1;
//                 lastSmaller = nums[i];
//             }

//             longest = max(longest, count);
//         }

//         return longest;
//     }
// };



class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        // If the array is empty
        if (n == 0) return 0; 
    
        // Initialize the longest sequence length
        int longest = 1; 
        unordered_set<int> st;
    
        // Put all the array elements into the set
        for (int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
    
        /* Traverse the set to 
           find the longest sequence  */
        for (auto it : st) {
            // Check if 'it' is a starting number of a sequence
            if (st.find(it - 1) == st.end()) {
                // Initialize the count of the current sequence
                int cnt = 1; 
                // Starting element of the sequence
                int x = it; 
    
                // Find consecutive numbers in the set
                while (st.find(x + 1) != st.end()) {
                    // Move to the next element in the sequence
                    x = x + 1; 
                    // Increment the count of the sequence
                    cnt = cnt + 1; 
                }
                // Update the longest sequence length
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};


