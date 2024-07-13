#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 1;
    int b = 1;
    int sum = 1;
    for(int i = 1;i<=n-2;i++){
        sum = a+b;// is code me humne a+b ko sum me rakh rhe hai ;
        a = b;// is code me hum a me b ki value insert kr rhe hai taki next  time b ki  ki value a me jake new value bn jaye aur sum krte waqt addition perform jo hum chahte hai  ; 
        b = sum;// is code me humne b me sum ki value insert kr di hai ;
        
    }
    cout<<sum<<endl;
    return 0;
}

// write the fibona  ci series such serires are 1,1,2,3,5,8,13,21,34,55,89,144,203

