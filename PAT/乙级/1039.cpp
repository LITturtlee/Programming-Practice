#include <iostream>
#include <map>
#include <string>

using namespace std;

struct necklace{
    map<char,int> bead;
    int length;
     
    necklace(string s){
        length = s.length();
        for(int i=0;i<length;i++){
            bead[s[i]]++;
        }
    }
};

int main(){
    string s1,s2;
    cin>>s1>>s2;
    necklace goods(s1);
    necklace target(s2);
    bool enough = true;
    int rest = 0;
    for(auto it=target.bead.begin();it!=target.bead.end();it++){
        char color = it->first;
        int nums = it->second;
        if(nums>goods.bead[color]){enough=false;rest+=nums-goods.bead[color];}
    }
    if(enough)cout<<"Yes "<<goods.length - target.length;
    else cout<<"No "<<rest;
    return 0;
}