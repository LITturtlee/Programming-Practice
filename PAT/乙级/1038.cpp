#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int,int> log;
    int N,K;
    cin >> N;
    for(int i=0;i<N;i++){
        int grade=0;
        cin>>grade;
        log[grade]++;
    }
    cin>>K;
    for(int i=0;i<K;i++){
        int grade=0;
        cin>>grade;
        if(i<K-1)
        cout<<log[grade]<<" ";
        else cout<<log[grade]<<endl;
    }
    return 0;
}