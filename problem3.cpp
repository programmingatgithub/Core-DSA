//no is prime or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i = 2;

    while(i<n){
        if(n%i==0){
            cout<<"the no is not prime" <<endl;
        }
        else{
            cout<<"the given no is a prime number"<<endl;
        }
        i = i + 1;
    }
}