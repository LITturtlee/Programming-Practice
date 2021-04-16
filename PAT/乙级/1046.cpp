#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> res;
    res.resize(2,0);
    int times;
    cin >> times;
    for(int i=0;i<times;i++){
        int aPose,aAns,bPose,bAns;
        cin>>aPose>>aAns>>bPose>>bAns;
        if(aAns==aPose+bPose&&bAns!=aPose+bPose)res[0]++;
        if(aAns!=aPose+bPose&&bAns==aPose+bPose)res[1]++;
    }
    cout<<res[1]<<" "<<res[0]<<endl;
    return 0;
}