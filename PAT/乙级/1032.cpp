#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    map<int,int> grades;
    for(int i=0;i<N;i++){
        int No,grade;
        cin>>No>>grade;
        grades[No]+=grade;
    }
//     for(auto it=grades.begin();it!=grades.end();it++){
//         cout<<it->first<<" "<<it->second<<endl;
//     }
    vector<pair<int,int>> _grades(grades.begin(),grades.end());
    sort(_grades.begin(),_grades.end(),[=](pair<int,int> a,pair<int,int> b){
        return a.second > b.second;
    });
    cout<<_grades[0].first<<" "<<_grades[0].second<<endl;
    return 0;
}