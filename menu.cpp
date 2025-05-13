#include <iostream>
#include <conio.h>
using namespace std;
const int n = 5;
int nilai[n];

void dMenu(){
system("cls");
cout<<"Aplikasi Input Output Sorting Nilai"<<"\n";       
cout<<"1. Masukkan Nilai"<<"\n";            
cout<<"2. Keluaran Nilai"<<"\n";            
cout<<"3. Sortirkan Nilai"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

//Input
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

//Output
void outputNilai(int nilai[]){
  system("cls");
  cout << "==Nilai Yang Telah Anda Masukkan==" << endl;
  cout << "Nilainya adalah: ";
  for(int i = 0; i < n ; i++){
    cout << nilai[i] << " ";
  }
  getch();
}

//Insertion Sort
void sortNilai(int nilai[]){
  system("cls");
  char pilihan;
  cout << "== Sorting Nilai ==" << endl;
  cout << "Ketik 'a' untuk Ascending atau 'd' untuk Descending: ";
  cin >> pilihan;

  // Ascending
  if (pilihan == 'a' || pilihan == 'A') {
    for (int i = 1; i < n; i++) {
      int key = nilai[i];
      int j = i - 1;
      while (j >= 0 && nilai[j] > key) {
        nilai[j + 1] = nilai[j];
        j--;
      }
      nilai[j + 1] = key;
    }

    cout << "\nNilai setelah diurutkan (Ascending): ";
    for (int i = 0; i < n; i++) {
      cout << nilai[i] << " ";
    }

  // Descending
  } else if (pilihan == 'd' || pilihan == 'D') {
    for (int i = 1; i < n; i++) {
      int key = nilai[i];
      int j = i - 1;
      while (j >= 0 && nilai[j] < key) {
        nilai[j + 1] = nilai[j];
        j--;
      }
      nilai[j + 1] = key;
    }

    cout << "\nNilai setelah diurutkan (Descending): ";
    for (int i = 0; i < n; i++) {
      cout << nilai[i] << " ";
    }

  } else {
    cout << "\nPilihan tidak dikenali. Silakan ketik 'a' atau 'd'.";
  }

  getch();
}

//Informasi
void info(){
  system("cls");
  cout<<"Indonesia Hebat, Poliban Juara";
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
    inputNilai();
    break;
   case '2':
    outputNilai(nilai);
    break;  
   case '3':
    sortNilai(nilai);
    break;  
   case '4':
    info();
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