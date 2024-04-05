void rotate(int* nums, int numsSize, int k) {

k=k%numsSize;

int  start1=0,end1=numsSize-1;  

int temp1;

while (start1 < end1) {

 temp1 = nums[start1];

 nums[start1] = nums[end1];

 nums[end1] = temp1;

 start1++;

 end1--;

    }

int  start2=0,end2=k-1;  

int temp2;

while (start2 < end2) {

 temp2 = nums[start2];

 nums[start2] = nums[end2];

 nums[end2] = temp2;

 start2++;

 end2--;

    }

int  start3=k,end3=numsSize-1;  

int temp3;

while (start3 < end3) {

 temp3 = nums[start3];

 nums[start3] = nums[end3];

 nums[end3] = temp3;

 start3++;

 end3--;

    }  

}
