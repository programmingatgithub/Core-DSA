/*  wap to print the below pattern
1
21
321*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        int value = row;

        while(col<=row){
            cout<<value;
            value = value - 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
        
    }
    
}