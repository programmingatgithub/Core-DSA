/* wap to print the below pattern
7654321
7654321
7654321
7654321
7654321
7654321
7654321
*/

#include <iostream>   
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;

    int i;
    while(i<=n){
        int j = 1;
        while(j<=n){
        cout<<n-j+1;
        j = j+1;

    }
    
    cout<<endl;
    i = i + 1;
    }
}