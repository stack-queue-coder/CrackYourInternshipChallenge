// Question link : https://leetcode.com/problems/find-the-duplicate-number/description/
// Concept used : floyd cycle detection

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // long long x = n*(n-1);
        // x/=2;
        // long long sum = 0;
        // for(int i=0;i<n;i++){
        //     sum += nums[i];
        // }
        // return sum - x;
        int fast = 0;
        int slow = 0;
        while(1){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow == fast){
                break;
            }
        }
        slow = 0;
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
