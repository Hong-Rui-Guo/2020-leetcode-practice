class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output(2,0);
        int nums_size;

        nums_size = nums.size();

        for(int i = 0 ; i < nums_size - 1 ; i++)
        {
            for(int j = i + 1 ; j < nums_size ; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    if(nums[i] <= nums[j])
                    {
                        output[0] = i;
                        output[1] = j;
                    }
                    else
                    {
                        output[0] = j;
                        output[1] = i;                        
                    }

                    goto result;
                }
            }
        }

result:
        return output;
    }
};