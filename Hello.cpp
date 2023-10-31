#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input the number : ";
    cin>>n;

    if(n == 10){
        cout<<n<<" is equal to 10";
    }
    if(n < 10){
        cout<<n<<" is less than 10";
    }
    if(n > 10){
        cout<<n<<" is greater than 10";
    }

    return 0;
}