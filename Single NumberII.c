Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.
 

Input: nums = [2,2,3,2]
Output: 3


Input: nums = [0,1,0,1,0,1,99]
Output: 99
  
  int singleNumber(int* nums, int numsSize){
   int ones = 0, twos = 0, threes;
int i;

for (i = 0; i < numsSize; i++)
{
    twos |= (ones & nums[i]);
			
    ones ^= nums[i];
    
    threes = (twos & ones);
    
    if(threes != 0)
    {
        ones ^= threes;
        twos ^= threes;
    }
}

return ones;

}
