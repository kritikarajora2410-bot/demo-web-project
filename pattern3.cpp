#include<iostream>
using namespace std;
int main(){
    //outer loop--> n times
    //inner loop--> n no.s each line
    int n = 3;
    int num = 1;

    for( int i=0;i<n;i++){//num ko hamne dono loop ke bahar declare kiya kyuki agar outer loop ke andar kr dete to phir se 123 123 hota rhta 
        for( int j=0;j<n;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}