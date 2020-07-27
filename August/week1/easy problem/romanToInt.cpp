class Solution {
public:
    int romanToInt(string s) {
        int output = 0;

        //calculate int value
        for(int i = 0 ; i < s.size() ; i++)
        {
            //determine whether s[i] is I or X or C
            //note1: Because it is c++, we can't use strcmp()
            //note2: We can't write like this if(s[i] == "I"),because this become to compare address
            if(s.compare(i,1,"I") == 0)
            {
                if(i == s.size() - 1)
                {
                    output = output + 1;
                }
                else
                {
                    if(s.compare(i+1,1,"V") == 0 || s.compare(i+1,1,"X") == 0)
                    {
                        output = output - 1;
                    }
                    else
                    {
                        output = output + 1;
                    }
                }
            }
            else if(s.compare(i,1,"X") == 0)
            {
                if(i == s.size() - 1)
                {
                    output = output + 10;
                }
                else
                {
                    if(s.compare(i+1,1,"L") == 0 || s.compare(i+1,1,"C") == 0)
                    {
                        output = output - 10;
                    }
                    else
                    {
                        output = output + 10;
                    }
                }
            }
            else if(s.compare(i,1,"C") == 0)
            {
                if(i == s.size() - 1)
                {
                    output = output + 100;
                }
                else
                {
                    if(s.compare(i+1,1,"D") == 0 || s.compare(i+1,1,"M") == 0)
                    {
                        output = output - 100;
                    }
                    else
                    {
                        output = output + 100;
                    }
                }
            }
            else
            {
                if(s.compare(i,1,"V") == 0)
                {
                    output = output + 5;
                }
                else if(s.compare(i,1,"L") == 0)
                {
                    output = output + 50;
                }
                else if(s.compare(i,1,"D") == 0)
                {
                    output = output + 500;
                }
                else if(s.compare(i,1,"M") == 0)
                {
                    output = output + 1000;
                }
            }
        }

        return output;
    }
};