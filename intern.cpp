#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isana(string s1,string s2){
    map<int,int>mp1;
    map<int,int>mp2;
    
    for(int i=0;i<s1.size();i++){
        mp1[s1[i]]++;
    }
    
    for(int i=0;i<s2.size();i++){
        mp2[s2[i]]++;
    }
    if(mp1==mp2){
        return 1;
    }
    return 0;
}
vector<vector<string>> intern(vector<string>str){
    
    int n=str.size();
    vector<vector<string>>ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vector<string>vec;
            if(isana(str[i],str[j]) and i!=j){
                vec.push_back(str[j]);
            }
            ans.push_back(vec);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<string>vec;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vec.push_back(s);
    }
    vector<vector<string>> ans=intern(vec);
    int m=ans.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}