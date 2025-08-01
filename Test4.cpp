#include <iostream>
using namespace std;
int main(){
    int n;
    string gen;
    cin >> n;
    if(n<1928){ //หา case ที่เกินขอบเขตก่อน
        cout << "Not in the range of numbers";
    }
    else if(n>=1928&&n<=1945){
        gen="Slient Genation";
    }else if(n>=1946&&n<=1964){
        gen="Baby Boomers";
    }else if(n>=1965&&n<=1980){
        gen="Gen X";
    }else if(n>=1981&&n<=1996){
        gen="Gen Y";
    }else if(n>=1997&&n<=2012){
        gen="Gen Z";
    }else{
        gen="Gen Alpha";
    }

    cout << gen << endl;

    return 0;
}