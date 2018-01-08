/*
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output:  321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
*/


class Solution {
public:
    int reverse(int x) {

        int rev=0;
        int remainder;
        int rev_num;

        for(int i=10; x!=0; i=i*10)
        {
            remainder=x%10;
            x=x/10;
            rev_num=rev*10+remainder;
            if ((rev_num - remainder) / 10 != rev)
             return 0;
            rev=rev_num;


        }

        return rev;

    }
};
