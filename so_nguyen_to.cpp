#include<iostream>
#include<cmath>
using namespace std;


bool check(int x){
    if(x<2) return true;
    for(int i=2 ; i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(check(n))cout <<"yes";
    else cout << "no";
    return 0;

}
