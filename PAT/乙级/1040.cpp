#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    string input="";
    cin >> input;
    int P=0,A=0,T=0,count=0;
    for(int i=0;i<input.length();i++){
        if(input[i]=='T')T++;
    }
    for(int i=0;i<input.length();i++){
        if(input[i]=='T')T--;
        if(input[i]=='P')P++;
        if(input[i]=='A'){count = (count+(T*P)%1000000007)%1000000007;}
//         count = count%1000000007
//             count = (T*P)%1000000007
        
    }
    cout<<count<<endl;
    return 0;
}