#include <iostream>>
using namespace std;
// int main(){
//     for (int i=1;i<=100;i++){
//        if(i%2==0) {
//    continue;
//        }
//      cout<<i<<endl;
       
//     }
// }

 // continue ka use hum skip krne  ke liye use krte hai jo condition true hogi toh skip ho jayegi aur false value print ho jayegi

 int main(){
    for(int i =1;i<=100;i++){
        if(i%2==0){
            continue;
            cout<<"it is even"<<endl;
        }
        else{
            cout<<"it is odd"<<endl;
        }
    }
}
