//user defined atoi function with all test cases

class Solution 
{
public:
    int myAtoi(string s) 
    {
        int i=0,sign = 1;
        long long num = 0;
        while(i<s.size() && s[i]==' ')
            i++;

        if(i<s.size() && s[i]=='+' || s[i]=='-')
        { 
            sign = (s[i]=='-')?-1:1;
            i++;
        }

        while(i<s.size() && (s[i]>='0'&&s[i]<='9'))
        {
            num = num * 10 + (s[i]-'0');

            if(sign == 1 && num > INT_MAX)
                return INT_MAX;
            if(sign == -1 && -num <INT_MIN)
                return INT_MIN;
            i++;
        }

        return sign*num;
    }
};
