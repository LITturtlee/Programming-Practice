#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

//最后输出那一块连续输出数列间隔空格  还有没有更好的办法.

void genCoverList(int n,vector<int>& coverList){
    if(n==1)return;
    else if(n%2==0){
        n = n / 2;
        if(find(coverList.begin(),coverList.end(),n)==coverList.end()){coverList.emplace_back(n);genCoverList(n,coverList);}
        else return;
    }
    else{
        n = (3*n + 1) / 2;
        if(find(coverList.begin(),coverList.end(),n)==coverList.end()){coverList.emplace_back(n);genCoverList(n,coverList);}
        else return;
    }
}

int main(){
    int num;
    cin>>num;
    int l[num];
    vector<int> coverList;
    coverList.reserve(100);
    for(int i=0;i<num;i++){
        cin >> l[i];
        auto iter = find(coverList.begin(),coverList.end(),l[i]);
        if(iter!=coverList.end())continue;
        else genCoverList(l[i],coverList);
    }
    sort(l,l+num,[=](int a,int b){
        return a > b;
    });
    ostringstream ostr;
    for(int i=0;i<num;i++){
        if(find(coverList.begin(),coverList.end(),l[i])==coverList.end())ostr<<l[i]<<" ";
    }
    string ans = ostr.str();
    ans.pop_back();
    cout<<ans;
    return 0;
}