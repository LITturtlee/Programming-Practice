#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

class Criterion
{
    public:
   const bool operator()(const vector<int>& a,const vector<int>& b){
        if(a[1]+a[2]>b[1]+b[2])return true;
        else if(a[1]+a[2]<b[1]+b[2])return false;
        else if(a[1]>b[1]&&a[1]+a[2]==b[1]+b[2])return true;
        else if(a[1]<b[1]&&a[1]+a[2]==b[1]+b[2])return false;
        else if(a[0]<b[0])return true;
        else return false;
    }
};

int main(){
    int N,L,H;
    vector<vector<int>> T0;
    vector<vector<int>> T1;
    vector<vector<int>> T2;
    vector<vector<int>> T3;
    cin>>N>>L>>H;
    for(int i=0;i<N;i++){
        int id,D,C;
        cin>>id>>D>>C;
        if(D<L||C<L)continue;
        else if(D>=H&&C>=H)T0.emplace_back(vector<int>{id,D,C});
        else if(D>=H&&C<H)T1.emplace_back(vector<int>{id,D,C});
        else if(D<H&&C<H&&D>=C)T2.emplace_back(vector<int>{id,D,C});
        else T3.emplace_back(vector<int>{id,D,C});
    }
    cout<<T0.size()+T1.size()+T2.size()+T3.size()<<endl;
//     sort(T0.begin(),T0.end(),[=](vector<int> a,vector<int> b){
//         return a[0]<b[0];
//     });
//     sort(T0.begin(),T0.end(),[=](vector<int> a,vector<int> b){
//         return a[1]>b[1];
//     });
//     sort(T0.begin(),T0.end(),[=](vector<int> a,vector<int> b){
//         return a[1]+a[2]>b[1]+b[2];
//     });
    sort(T0.begin(),T0.end(),Criterion());
    for(auto i:T0){cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;}
//     sort(T1.begin(),T1.end(),[=](vector<int> a,vector<int> b){
//         return a[0]<b[0];
//     });
//     sort(T1.begin(),T1.end(),[=](vector<int> a,vector<int> b){
//         return a[1]>b[1];
//     });
//     sort(T1.begin(),T1.end(),[=](vector<int> a,vector<int> b){
//         return a[1]+a[2]>b[1]+b[2];
//     });
    sort(T1.begin(),T1.end(),Criterion());
    for(auto i:T1){cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;}
//     sort(T2.begin(),T2.end(),[=](vector<int> a,vector<int> b){
//         return a[0]<b[0];
//     });
//     sort(T2.begin(),T2.end(),[=](vector<int> a,vector<int> b){
//         return a[1]>b[1];
//     });
//     sort(T2.begin(),T2.end(),[=](vector<int> a,vector<int> b){
//         return a[1]+a[2]>b[1]+b[2];
//     });
    sort(T2.begin(),T2.end(),Criterion());
    for(auto i:T2){cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;}
//     sort(T3.begin(),T3.end(),[=](vector<int> a,vector<int> b){
//         return a[0]< b[0];
//     });
//     sort(T3.begin(),T3.end(),[=](vector<int> a,vector<int> b){
//         return a[1]>b[1];
//     });
//     sort(T3.begin(),T3.end(),[=](vector<int> a,vector<int> b){
//         return a[1]+a[2]>b[1]+b[2];
//     });
    sort(T3.begin(),T3.end(),Criterion());
    for(auto i:T3){cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;}
    return 0;
}