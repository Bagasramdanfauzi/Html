#include <iostream>
#include <string>
using namespace std;

int main()
{
    int angka[]={3, 5,6,8,12};
    cout << "angka"<< angka[4]<<endl;
    char huruf[]={'x','y','z'};
    printf ("huruf %c",huruf[1]);
    string nama[]={"bagas", " tanaka", "panca"};
    cout <<" nama="<<nama[0]<<endl;
    int nilai[3][4]=
    {
      {10, 20,30,40},
      {50, 60,70,80}, 
      {90, 100}
    };
    cout << "nilai" << nilai[1][3]<<endl;
    int x=0;
    for(x;x<=5;x++){
    cout <<angka[x]<<endl;
    }
}