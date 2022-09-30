#include <iostream>
#include <math.h>
using namespace std;

float tambah(float x, float y){
    return x+y;
}
float kurang(float x, float y){
    return x-y;
}
float kali(float x, float y){
    return x*y;
}
float bagi(float x, float y){
    return x/y;
}
float pangkat(float x, float y){
    return pow(x, y);
}

int main(){
    char a;
    int x, y;
    float hasil;
    cout<<"Masukkan angka: "<<endl;
    cin>>x>>a>>y;

    switch (a){
    case '+' :
    hasil = tambah(x, y);
    break;
    case '-' :
    hasil = kurang(x, y);
    break;
    case '*' :
    hasil = kali(x, y);
    break;
    case '/' :
    hasil = bagi(x, y);
    break;
    case ':' :
    hasil = bagi(x, y);
    break;
    case '^' :
    hasil = pangkat(x, y);
    break;
    default:
    cout<<"Error: wrong input"<<endl;
    }
    cout<<x<<a<<y<<" = "<<hasil<<endl;
    
    return 0;
}