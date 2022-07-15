class Solution {
public:
    string smallNumberToWords(int num){
        //for numbers smaller than 1000, turn them into string
        //https://www.educba.com/c-plus-plus-dictionary/
        //https://www.delftstack.com/howto/cpp/cpp-create-a-dictionary/
        string expression = "";
        int hundreds = num/100;
        num = num%100;
        int tens = num/10;
        num = num%10;
        map<int, string> ones = {{1,"One"},{2,"Two"},{3,"Three"},{4,"Four"},{5,"Five"},
                {6,"Six"},{7,"Seven"},{8,"Eight"},{9,"Nine"}};
        map<int, string> tens_dict = {{2,"Twenty"},{3,"Thirty"},{4,"Forty"},{5,"Fifty"},
                {6,"Sixty"},{7,"Seventy"},{8,"Eighty"},{9,"Ninety"}};
        map<int, string> teens = {{10,"Ten"},{11,"Eleven"},{12,"Twelve"},{13,"Thirteen"},{14,"Fourteen"},{15,"Fifteen"},{16,"Sixteen"},{17,"Seventeen"},{18,"Eighteen"},
                 {19,"Nineteen"}};
        if(hundreds>0)
        {
            if(expression.length()>0)
            {
                expression += " ";
            }
            expression = ones[hundreds]+" "+"Hundred";   
        }
        if(tens>1)
        {
            if(expression.length()>0)
            {
                expression += " ";
            }
            expression = expression + tens_dict[tens];
        }
        else if(tens == 1)
        {
            if(expression.length()>0)
            {
                expression += " ";
            }
            int digit = tens*10+num;
            expression = expression + teens[digit];
        }
        if(num>0 & tens!= 1)
        {
            if(expression.length()>0)
            {
                expression += " ";
            }
            expression = expression + ones[num];
        }
        return expression;
    }
    string numberToWords(int num) {
        string expression = "";
        int no_billions = num/ (int) pow(10,9);
        num = num% (int) pow(10,9);
        int no_millions = num/ (int) pow(10,6);
        num = num% (int) pow(10,6);
        int no_thousands = num/ (int) pow(10,3);
        num = num% (int) pow(10,3);
        if(no_billions>0)
        {
            expression = expression + smallNumberToWords(no_billions) + " " + "Billion";
        }
        if(no_millions>0)
        {
            if(expression.length()>0)
            {
                expression += " ";
            }
            expression = expression + smallNumberToWords(no_millions) + " " + "Million";
        }
        if(no_thousands>0)
        {
            if(expression.length()>0)
            {
                expression += " ";
            }
            expression = expression + smallNumberToWords(no_thousands) + " " + "Thousand";
        }
        if(expression.length()>0 and num>0)
        {
            expression = expression + " ";
        }
        expression = expression + smallNumberToWords(num);
        if(expression == "" && num == 0)
        {
            expression = "Zero";
        }
        return expression;
    }
};
