#include<bits/stdc++.h>
using namespace std;

// method overriding  

class telephone{
    public:
        void call(char a){
            cout<<"making a call.........";
        }
        void call(int k){                         // method overloding 
            cout<<"it's method over loding ...........";
        }
};
class mobail : public  telephone{

    public:
        void call(){
            cout<<"game is starting.... loding....";
        }


};
int main(){

    mobail m1;
    m1.telephone::call('a');
}