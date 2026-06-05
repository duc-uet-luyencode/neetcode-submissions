class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long n;
        n=nums.size();
        long long left=0;
        long long right=n-1;
        while(left<=right){
            long long mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return -1;
    }
};
