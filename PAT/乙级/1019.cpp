#include <iostream>
#include <set>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main(){
    string input;
    cin >> input;
    stringstream s;
    s<<setw(4)<<setfill('0')<<input;
    input = s.str();
    multiset<char,greater<int>> a;
    int big=0,small=0,temp=1000;
    for(int i=0;i<input.size();i++){ 
        a.emplace(input[i]);
    }
    
    while((big-small)!=6174){
        big =0,small=0,temp = 1000;
        for(auto iter=a.begin();iter!=a.end();iter++){
            big +=(*iter -'0')*temp;
            temp /= 10;
        }
        temp = 1000;
        for(auto iter=a.rbegin();iter!=a.rend();iter++){
            small +=(*iter-'0')*temp;
            temp /= 10;
        }
        stringstream ss;
        ss << setw(4)<<setfill('0')<<(big-small);
        string ans = ss.str();
        cout<<setw(4)<<setfill('0')<<big<<" - "<<setw(4)<<setfill('0')<<small<<" = "<<setw(4)<<setfill('0')<<ans<<endl;
        if((big-small)==0)break;
        a.clear();
        for(int i=0;i<ans.size();i++){ 
            a.emplace(ans[i]);
        }
    }
    return 0;
}