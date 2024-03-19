#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the vale of n: ";
    cin>>n;
    for(int row=0; row<5; row++){
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}