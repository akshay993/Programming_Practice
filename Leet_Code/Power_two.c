/*

Given an integer, write a function to determine if it is a power of two
*/


bool isPowerOfTwo(int n) {

    if(n==0)
        return false;

    if(n==1)
        return true;

    while(n!=1)
    {
        if(n%2!=0)
            return false;
        else
        {
            n=n/2;
            if(n==1)
                return true;
        }
    }

    return true;
}
