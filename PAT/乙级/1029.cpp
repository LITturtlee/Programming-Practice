#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    string correct,wrong;
    cin>>correct>>wrong;
    vector<char> res;    
    // toUpper
    transform(correct.begin(), correct.end(), correct.begin(), ::toupper);
    transform(wrong.begin(), wrong.end(), wrong.begin(), ::toupper);
    int wrongIndex = 0;
    for(int i=0;i<correct.length();i++){
        if(wrong[wrongIndex]==correct[i])wrongIndex++;
        else{
            if(find(res.begin(),res.end(),correct[i])==res.end())
                res.emplace_back(correct[i]);
        }
    }
    for(auto it=res.begin();it!=res.end();it++){
        cout<<*it;
    }
    return 0;
}