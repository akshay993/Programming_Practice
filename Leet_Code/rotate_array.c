/*Rotate an array of n elements to the right by k steps.

For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
*/




void rotate(int* nums, int numsSize, int k) {

    int *a= (int*)malloc(numsSize*sizeof(int));


    if(k==numsSize)
    {

    }
    else if( k>numsSize)
    {
        k=k-numsSize;
        for(int i=0;i<numsSize;i++)
        {
            if((i+k)>numsSize|| (i+k)==numsSize)
                a[i+k-numsSize]=nums[i];
            else
                a[i+k]=nums[i];
        }

        for(int i=0;i<numsSize;i++)
        {
            nums[i]=a[i];
        }

    }
    else
    {
        for(int i=0;i<numsSize;i++)
        {
            if((i+k)>numsSize|| (i+k)==numsSize)
                a[i+k-numsSize]=nums[i];
            else
                a[i+k]=nums[i];
        }

        for(int i=0;i<numsSize;i++)
        {
            nums[i]=a[i];
        }
    }

}
