iven two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

 

Example 1:

Input: left = 5, right = 7
Output: 4
  
Example 2:

Input: left = 0, right = 0
Output: 0
  
Example 3:

Input: left = 1, right = 2147483647
Output: 0
  
 int rangeBitwiseAnd(int m, int n){
    while (m != n) {
        n &= (n - 1);
        while (m > n) {
            m &= (m - 1);
        }
    }
    
    return n;
} 