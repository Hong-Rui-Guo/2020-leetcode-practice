class Solution {
public:
    int reverse(int x) {
        long special_case = pow(2,31) * (-1);
        int x_abs;
        int sign;
        int digits = 1;
        int temp;
        vector<int> x_digit(32,0);
        int output = 0;

        //determine whether input is equal 2^31 
        if(x == special_case)
        {
            return 0;
        }
        else
        {
            //determine input is positive or negative 
            if(x > 0)
            {
                sign = 0;
                x_abs = abs(x);
            }
            else
            {
                sign = 1;
                x_abs = abs(x);
            }

            //determine input has n digits
            while(true)
            {
                if( (x_abs / long(pow(10,digits)) ) == 0 )
                {
                    break;
                }
                else
                {
                    digits++;
                }
            }
            printf("x digit:%d\n",digits);

            if(digits > 10)
            {
                return 0;
            }
            else if(digits == 10)
            {
                if( (x_abs % 10) > 2 )
                {
                    return 0;
                }
            }

            //get digit of x_abs
            for(int i = 0 ; i < digits; i++)
            {
                temp = x_abs % long(pow(10,i+1));
                printf("temp value:%d\n",temp);
                for(int j = 0 ; j < i ; j++)
                {
                    temp = temp - long(pow(10,j)) * x_digit[j] ;

                    if(j == i-1)
                    {
                        temp = temp / long(pow(10,j+1));
                    }
                }
                x_digit[i] = temp;
                printf("x_digit[%d]:%d\n",i,x_digit[i]);

            }

            //get reverse value of input_abs(x_abs)
            for(int i = 0 ; i < digits ; i++)
            {
                output = output + long(pow(10,digits-i-1)) * x_digit[i];
                printf("output:%d\n",output);
            }


            if(sign == 0)
            {
                if(output >= 0)
                {
                    return output;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                if(output * (-1) < 0)
                {
                    return output * (-1);
                }
                else
                {
                    return 0;
                }
            }
        }
    }
};