

int removeElement(int* nums, int numsSize, int val){
    int len = numsSize;
    int ptr1 = numsSize - 1;
    int temp;
    int end_val_num = 0;

    if(numsSize == 0)
    {
        return 0;
    }
    else if(numsSize == 1)
    {
        if(nums[0] == val)
        {
            return 0;
        }
        else
        {
            return 1;
        }   
    }
    else
    {
        for(int i = 0 ; i < numsSize ; i++)
        {
            if(nums[i] != val)
            {
                break;
            }
            else if(i == numsSize-1)
            {
                return 0;
            }
        }

        for(int i = 0 ; i < numsSize ; i++)
        {
            if(i > ptr1)
            {
                break;
            }
            else
            {
                if(nums[i] == val)
                {
                    len--;

                    if(i == numsSize - 1)
                    {
                        break;
                    }
                    else if(i == ptr1)
                    {
                        break;
                    }

                    while(nums[ptr1] == val && i < ptr1)
                    {
                        ptr1--;
                        end_val_num++;
                    }
                    
                    temp = nums[i];
                    nums[i] = nums[ptr1];
                    nums[ptr1] = temp;
                    ptr1--;
                }
            }
        }

        len = len - end_val_num;

        return len;
    }
    // int current_remove_nums = 0;
    // int remove_arr[numsSize];
    // int ptr1 = 0,ptr2 = 0;
    // int len = numsSize;

    // if(numsSize == 0)
    // {
    //     return 0;
    // }
    // else
    // {
    //     for(int i = 0 ; i < numsSize ; i++)
    //     {
    //         if(nums[i] == val)
    //         {
    //             current_remove_nums++;
    //             len--;
    //             remove_arr[ptr2] = i;
    //             ptr2++;
    //         }
    //         else
    //         {
    //             if(current_remove_nums != 0)
    //             {
    //                 current_remove_nums--;
    //                 nums[remove_arr[ptr1]] = nums[i];
    //                 ptr1++;
    //             }
    //             else
    //             {
    //                 if(ptr2 != 0)
    //                 {
    //                     nums[remove_arr[ptr2 - 1]+1] = nums[i];
    //                 }
    //             }
    //         }
    //     }

    //     return len;
    // }
}