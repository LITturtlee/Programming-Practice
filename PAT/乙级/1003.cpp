//只能有一个P一个T，中间末尾和开头可以随便插入A。但是必须满足开头的A的个数 * 中间的A的个数 = 结尾的A的个数，而且P和T之间不能没有A～
#include <iostream>
#include <string>

using namespace std;

void decider(string& input){
    int len = input.size();
    int flag = 0;
    int num[3] = {0,0,0};
    for(int i=0;i<len;i++){
        if(input[i]=='P'||input[i]=='A'||input[i]=='T'){
            if(input[i]=='A'&&flag==0)num[flag]++;
            else if(input[i]=='P'&&flag==0)flag++;
            else if(input[i]=='A'&&flag==1)num[flag]++;
            else if(input[i]=='T'&&flag==1)flag++;
            else if(input[i]=='A'&&flag==2)num[flag]++;
            else {cout<<"NO"<<endl;return;}
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    if((num[0]*num[1]==num[2])&&(num[1]!=0)){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    
}

int main(){
    int num;cin>>num;
    for(int i=0;i<num;i++){
        string input;
        cin>>input;
        decider(input);
    }
    return 0;
}