/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
*/


int strStr(char* haystack, char* needle) {


    int length1=strlen(haystack);
    int length2=strlen(needle);
    int k=0;
    int j;
    int flag=-1;

    if(length1==0 && length2==0)
    {
        return 0;
    }
    if(length2==0)
    {
        return 0;
    }


    for(int i=0;i<length1;i++)
    {
        if(haystack[i]==needle[0])
        {
            if(length2==1)
            {
                flag=i;
                break;
            }

            k=i+1;
            for(j=1;j<length2;j++)
            {
                if(haystack[k]==needle[j])
                {
                    flag=i;
                }
                else
                {
                    flag=-1;
                    break;
                }
                k++;
            }

        }
        if(j==length2)
            break;

    }

    if(flag==-1)
        return -1;
    else
        return flag;

}
