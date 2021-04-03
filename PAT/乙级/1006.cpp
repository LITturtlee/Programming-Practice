#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//感觉时间花挺久,建议再想想有啥新办法没有.

int main(){
    int input,ge,shi,bai;
    string ans;
    cin >> input;
    ge = input % 10;
    shi = (input/10) % 10;
    bai = input / 100;
    for(int i=0;i<bai;i++)ans += 'B';
    for(int i=0;i<shi;i++)ans += 'S';
    for(int i=0;i<ge;i++)ans += to_string(i+1);
    cout<<ans;
    return 0;
}