class Solution {
public:
    string intToRoman(int num) {
        string final_result = "";
        int no_thousands = num/1000;
        for(int i=0; i < no_thousands; i++)
        {
            final_result = final_result + "M";
        }
        num = num%1000;
        int no_hundreds = num/100;
        int rest = num%100;
        if(no_hundreds == 9)
        {
            final_result = final_result + "CM";
        }
        else if(no_hundreds == 4)
        {
            final_result = final_result + "CD";
        }
        else if(no_hundreds == 5){
            final_result = final_result + "D";
        }
        else if(no_hundreds>5)
        {
            int less_500 = no_hundreds - 5;
            final_result = final_result + "D";
            for(int i = 0; i < less_500; i++)
            {
                final_result = final_result + "C";
            }
        }
        else{
            for(int i = 0; i < no_hundreds; i++)
            {
                final_result = final_result + "C";
            }
        }
        
        
        int no_tens = rest/10;
        rest = rest%10;
        if(no_tens == 9)
        {
            final_result = final_result + "XC";
        }
        else if(no_tens == 4)
        {
            final_result = final_result + "XL";
        }
        else if(no_tens == 5)
        {
            final_result = final_result + "L";
        }
        else if(no_tens > 5)
        {
            int less_50 = no_tens - 5;
            final_result = final_result + "L";
            for(int i = 0; i < less_50; i++)
            {
                final_result = final_result + "X";
            }
        }
        else if(no_tens < 5)
        {
            for(int i = 0; i < no_tens; i++)
            {
                final_result = final_result + "X";
            }
        }
        
        if(rest == 9)
        {
            final_result = final_result + "IX";
        }
        else if(rest == 4)
        {
            final_result = final_result + "IV";
        }
        else if(rest == 5)
        {
            final_result = final_result + "V";
        }
        else if(rest > 5)
        {
            int less_5 = rest - 5;
            final_result = final_result + "V";
            for(int i = 0; i < less_5; i++)
            {
                final_result = final_result + "I";
            }
        }
        else{
            for(int i = 0; i < rest; i++)
            {
                final_result = final_result + "I";
            }
        }
        return final_result;
    }
};
