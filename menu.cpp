#include <iostream>
#include <conio.h>
using namespace std;
int nilai[5];
int n = sizeof(nilai)/sizeof(nilai[0]);

void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Masukkan Nilai"<<"\n";            
cout<<"2. Keluaran Nilai"<<"\n";            
cout<<"3. Menu Ketiga"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

void inputNilai(){
  system("cls");
  cout << "==Input Nilai Yang Anda inginkan==" << endl << endl;
    for  (int i = 0; i < n; i++)
    {
      cout << "masukkan nilai ke-" << i+1 <<" :";
      cin >> nilai[i];
    }
    getch();
}

void outputNilai(int nilai[]){
  system("cls");
  cout << "==Nilai Yang Telah Anda Masukkan==" << endl;
  cout << "Nilainya adalah: ";
  for(int i = 0; i < n ; i++){
    cout << nilai[i] << " ";
  }
  getch();
}

void info(){
  system("cls");
  cout<<"Indonesia Hebat, Poliban Juara";
  getch();
}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}


int main() {

char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    inputNilai();
    break;
   case '2':
    outputNilai(nilai);
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    info();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}