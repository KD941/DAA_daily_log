class Solution {
public:
    string convert(string s, int numRows) {
        bool down= true;
        string result="";
        vector <string> v(numRows);
        int currRow = 0;
        int i=0;
        if(numRows>s.length()||numRows<2)return s;
        while(i<s.length())
        {
            v[currRow]+=s[i];
            if(currRow==0)down=true;//for first row allow to go down
            if(currRow==numRows-1)down=false;//dont if its the last row
            if(down)currRow++;
            else{currRow--;}
            i++;
        }
        for(int k=0;k<numRows;k++)
        {
        result += v[k]; 
        }
        return result;
    }
};