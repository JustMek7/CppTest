#include <iostream>
using namespace std;
int main(){
    int n1,n2,min,max;
    cin >> n1;
    max =n1;
    for(int i=0;i>=2;i++){
    cin >> n2;
    if(n2>max){
        max=n2;
    }
    }
    cout << max;

    return 0;
}