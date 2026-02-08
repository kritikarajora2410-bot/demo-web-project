#include<iostream>
using namespace std;
int main(){
    //outer loop--> n times
    //inner loop--> n no.s each line
    int n = 3;
    int num = 1;

    for( int i=0;i<n;i++){
        for( int j=0;j<n;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }

}
