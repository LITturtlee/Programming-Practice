#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
bool isEqual = false;
bool isEnough(vector<int>& p, vector<int>& a){
    if(a[0]>p[0])return true;
    else if(a[0]==p[0]&&a[1]>p[1])return true;
    else if(a[0]==p[0]&&a[1]==p[1]&&a[2]>p[2])return true;
    else if(a[0]==p[0]&&a[1]==p[1]&&a[2]==p[2]){isEqual=true; return true;}
    else{
        p.swap(a);
        return false;
    }
}
void calRes(vector<int>& a, vector<int>& b){
    if(isEqual){cout<<"0.0.0"<<endl;return;}
    vector<int> res(3);
    if(a[2]>=b[2])res[2]=a[2]-b[2];else{res[2]=a[2]+29-b[2];a[1]--;}
    if(a[1]>=b[1])res[1]=a[1]-b[1];else{res[1]=a[1]+17-b[1];a[0]--;}
    res[0]=a[0]-b[0];
    printf("%d.%d.%d",res[0],res[1],res[2]);
//     cout<<res[0]<<"."<<res[1]<<"."<<res[2]<<endl;
}

int main(){
    vector<int> P(3),A(3);
    scanf("%d.%d.%d.",&P[0],&P[1],&P[2]);
    scanf("%d.%d.%d.",&A[0],&A[1],&A[2]);
    printf("%s",(isEnough(P,A)?"":"-"));
//     cout<<(isEnough(P,A)?"":"-");
    calRes(A,P);
    return 0;
    
}