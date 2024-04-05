import java.util.Arrays;

class Solution {

    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=0,j=0;
        int temp1=m,temp2=0;
        for(i=m;i<nums1.length;i++){
            nums1[temp1]=nums2[temp2];
            temp1++;
            temp2++;
        }
        Arrays.sort(nums1);
    }
}
