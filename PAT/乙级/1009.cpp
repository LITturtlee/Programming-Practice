#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> strs;
    string temp;
    while(cin >> temp){
        strs.emplace_back(temp);
    }
    for(auto iter=strs.rbegin();iter!=strs.rend()-1;iter++){
        cout<<*iter<<" ";
    }
    cout<<*(strs.rend()-1);
    return 0;
}