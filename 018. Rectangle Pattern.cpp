// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 
#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter the value of N"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            i==1||j==1||j==n||i==n?cout<<"* ":cout<<"  ";}
        cout<<endl;
    }
    
}
