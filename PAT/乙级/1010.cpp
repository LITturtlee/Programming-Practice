#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    ostringstream ostr;
    string res;
    vector<int> ans;
    int temp,index;
    index = 0;
    while(cin >> temp){
        if(index%2!=0){
            ans[index-1] *= temp;
            temp -= 1;
        }
        ans.emplace_back(temp);
        index++;
    }
    int len = ans.size();
    for(int i=0;i<len;i++){
        if(i%2==0&&ans[i]==0){
            i += 2;
            continue;
        }
        ostr<<ans[i]<<" ";
    }
    res = ostr.str();
    if(!res.empty())res.pop_back();
    else res = "0 0";
    cout<<res<<endl;
    return 0;
}