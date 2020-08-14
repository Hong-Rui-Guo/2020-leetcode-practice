class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int output;
        //int temp;
        //int counter = 1;
        if (nums.size() == 1)
        {
            printf("type1\n");
            return nums[0];
        }
        else
        {
            sort(nums.begin(), nums.end());

            //temp = nums[0];
            //output = nums[0];

            for(int i = 0 ; i < nums.size() ; i = i + 2)
            {
                if(i == nums.size()-1)
                {
                    output = nums[i];
                    break;
                }
                if(nums[i] != nums[i+1])
                {
                    output = nums[i];
                    printf("output:%d\n",output);
                    break;
                }
            }
            printf("type2\n");
            return output;
        }
    }
};


/* solution 1 : using xor operation
class Solution {
public:
    int singleNumber(vector<int>& n) {
        int r = 0;
        
        for(int i: n)
        {
            printf("i value:%d\n",i);
            r = r ^ i;  //xor
            printf("r value:%d\n",r);
            printf("\n");
        }
        return r;
    }
};
*/