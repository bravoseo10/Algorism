#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int x=0; x<a; x++){
        for(int y=0; y<=x; y++){
            cout<<'*';
        }
        cout<<endl;
    }
}