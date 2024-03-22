#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num: ";
    cin>>num;
    int n=num/2;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            if(col==0 || col==row+1-1){
                cout<<" * ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
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