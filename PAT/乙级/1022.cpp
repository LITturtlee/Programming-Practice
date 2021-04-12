#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    unsigned long A,B,C;
    unsigned int D;
    string res ;
    cin>>A>>B>>D;
    C = A + B;
    while(C/D!=0){
        res += to_string(C%D);
        C /= D;
    }
    res += to_string(C%D);
    reverse(res.begin(),res.end());
    cout<<res<<endl;
    return 0;
}