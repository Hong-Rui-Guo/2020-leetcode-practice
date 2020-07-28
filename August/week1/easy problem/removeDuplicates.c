

int removeDuplicates(int* nums, int numsSize){
    int len = 1;

    if(numsSize == 0)
    {
        return 0;
    }
    else
    {
        for(int i = 1 ; i < numsSize ; i++)
        {
            if(nums[len-1] != nums[i])
            {
                nums[len] = nums[i];
                len++;
            }
        }

        return len;
    }
}