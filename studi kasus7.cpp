#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Toko{
   public:
      void data();
};

typedef struct{
int kode;
char nama[20];
int stock;


}
   brg;
   brg barang[5];
   brg lok[5];
   brg temp;
   int n,i,b, cari, ada;

void Toko::data()
{


cout<<"============================================================================="<<endl;
cout<<"               PROGRAM SORTING DAN SEARCHING TOKO Ring Road                  "<<endl;
cout<<"============================================================================="<<endl;

cout<<"Masukan banyak data = ";

cin>>n;

 for(i=0;i<n;i++){

     cout<<endl;

      cout<<"Data ke-"<<(i+1)<<":"<<endl;

      cout<<"Input id Barang : ";cin>>barang[i].kode;

      cout<<"Input Nama Barang: ";cin>>(barang[i].nama);

      cout<<"Input Stock Barang : ";cin>>barang[i].stock;

    

      cout<<endl;

      }


      cout<<"Data Barang Anda"<<endl;
      cout<<"==================================================================="<<endl;
      cout<<"|   id Barang  |  Nama Barang  | Stock Barang | "<<endl;
      cout<<"==================================================================="<<endl;

        for(i=0;i<n;i++){



        cout<<"|       "<<barang[i].kode<<"\t\t"<<barang[i].nama<<"\t\t\t\t\t"<<barang[i].stock<<"     |"<<endl;

        }

        cout<<endl;

      cout<<"==================================================================="<<endl;

          for(i=0;i<n;i++){
             for(b=0;b<n-1;b++){
                if(barang[b].kode > barang[b+1].kode){
                   temp.kode=barang[b].kode;
                     barang[b].kode=barang[b+1].kode;
                     barang[b+1].kode=temp.kode;



          strcpy(temp.nama,barang[b].nama);
          strcpy(barang[b].nama,barang[b+1].nama);
          strcpy(barang[b+1].nama,temp.nama);

                temp.stock=barang[b].stock;
                barang[b].stock=barang[b+1].stock;
                barang[b+1].stock=temp.stock;





         

                     }

                  }

               }

               cout<<endl;





        cout<<endl;



        cout<<"Setelah data diurutkan berdasarkan kode terkecil : "<<endl;
        cout<<"===================================================================="<<endl;
        cout<<"|  id Barang  |  Nama Barang  |  Stock Barang  | "<<endl;
        cout<<"===================================================================="<<endl;
          for(b=0;b<n;b++){
            cout<<"|       "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t\t\t\t"<<barang[b].stock<<"     |"<<endl;

                     }

        cout<<"===================================================================="<<endl;
        cout<<endl;
        cout<<"Masukan id Barang Untuk Mencari : ";
        cin>>cari;
        ada = 0;
        for(b=0;b<n;b++)
            {
            if(barang[b].kode==cari)
                {
                    ada=1;



                    cout<<"===================================================================="<<endl;
                    cout<<"|      id Barang   |  Nama Barang   |       Stock Barang    |    "<<endl;
                    cout<<"===================================================================="<<endl;
                    cout<<"|         "<<barang[b].kode<<"\t\t\t\t  "<<barang[b].nama<<"\t\t     "<<barang[b].stock<<"\t\t\t\t "<<"|"<<endl;

                }

            }

                    cout<<"===================================================================="<<endl;
if (ada == 0)

{

cout<<"Data Tidak ditemukan"<<endl;
}

}

int main(){
   Toko maman;
   maman.data();
   return 0;
}
