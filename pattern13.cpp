/* wap to print the below pattern
ABC
ABC
ABC*/


#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int row = 1;


    while(row<=n){
        int col = 1;

        while(col<=n){
            char ch = 'A' + col -1;
            cout<<ch;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
    }

}