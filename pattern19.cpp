/*wap to print the below pattern
    *
   **
  ***
 ****
*****
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        int space = n - row;
        while (space){
            cout<<" ";
            space = space - 1;

        }
        int col = 1;
        while(col <= row){
            cout<<"*";
            col = col +1;

        }
        cout<<endl;
        row = row + 1;



    }
    
}