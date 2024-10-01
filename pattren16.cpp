/* wap to print below pattern
A
BC
DEF
GHIJ
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    char value ='A';
    int row = 1;
    while (row<=n){
        int col = 1;

        while (col<=row){
            cout<<value;
            value = value + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;

    }
}