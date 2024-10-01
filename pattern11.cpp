/*  wap to print the below pattern
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
6 5 4 3 2 1 
7 6 5 4 3 2 1 
8 7 6 5 4 3 2 1 
9 8 7 6 5 4 3 2 1 
10 9 8 7 6 5 4 3 2 1 
11 10 9 8 7 6 5 4 3 2 1 
12 11 10 9 8 7 6 5 4 3 2 1 
13 12 11 10 9 8 7 6 5 4 3 2 1 
14 13 12 11 10 9 8 7 6 5 4 3 2 1 
15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
*/
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"ener the value of n";
    cin>>n;

    int row = 1;
    while(row<=n){
       int col = 1;

       while(col<=row){
        cout<<row - col +1<< " ";
        col = col + 1;

       }
       cout<<endl;
       row = row + 1;

    }
}