#include<iostream>

using namespace std;

int main()


{
int ss,h,m;
cin>>ss;
h=ss/60/60;
ss=ss%3600;
m=ss/60;
ss=ss%60;

cout<<h<<" hr "<<m <<"min "<<ss;

    return 0;

}