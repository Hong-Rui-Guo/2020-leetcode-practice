class Solution {
public:
    bool isPalindrome(int x) {
        bool output = true;
        int size = 1;
        vector<int> x_digits(12,0);

        //determine whether x is negative
        if(x < 0)
        {
            return false;
        }
        else if(x == 0)
        {
            return true;
        }
        else
        {
            //determine digits of x
            while(true)
            {
                if(x / long(pow(10,size) ) == 0)
                {
                    break;
                }
                else
                {
                    size++;
                }
            }

            //get each digit in x
            for(int i = 0 ; i < size ; i++)
            {
                x_digits.at(i) = x / long(pow(10,i)) % 10;
            }

            //scan x_digits forward and backward, compare whether x_digits is symmetric
            for(int i = 0 ; i < size ; i++)
            {
                if( i > (size - 1 - i) )
                {
                    break;
                }
                else
                {
                    if(x_digits.at(i) != x_digits.at(size - 1 - i))
                    {
                        output = false;
                        break;
                    }
                }
            }

            return output; 
        }        
    }
};