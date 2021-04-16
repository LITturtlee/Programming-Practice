#include <iostream>
#include <sstream>
#include <iomanip>
#include <set>
#include <string>
#include <vector>

using namespace std;
int main(){
    int N,nums=0;
    string Youngest="",Oldest="";
//     int ageYoungest = 200,ageOldest = -1;
    vector<int> ageYoungest(3);
    vector<int> ageOldest(3);
//     ageYoungest.reserve(3);
//     ageOldest.reserve(3);
    ageYoungest[0]=200,ageYoungest[1]=0,ageYoungest[2]=0;
    ageOldest[0]=-1,ageOldest[1]=12,ageOldest[2]=31;
    cin >> N;
    string name,birth;
    int age,year,month,day;
    for(int i=0;i<N;i++){
        cin >> name >> birth;
        istringstream s1(birth.substr(0,4));
        istringstream s2(birth.substr(5,7));
        istringstream s3(birth.substr(8,10));
        s1>>year;
        s2>>month;
        s3>>day;
        if(year==2014&&month==9&&day==6){nums++;ageYoungest[0]=0;ageYoungest[1]=month;ageYoungest[2]=day;Youngest=name;continue;}
        if(2014-year>=0&&2014-year<=201){
            age = 2014 - year;
            if(((9-month)==0&&(6-day)<=0)||(9-month)<0) age -= 1;
            if(age>=0&&age<200)nums++;
            else continue;
//             cout<<name<<" "<<year<<" "<<month<<" "<<day<<" "<<age<<endl;
            if(age<ageYoungest[0]){ageYoungest[0]=age;ageYoungest[1]=month;ageYoungest[2]=day;Youngest=name;}
            else if(age==ageYoungest[0]&&month>ageYoungest[1]){ageYoungest[1]=month;ageYoungest[2]=day;Youngest=name;}
            else if(age==ageYoungest[0]&&month==ageYoungest[1]&&day>ageYoungest[2]){ageYoungest[2]=day;Youngest=name;}
            if(age>ageOldest[0]){ageOldest[0]=age;ageOldest[1]=month;ageOldest[2]=day;Oldest=name;}
            else if(age==ageOldest[0]&&month<ageOldest[1]){ageOldest[1]=month;ageOldest[2]=day;Oldest=name;}
            else if(age==ageOldest[0]&&month==ageOldest[1]&&day<ageOldest[2]){ageOldest[2]=day;Oldest=name;}
        }
//         for(auto iter=ageYoungest.begin();iter!=ageYoungest.end();iter++){
//             cout<<*iter<<" ";
//         }cout<<endl;
    }
    if(nums==0){cout<<nums<<endl;return 0;}
    cout <<nums<<" "<<Oldest<<" "<<Youngest<<endl;
    return 0;
}