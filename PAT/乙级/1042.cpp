#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    transform(input.begin(),input.end(),input.begin(),::tolower);
//     cout << input<<endl;
    map<char,int,less<char>> count;
    for(int i=0;i<input.length();i++){
        if(isalpha(input[i])){
//             cout<<input[i]<<endl;
            count[input[i]]++;
        }
    }
//     auto it = count.end();
    vector<pair<char,int>> res(count.begin(),count.end());
    sort(res.begin(),res.end(),[=](pair<char,int> a,pair<char,int> b){
        if(a.second>b.second)return true;
        else if(a.second==b.second&&a.first<b.first)return true;
        else return false;
    });
    cout<<res.begin()->first<<" "<<res.begin()->second;
    return 0;
}