#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string in;
    cin >> in;
    vector<int> nums(10,0);
    for(int i=0;i<in.length();i++){
        int index = in[i] - '0';
        nums[index]++;
    }
    for(int i=0;i<10;i++){
        if(nums[i]!=0){
            cout<<i<<":"<<nums[i]<<endl;
        }
    }
    return 0;
}