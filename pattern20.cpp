/* wap to print the below pattern
    1
   121
  12321
 1234321
123454321
*/



#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int row = 1;
    while(row<=n){
        //space printing(first triangle)
        int space = n-row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //print second triangle
        int j = 1;
        while (j<= row){
            cout<<j;
            j = j+1;
        }

        //print Third triangle

        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;

        }

        cout<<endl;
        row = row + 1;
    }


}