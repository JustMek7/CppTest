#include <iostream>
using namespace std;
int main(){
    int n1,n2,max;
    cin >> n1; //รับ input แรก
    max =n1; //ตั้ง max ตรงกับ input แรกก่อน
    for(int i=0;i<2;i++){ //loop input 2 ครั้งเฉยๆตรงนี้
    cin >> n2;
    if(n2>max){ //ถ้า input ล่าสุดมากกว่า input แรก จะตั้งค่า max ให้เป็น input ล่าสุด
        max=n2;
    }
    }
    cout << max;

    return 0;

}

