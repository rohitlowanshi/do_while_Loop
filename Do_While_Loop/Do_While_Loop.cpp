#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    do{
        cout<<pow(n,3)<<endl;
        cin>>n;
    }while(n>0);
   return 0;
}