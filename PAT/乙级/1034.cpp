#include <iostream>
#include <cmath>
using namespace std;
long long a, b, c, d;
long long gcd(long long t1, long long t2) {
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
void printRes(long long m,long long n){
    if(n==0){cout<<"Inf";return;}
    bool flag=(m*n)<0?true:false;
    m = abs(m);
    n= abs(n);
    if(flag)cout<<"(-";
    if(m%n==0){printf("%lld%s",m/n,flag?")":"");return;}
    else{
        if(m/n!=0){
            printf("%lld ",m/n);
        }
        m = m - n*(m/n);
        long long _gcd = gcd(m,n);
        m /= _gcd;
        n /= _gcd;
        printf("%lld/%lld%s",m,n,flag?")":"");
    }
}
int main() {
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    printRes(a, b); printf(" + "); printRes(c, d); printf(" = "); printRes(a * d + b * c, b * d); printf("\n");
    printRes(a,b);cout<<" - ";printRes(c,d);cout<<" = ";printRes(a*d-b*c,b*d);cout<<endl;
    printRes(a,b);cout<<" * ";printRes(c,d);cout<<" = ";printRes(a*c,b*d);cout<<endl;
    printRes(a,b);cout<<" / ";printRes(c,d);cout<<" = ";printRes(a*d,b*c);cout<<endl;

    return 0;
}
    
