class Solution {
    public int removeDuplicates(int[] nums) {
        int begin=0,mark=0,temp=0;
        while(nums[begin]!=nums[nums.length-1]){
            if(nums[mark]==nums[begin]){
                mark++;
            }
            else if(nums[mark]!=nums[begin]){
                nums[temp]=nums[mark-1];
                temp++;
                begin=mark;
            }
        }
        nums[temp++]=nums[begin];
        return temp;
    }
}
