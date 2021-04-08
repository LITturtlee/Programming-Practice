#include <iostream>
#include <string>

///这段代码写的有点丑，建议有空重写

using namespace std;

int main(){
    string A,Q;
    int B,len,temp=0,res=0,ans=0;
    cin>>A>>B;
    len = A.size();
    temp = A[0] - '0';
    ans = temp / B;
    res = temp % B;
    if(ans!=0)Q+=to_string(ans);
    temp = res;
    for(int i=1;i<len;i++){
        temp = temp*10 + (A[i] - '0');
        ans = temp / B;
        res = temp % B;
        Q+=to_string(ans);
        temp = res;
    }
    if(Q.empty())Q="0";
    cout<<Q<<" "<<res<<endl;    
    return 0;
}