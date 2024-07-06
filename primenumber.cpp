#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 0;
    for(int i = 2;i<=n-1;i++){
        if(n%i == 0){
            cout<<"it is composite"<<endl;
            a = 1;
            break;
        }
    }
    if(a==0)cout<<"it is prime number"<<endl;

    return 0;
}


// check a number is a prime or not  aproach behind this  is 
//first one take a number from user i=2 isliye kyuki  any number is divisibleee by 1 and itself 
// apply for loop for iteration isliye kiye kuki hume factor  check krne the har baar loop chalega aur i ki value increase hogi aur hume phir check krna hoga ki agar n modulo i is  equal to zero then print it is composite and change the value of a is one  we use extra variable here for smart move we initialise the variable a is equal to zero because if a==0 after n%i!=0
//then we check value of a is still zero then it is prime  else it icit is composite
// yha pr humne break keyword ka use kiya hai jo loop ko break krne ke liye use krte hai 