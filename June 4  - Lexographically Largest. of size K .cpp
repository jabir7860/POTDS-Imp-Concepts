3403. Find the Lexicographically Largest String From the Box I
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given a string word, and an integer numFriends 

class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1) return word;  
        int k=word.size()-numFriends+1;
        string res=""; 
        for(int i=0;i<word.size();i++) 
        {
            res=max(res,word.substr(i,k)); 
            // cout<<res<<endl; 
        } 
        return res; 

    }
};


