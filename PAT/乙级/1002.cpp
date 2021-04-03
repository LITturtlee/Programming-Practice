#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> py = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string n,ans;cin>> n;
    int result = 0;
    for(int i=0;i<n.size();i++){
        result += n[i] - '0';
    }
    ans = py[result%10];
    result /= 10;
    while(result!=0){
        string temp = py[result%10];
        temp += " ";
        temp += ans;
        ans = temp;
        result /= 10;
    }
    cout<<ans<<endl;;
    return 0;
}