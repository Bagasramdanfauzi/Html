#include <iostream>
#include <string>
using namespace std;

void halo(string nama){
cout<<"halo"<<nama<<endl;
}
void tambah(int angka1,int angka2){
  printf("jumlah %d + %d = %d\n",
  angka1, angka2, angka1 + angka2);
}
int main(){
  halo ("kamal");
  tambah(2,4);
}