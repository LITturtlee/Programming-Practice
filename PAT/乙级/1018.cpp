#include <iostream> 
#include <map>
#include <utility>
#include <vector>

using namespace std;
//   关联容器只有对键进行排序的操作。

void judge(char& a,char& b, map<char,int>& m, vector<int>& log,vector<int>& A,vector<int>& B){
    int aInx = m[a];
    int bInx = m[b];
    if(aInx==bInx){
        log[1]++;
        return;
    }
    else if(bInx==(aInx+1)%3){
        log[0]++;
        A[(aInx+1)%3]++;
        return;
    }
    else {
        log[2]++;
        B[(bInx+1)%3]++;
        return;
    }
}
int main(){
    int times;
    map<char,int> m{{'C',0},{'J',1},{'B',2}};
    map<int,char> rm{{0,'B'},{1,'C'},{2,'J'}};
    vector<int> A(3),B(3),log(3);      //A[i]分别是剪刀石头布
    cin >> times;
    char a,b;
    for(int i=0;i<times;i++){
        cin>>a>>b;
        judge(a,b,m,log,A,B);
    }
    for(auto it=log.begin();it!=log.end()-1;it++){
        cout<<*it<<" ";
    }cout<<*(--log.end())<<endl;
    for(auto it=log.rbegin();it!=log.rend()-1;it++)
    {
        cout<<*it<<" ";
    }cout<<*(--log.rend())<<endl;
    int AInx=0,BInx=0;
    for(int i=1;i<3;i++){
        if(A[AInx]<A[i])AInx=i;
        if(B[BInx]<B[i])BInx=i;
    }
    cout<<rm[AInx]<<" "<<rm[BInx]<<endl;
    return 0;
}