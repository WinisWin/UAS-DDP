//referensi dari mana ya?? udah dicantumin referensinya?

#include <iostream>

using namespace std;

// menghitung jumlah pesanan yang akan di beli

int main()
{
  
int harga, caffe, jumlah, uang, total;
string nama, kondisi;

      cout <<"-------------------------------------------------"<< endl;
      cout <<"- 1. kentang goreng                        10000-"<< endl;
      cout <<"- 2. hotdog                                12000-"<< endl;
      cout <<"- 3. mie kuah                              10000-"<< endl;
      cout <<"- 4. mie goreng                            10000-"<< endl;
      cout <<"- 5. babi guling                           25000-"<< endl;
      cout <<"-------------------------------------------------"<< endl;
      
      
      cout <<  "masukan nama :";
      cin >> nama;
      cout << "pilih menu :";
      cin>> caffe;
      do{
         switch(caffe){
         case 1:
         cout << "kentang goreng" <<endl;
         cout << "harga : rp 10000" <<endl;
         cout << "masukan jumlah yang di pesan" <<endl;
         cin >> jumlah;
         cout << "total harga : rp " << 10000 * jumlah <<endl;
         cout << "masukan uang anda" <<endl;
         cin >> uang;
         total =  uang  - (10000 * jumlah);
         if(total > 0){
            
         }
         cout << "kembalian anda : rp" <<total<<endl;
         break;
         case 2:
         cout << "hotdog" <<endl;
         cout << "harga : rp 12000" <<endl;
         cout << "masukan jumlah yang di pesan" <<endl;
         cin >> jumlah;
         cout << "total harga : rp " << 12000 * jumlah <<endl;
         cout << "masukan uang anda" <<endl;
         cin >> uang;
         cout << "kembalian anda : rp" << uang  - (12000 * jumlah) <<endl;
         break;
         case 3:
         cout << "mie kuah" <<endl;
         cout << "harga : rp " <<endl;
         cout << "masukan jumlah yang di pesan" <<endl;
         cin >> jumlah;
         cout << "total harga : rp " << 10000 * jumlah <<endl;
         cout << "masukan uang anda" <<endl;
         cin >> uang;
         cout << "kembalian anda : rp" << uang  - (10000 * jumlah) <<endl;
         break;
         case 4:
         cout << "mie goreng" <<endl;
         cout << "harga : rp 10000" <<endl;
         cout << "masukan jumlah yang di pesan" <<endl;
         cin >> jumlah;
         cout << "total harga : rp " << 10000 * jumlah <<endl;
         cout << "masukan uang anda" <<endl;
         cin >> uang;
         cout << "kembalian anda : rp" << uang  - (10000 * jumlah) <<endl;
         break;
         case 5:
         cout << "babi guling" <<endl;
         cout << "harga : rp 20000" <<endl;
         cout << "masukan jumlah yang di pesan" <<endl;
         cin >> jumlah;
         cout << "total harga : rp " << 20000 * jumlah <<endl;
         cout << "masukan uang anda" <<endl;
         cin >> uang;
         cout << "kembalian anda : rp" << uang  - (20000 * jumlah) <<endl;
         break;
      }
      
         cout<< "apakah mau lanjut?";
          cin>>kondisi;
      }
      while(kondisi == "Y");
      
   }
   
