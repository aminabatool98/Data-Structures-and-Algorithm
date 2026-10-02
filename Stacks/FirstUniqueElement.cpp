#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q1;
        int n=s.size();
        unordered_map <char ,int> m;
        for(int i =0;i<n;i++){
            if(m.find(s[i]) == m.end()   ){
                q1.push(i);
            }
            m[s[i]]++;
            while(q1.size() > 0 && m[s[q1.front()]]  > 1){
                q1.pop();
            }

        }

        return q1.empty() ? -1 : q1.front();
    }
};