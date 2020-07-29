int removeElement(int* nums, int numsSize, int val) {
    if(nums==NULL)return 0;
    int i;
    int countVal=0; 
    int newSize=numsSize;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
        {
          countVal++;
          newSize--;
        }
        else nums[i-countVal]=nums[i];
    }
    return newSize;
}