class Solution {
public:
    int romanToInt(string s) {
        /*https://www.geeksforgeeks.org/convert-string-char-array-cpp/*/
        int n = s.length();
        int sum = 0;
        char char_array[n+1];
        strcpy(char_array,s.c_str());
        for(int i=0; i<n; i++)
        {
            if(char_array[i]=='I' & char_array[i+1]=='V')
            {
                sum = sum - 1;
            }
            else if(char_array[i] == 'I' & char_array[i+1] == 'X')
            {
                sum = sum - 1;
            }
            else if(char_array[i] == 'I')
            {
                sum = sum + 1;
            }
            else if(char_array[i] == 'X' & char_array[i+1] == 'L')
            {
                sum = sum - 10;
            }
            else if(char_array[i] == 'X' & char_array[i+1] == 'C')
            {
                sum = sum - 10;
            }
            else if(char_array[i] == 'V')
            {
                sum = sum + 5;
            }
            else if(char_array[i] == 'X')
            {
                sum = sum + 10;
            }
            else if(char_array[i] == 'C' & char_array[i+1] == 'D')
            {
                sum = sum - 100;
            }
            else if(char_array[i] == 'C' & char_array[i+1] == 'M')
            {
                sum = sum - 100;
            }
            else if(char_array[i] == 'L')
            {
                sum = sum + 50;
            }
            else if(char_array[i] == 'C')
            {
                sum = sum + 100;
            }
            else if(char_array[i] == 'D')
            {
                sum = sum + 500;
            }
            else if(char_array[i] == 'M')
            {
                sum = sum + 1000;
            }
        }
        return sum;
    }
};
