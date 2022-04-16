#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int dresscode(vector<int>arr){
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i<j){
                sum+=1;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    int ans=dresscode(arr);
    cout<<ans;
    return 0;
}