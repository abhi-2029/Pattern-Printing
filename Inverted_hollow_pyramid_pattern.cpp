#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<row; col++){
            cout<<" ";
            
        }
        int totalcols=n-row;
        for(int col=0; col<totalcols; col++){
            if(col==0 || col==totalcols-1){
                cout<<" * ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}