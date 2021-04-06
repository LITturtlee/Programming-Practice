#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> Day{"MON","TUE","WED","THU","FRI","SAT","SUN"};
    vector<string> strs(4,"");
    char c1=NULL,c2=NULL;
    int index;
    for(int i=0;i<4;i++){
        cin>>strs[i];
    }
    int len1 = strs[0].size()>strs[1].size()?strs[1].size():strs[0].size();
    int len2 = strs[2].size()>strs[3].size()?strs[3].size():strs[2].size();
    for(int i=0;i<len1;i++){
        if(strs[0][i]==strs[1][i]&&(strs[0][i]>='A'&&strs[0][i]<='G')&&c1==NULL){
            c1 = strs[0][i];
            continue;
        }
        if(c1!=NULL&&strs[0][i]==strs[1][i]&&((strs[0][i]>='0'&&strs[0][i]<='9')||(strs[0][i]>='A'&&strs[0][i]<='N'))){
            c2 = strs[0][i];
            break;
        }
    }
    for(int i=0;i<len2;i++){
        if(strs[2][i]==strs[3][i]&&((strs[2][i]>='A'&&strs[2][i]<='Z')||(strs[2][i]>='a'&&strs[2][i]<='z'))){
            index = i;
            break;
        }
    }
    cout<<Day[c1-'A']<<" ";
    if(c2<='9') cout<<c2<<" ";
    else {
        int t = c2 -'A' + 10;
        cout<<t<<":";
    }
    if(index<10)cout<<"0"<<index<<endl;
    else cout<<index<<endl;
    return 0;
}