Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
  
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
  
  int majorityElement(int num[], int n) {
    int cnt = 0, res;
    for (int i = 0; i < n; ++i) {
        if (cnt == 0) res = num[i];
        if (res == num[i]) ++cnt;
        else --cnt;
    }
    return res;
}
