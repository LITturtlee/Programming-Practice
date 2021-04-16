#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string input;
    cin >> input;
    vector<int> nums;
    nums.resize(6,0);
    for(int i=0;i<input.length();i++){
        char c = input[i];
        switch(c){
            case 'P':nums[0]++;break;
            case 'A':nums[1]++;break;
            case 'T':nums[2]++;break;
            case 'e':nums[3]++;break;
            case 's':nums[4]++;break;
            case 't':nums[5]++;break;
            default :break;
        }
    }
    while((nums[0]!=0)||(nums[1]!=0)||(nums[2]!=0)||(nums[3]!=0)||(nums[4]!=0)||(nums[5]!=0)){
        if(nums[0]!=0){cout<<'P';nums[0]--;}
        if(nums[1]!=0){cout<<'A';nums[1]--;}
        if(nums[2]!=0){cout<<'T';nums[2]--;}
        if(nums[3]!=0){cout<<'e';nums[3]--;}
        if(nums[4]!=0){cout<<'s';nums[4]--;}
        if(nums[5]!=0){cout<<'t';nums[5]--;}
    }
    cout<<endl;
    return 0;
}