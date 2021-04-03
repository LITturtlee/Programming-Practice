#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//完全可以不用排序，这里这么写也只是想用一下排序。


using namespace std;
int main(){
    int num,score;
    string name,id;
    vector<string> names;
    vector<vector<int>> scores;
    cin>> num;
    for(int i=0;i<num;i++){
        cin >> name >> id >> score;
        names.emplace_back(name+' '+id);
        scores.emplace_back(vector<int>{score,i});
    }
    sort(scores.begin(),scores.end(),[=](vector<int> a,vector<int> b){
        return a[0] < b[0];         //由小到大排序
    });
//     for(auto iter=scores.begin();iter!=scores.end();iter++){
//         cout<<(*iter)[0]<<" "<<(*iter)[1]<<endl;
//     }
    cout<<names[scores[num-1][1]]<<endl;
    cout<<names[scores[0][1]]<<endl;
    return 0;
}