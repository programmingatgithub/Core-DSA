/* wap to print the below pattern
D
CD
BCD
ABCD
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int row = 1;
    while (row<=n){
    int col = 1;
     char ch =('A'+ n - row);

    while (col<=row){
        cout<<ch;
        ch = ch +1;
        col = col + 1;


    }
    cout<<endl;
    row = row + 1;

   } 

}