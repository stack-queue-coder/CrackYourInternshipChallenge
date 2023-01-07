Question Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Concept : Two - Pointer

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int primary = 1;
        int secondary = 0;
        int n = nums.size();
        bool flag = false;
        // if(n == 1)return 1;
        set<int> st;
        while(primary < n and secondary < n){
            st.insert(nums[secondary]);
            if(nums[primary] != nums[secondary]){
                if(nums[primary] < nums[secondary]){
                    if(flag){
                        primary++;
                    }
                    flag = true;
                    nums[primary] = nums[secondary];
                }
                else{
                    primary++;
                    secondary++;
                }

            }
            else{
                secondary++;
            }
        }
        if(secondary < n)st.insert(nums[secondary]);
        // for(int i=0;i<n;i++){
        //     cout << nums[i] << " ";
        // }
        return st.size();
        // if(primary == 1 and !flag and primary != n-1) return 1;
        // return ++primary;
    }
};