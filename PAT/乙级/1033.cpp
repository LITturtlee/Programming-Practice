#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int main(){
    string badKey;
    string input;
    ostringstream os;
//     cin>>badKey>>input;    //当第一行为空时,badkey会读到输入
//     cin.getline(badKey);
//     cin.getline(input);
    getline(cin,badKey);
    getline(cin,input);
//     cout<<"badkey "<<badKey<<endl;
//     cout<<"input"<<input<<endl;
    bool upflag = false;
    if(find(badKey.begin(),badKey.end(),'+')!=badKey.end())upflag=true;
    if(upflag){
        for(auto iter=input.begin();iter!=input.end();iter++){
            char temp = (char)toupper(*iter);
            if(find(badKey.begin(),badKey.end(),temp)==badKey.end()){
                if((isalpha(*iter)&&(islower(*iter)))||!isalpha(*iter))os<<*iter;
            }
        }
    }
    else{
        for(auto iter=input.begin();iter!=input.end();iter++){
            char temp = (char)toupper(*iter);
            if(find(badKey.begin(),badKey.end(),temp)==badKey.end())os<<*iter;
        }
    }
    cout<<os.str();
    return 0;
}