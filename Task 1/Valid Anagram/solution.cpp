class Solution {
public:
    bool isAnagram(string s, string t) {

       if(s.length()!=t.length())   //Check whether both strings of same length or not
           return false;
        int count[256]={0};
        for(int i=0;i<s.length();i++)
        {
            count[s[i]]++;       //Increment the occurence of integer equal to ASCII value of element of string s
            count[t[i]]--;      //Decrement the occurence of integer equal to ASCII value of element of string t
        }
        for(int i=0;i<256;i++)
        {
            if(count[i])        //Element other than 0
                return false;

        }
        return true;
    }

};

//Time complexity will be O(length of string) i.e. O(n).
//We are not using new array of length 256,Space Complexity will be O(length of array) i.e. O(n).
