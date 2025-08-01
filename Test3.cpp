#include <iostream>
using namespace std;
int main(){
    int n1,n2,count;
    cin >> n1;
    cin >> n2;
    count=0;
    if(n2<n1){ //ตรวจใน case ที่ใส่ input สลับกัน
        int temp = n1;
      n2=n1;
      n1=temp;
    }

    for(int i=n1;i<=n2;i++){ //บวก n1 ไปเรื่อยๆจนกว่าจะถึง n2
        if(i%2==0){ //ถ้า n1 หาร 2 ลงตัวก็จะบวกเข้าไปในตัวแปร count
            count+=i;
        }
    }
    cout << count;


    return 0;
}