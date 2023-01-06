Question link : https://leetcode.com/problems/sort-colors/description



class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int r=0,w=0,b=0;
        // for(auto ele:nums){
        //     if(ele == 0)r++;
        //     else if(ele == 1)w++;
        //     else b++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     while(r--){
        //         nums[i] = 0;
        //         i++;
        //     }
        //     while(w--){
        //         nums[i] = 1;
        //         i++;
        //     }
        //     while(b--){
        //         nums[i] = 2;
        //         i++;
        //     }
        // }
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;
        for(int i=0;i<n;i++){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;a
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
            else{
                mid++;
            }
        }
    }
};