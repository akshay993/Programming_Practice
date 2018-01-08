/*
Implement int sqrt(int x).

Compute and return the square root of x.

x is guaranteed to be a non-negative integer.


Example 1:

Input: 4
Output: 2
Example 2:

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842...,
and since we want to return an integer, the decimal part will
*/


int mySqrt(int x) {

    int i = 1, output = 1;

    if (x == 0 || x == 1)
        return x;


    while (output < x)
    {
        if (output == x)
            return output;
        i++;
        output = i * i;
    }

    if (i * i == x)
    {
        return i;
    }
    else
    {
        return i - 1;
    }
}
