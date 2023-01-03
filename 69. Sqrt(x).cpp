//binary search
//https://leetcode.com/problems/sqrtx/discuss/25047/A-Binary-Search-Solution
//Runtime: 4 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
//Memory Usage: 8.2 MB, less than 99.48% of C++ online submissions for Sqrt(x).
//NOTE1: use (mid < x/mid) to replace (mid * mid < x)
//NOTE2: use (int mid = left + (right - left)/2;) to replace (int mid = (left + right)/2;)
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int left = 1, right = INT_MAX;
        while(true){
            //runtime error: signed integer overflow: 1 + 2147483647 cannot be represented in type 'int'
            // int mid = (left + right)/2;
            int mid = left + (right - left)/2;
            if(mid <= x/mid && (mid+1) > x/(mid+1)){
                return mid;
            }else if(mid < x/mid){
                left = mid+1;
            }else{
                //mid > x/mid
                right = mid-1;
            }
        }
    }
};