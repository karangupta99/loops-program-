
//  1+2-3-+4-5+6-7.....upto n 

#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int sum =0 ;

    if(n%2==0){
 sum = -n/2;
    }
    else{ 
        sum = -n/2 +n;}
        cout<<sum<<endl;
    return 0;
 }
 