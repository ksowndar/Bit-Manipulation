Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [2,2,1]
Output: 1
  
Input: nums = [4,1,2,1,2]
Output: 4
  
Input: nums = [1]
Output: 1
  
  
int singleNumber(int* nums, int numsSize){
     int s=0;
    for(int i=0;i<numsSize;i++)
        s=s^nums[i];
    return s;
}
