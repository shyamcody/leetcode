class Solution {
public:
    map<char,int> dictionaryMaker(string stringline){
        //https://stackoverflow.com/questions/66347594/c-map-no-matching-member-function-for-call-to-find-when-used-for-a-string
        map<char,int> string_dict;
        for(int i = 0; i<stringline.length();i++){
            if(string_dict.find(stringline[i])!=string_dict.end()){
                string_dict[stringline[i]] += 1;
            }
            else{
                string_dict[stringline[i]] = 1;
            }
        }
        return string_dict;
    }
    bool canConstruct(string ransomNote, string magazine) {
        bool canIt = true;
        if(ransomNote.length()>magazine.length()){
            canIt = false;
        }
        else{
            map<char, int> ransom_dict = dictionaryMaker(ransomNote);
            map<char, int> magazine_dict = dictionaryMaker(magazine);
            for(auto it= ransom_dict.begin(); it!= ransom_dict.end(); ++it){
                char key = it->first;
                if(ransom_dict[key]>magazine_dict[key]){
                    canIt = false;
                    break;
                }
            }
        }
        return canIt;
    }
};
