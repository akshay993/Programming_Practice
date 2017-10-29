/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.


Example

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {

    int index1;
    int index2;
    int rem;
    int flag=0;
    int *a=(int*)malloc(2*(sizeof(int)));

    for(int i=0; i<numsSize; i++)
    {

            index1=i;
            rem=target-nums[i];
            for(int j=i+1;j<numsSize;j++)
            {
                if(nums[j]==rem)
                {
                    index2=j;
                    flag=1;
                    break;
                }
            }

        if(flag==1)
        {
            break;
        }

    }


    a[0]=index1;
    a[1]=index2;

    return a;

}
