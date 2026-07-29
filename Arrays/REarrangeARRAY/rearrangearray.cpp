#include <bits/stdc++.h>
using namespace std;


int rearrange(vector<int>vec,int n){
    int Pos=vec[0];
    int Neg=vec[0]+1;
    vector<int>vec1{6,0};
    for (int i = 0; i < n; i++)
    {
       if (vec[i]  > 0)
       {
        vec1[Pos]=vec[i];
        Pos +=2;
       }
       else{
            vec1[Neg]=vec[i];
                Neg +=2;
       }
       
    }
    
}

//  IN CASE YOU HAVE NEGATIVE AND POSITIVE NOT EQUAL LIKE ARRAY HAS 4POS,2NEG---------------------



int rearrange_Special_Case(vector<int>vec,int n){
    
    vector<int>pos;
    vector<int>neg;
    for (int i = 0; i < n; i++)
    {
       if (vec[i] > 0)
       {
        pos.push_back(vec[i]);
       }
       else
       {
        neg.push_back(vec[i]);
       }
    }

    if (pos.size() > neg.size() )
    {
        for (int i = 0; i < neg.size(); i++)
        {
            vec[2*i]=pos[i];
            vec[2*i+1]=neg[i];
        }
        int idx=neg.size() *2;
        for (int i = neg.size() ; i < pos.size(); i++)
        {
            vec[idx]=pos[i];
            idx++;
        } 
        
    }
    else{
        for (int i = 0; i < pos.size(); i++)
        {
            vec[2*i]=pos[i];
            vec[2*i+1]=neg[i];
        }
        int idx=pos.size() *2;
        for (int i = pos.size() ; i < neg.size(); i++)
        {
            vec[idx]=neg[i];
            idx++;
        }

    }
    
    
}



int main(){

}