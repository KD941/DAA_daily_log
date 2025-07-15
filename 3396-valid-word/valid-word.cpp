class Solution {
public:


int is_vowel(char t) {
    bool upper =isupper(t);
    t = tolower(t); 
    if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u') {
        if (upper) return 1;
        else return 2; 
    } else {
        return 3; 
    }
}


int is_consonant(char t) {
    
    if (isalpha(t) && is_vowel(t) == 3) {
        if (isupper(t)) return 1; 
        else return 2; 
    } else {
        return 3; 
    }
}




bool is_number(char t) {
   
    if (is_vowel(t) == 3 && is_consonant(t) == 3 && isalnum(t)) {
        return true;
    } else {
        return false;
    }
}



bool isValid(string word)
{
    bool lower = false;
    bool upper = false; 
    bool number = false;
    bool vowel = false;
    bool consonant = false;
    if(word.length()>=3)
    {

        for(char i : word)
        {
            if(!isalnum(i))return false;

              if (is_vowel(i) == 1) 
            {
                upper = true;
                vowel = true;
            }
            
              if (is_consonant(i) == 1) 
            {
                upper = true;
                consonant = true;
            }
            
              if (is_vowel(i) == 2) 
            {
                lower = true;
                vowel = true;
            }
              if (is_consonant(i) == 2) 
            {
                lower = true;
                consonant = true;
            }
            if(is_number(i))number=true;
            else{continue;}
        }
        if(vowel&&consonant)return true;
        else return false;

    }
    else 
    {
        return false;
    }
}
};