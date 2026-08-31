#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool ispalin(string s){
        string s2=s;
        reverse(s2.begin(),s2.end());
           return s2 == s;
        
    }
    void getAllParts(string s,vector<string> &palind, vector<vector<string>>& ans){
        if(s.size()  == 0){
            ans.push_back(palind);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part =s.substr(0,i+1);
            if(ispalin(part)){
                palind.push_back(part);
                getAllParts(s.substr(i+1),palind,ans);
                palind.pop_back();

            }
        }


    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> palin;
        getAllParts(s,palin,ans);

        return ans;

        
    }
};