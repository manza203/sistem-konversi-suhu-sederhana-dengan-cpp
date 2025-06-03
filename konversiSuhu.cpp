#include <iostream>
using namespace std;

int main (){
  float celcius, reamur, kelvin, fahrenheit;
  int pilihan, opsi;
  float suhu;

do{
  cout << "selamat datang di program konversi suhu" << endl;
  cout << "=======================================" << endl;
  cout << "silahkan pilih suhu awal anda" << endl;
  cout << "1. Celcius" << endl;
  cout << "2. Reamur" << endl;
  cout << "3. kelvin" << endl;
  cout << "4. fahrenheit" << endl;
  cout << "5. keluar" << endl;
  cout << "pilih angka dari (1-5) : ";
  cin >> pilihan;

  switch (pilihan){
    case 1:
        cout << "\nmasukkan nilai suhu awal anda : ";
        cin >> suhu;
        do{
          cout << "================================================" << endl;
          cout << "silahkan pilih ke satuan mana anda ingin koversi" << endl;
          cout << "1. Reamur" << endl;
          cout << "2. kelvin" << endl;
          cout << "3. fahrenheit" << endl;
          cout << "pilih angka dari (1-3) : ";
          cin >> opsi;
          switch (opsi){
            case 1:
                cout << "nilai suhu anda dalam satuan celcius adalah " << suhu << endl;
                reamur = 0.8 * suhu;
                cout << "hasil konversi suhu ke reamur adalah " << reamur << " R"<< endl << endl;
                break;
            case 2:
                cout << "nilai suhu anda dalam satuan celcius adalah " << suhu << endl;
                kelvin = suhu + 273.15;
                cout << "hasil konversi suhu ke kelvin adalah " << kelvin << " K"<< endl <<endl;
                break;
            case 3:
                cout << "nilai suhu anda dalam satuan celcius adalah " << suhu << endl;
                fahrenheit = ((9.0/5) * suhu) + 32;
                cout << "hasil konversi suhu ke fahrenheit adalah " << fahrenheit << " F" << endl <<endl;
                break;
            default:
                cout << "masukkan opsi yang sesuai" << endl << endl;
                break;
          }
        }while(!(opsi <= 3 && opsi >= 1));
        break;
    case 2:
        cout << "\nmasukkan nilai suhu awal anda : ";
        cin >> suhu;
        do{
          cout << "================================================" << endl;
          cout << "silahkan pilih ke satuan mana anda ingin koversi" << endl;
          cout << "1. celcius" << endl;
          cout << "2. kelvin" << endl;
          cout << "3. fahrenheit" << endl;
          cout << "================================================" << endl;
          cout << "pilih angka dari (1-3) : ";
          cin >> opsi;
          switch (opsi){
            case 1:
                cout << "nilai suhu anda dalam satuan reamur adalah " << suhu << endl;
                celcius = (5.0/4) * suhu;
                cout << "hasil konversi suhu ke celcius adalah " << celcius << endl << endl;
                break;
            case 2:
                cout << "nilai suhu anda dalam satuan reamur adalah " << suhu << endl;
                kelvin = ((5.0/4) * suhu) + 273.15;
                cout << "hasil konversi suhu ke kelvin adalah " << kelvin << endl << endl;
                break;
            case 3:
                cout << "nilai suhu anda dalam satuan reamur adalah " << suhu << endl;
                fahrenheit = ((9.0/4) * suhu) + 32;
                cout << "hasil konversi suhu ke fahrenheit adalah " << fahrenheit << endl << endl;
                break;
            default:
                cout << "masukkan opsi yang sesuai" << endl << endl;
                break;
          }
        }while(!(opsi <= 3 && opsi >= 1));
        break;
    case 3:
        cout << "\nmasukkan nilai suhu awal anda : ";
        cin >> suhu;
        do{
          cout << "================================================" << endl;
          cout << "silahkan pilih ke satuan mana anda ingin koversi" << endl;
          cout << "1. celcius" << endl;
          cout << "2. reamur" << endl;
          cout << "3. fahrenheit" << endl;
          cout << "================================================" << endl;
          cout << "pilih angka dari (1-3) : ";
          cin >> opsi;
          switch (opsi){
            case 1:
                cout << "nilai suhu anda dalam satuan kelvin adalah " << suhu << endl;
                celcius = suhu - 273.15;
                cout << "hasil konversi suhu ke celcius adalah " << celcius << endl << endl;
                break;
            case 2:
                cout << "nilai suhu anda dalam satuan kelvin adalah " << suhu << endl;
                reamur = (4.0/5) * (suhu - 273.15);
                cout << "hasil konversi suhu ke reamur adalah " << reamur << endl << endl;
                break;
            case 3:
                cout << "nilai suhu anda dalam satuan kelvin adalah " << suhu << endl;
                fahrenheit = ((9.0/5) * (suhu - 273.15)) + 32;
                cout << "hasil konversi suhu ke fahrenheit adalah " << fahrenheit << endl << endl;
                break;
            default:
                cout << "masukkan opsi yang sesuai" << endl << endl;
                break;
          }
        }while(!(opsi <= 3 && opsi >= 1));
        break;
    case 4:
        cout << "\nmasukkan nilai suhu awal anda : ";
        cin >> suhu;
        do{
          cout << "================================================" << endl;
          cout << "silahkan pilih ke satuan mana anda ingin koversi" << endl;
          cout << "1. celcius" << endl;
          cout << "2. reamur" << endl;
          cout << "3. kelvin" << endl;
          cout << "================================================" << endl;
          cout << "pilih angka dari (1-3) : ";
          cin >> opsi;
          switch (opsi){
            case 1:
                cout << "nilai suhu anda dalam satuan fahrenheit adalah " << suhu << endl << endl;
                celcius = (5.0/9) * (suhu - 32);
                cout << "hasil konversi suhu ke celcius adalah " << celcius << endl;
                break;
            case 2:
                cout << "nilai suhu anda dalam satuan fahrenheit adalah " << suhu << endl;
                reamur = (4.0/9) * (suhu-32);
                cout << "hasil konversi suhu ke reamur adalah " << reamur << endl << endl;
                break;
            case 3:
                cout << "nilai suhu anda dalam satuan fahrenheit adalah " << suhu << endl;
                kelvin = ((5.0/9) * (suhu-32)) + 273.15;
                cout << "hasil konversi suhu ke kelvin adalah " << kelvin << endl << endl;
                break;
            default:
                cout << "masukkan opsi yang sesuai" << endl << endl;
                break;
          }
        }while(!(opsi <= 3 && opsi >= 1));
        break;
      default:
            cout << "\npilihan tidak tersedia " << endl;
            cout << "masukkan pilihan sesuai ketentuan (1-5)" << endl << endl;
  }
}while(pilihan != 5);
cout << "================================================" << endl;
cout << "terimakasih telah mencoba program ini" << endl;
  
  return 0;
}