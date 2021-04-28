#include <unordered_map>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
// #include <pair>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    vector<pair<string,int>> stus;
    cin >> N;
    stus.reserve(N+1);
    for(int i=0;i<N;i++){
        int seat1;
        pair<string,int> temp;
        cin>>temp.first>>seat1>>temp.second;
        stus[seat1] = temp;
    }
    cin>> M;
    for(int i=0;i<M;i++){
        int temp;
        cin >> temp;
        cout<<stus[temp].first<<" "<<stus[temp].second<<endl;   
    }
    return 0;
}