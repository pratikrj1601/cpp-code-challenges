#include<iostream>
using namespace std;

// Printing patterns using conditionals and if loops

// *
// * *
// * * *
// * * * *
// * * * * *

// int main() {

//     int n, i=1;
//     cin>>n;

//     while (i<=n) {
//         int j = 1;        
//         while (j<=i) {
//             cout<<"* "; 
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

int main() {

    int n, i=1;
    cin>>n;

    while (i<=n) {
        int j = 1;        
        while (j<=n) {

            if(i>=j) {
                cout<<"* "; 
            }
            j++;
        }
        i++;
        cout<<endl;
    }
}
