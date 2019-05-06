#include <iostream.h>
#include <conio.h>
main()
{
clrscr();
char nama[20],pilih;
int jumlahbelanja,bayar,discount,totalbelanja,totalbayar,kembalian,harga;

cout<<"Nama: ";cin>>nama;
cout<<"Macam-macam barang: \n";
cout<<"A.kursi\n";
cout<<"B.meja\n";
cout<<"C.lemari\n";
cout<<"pilih opsi (A-C): ";cin>>pilih;
cout<<endl;
switch(pilih)
{
case 'A':
case 'a':
harga=1000000;
cout<<"Membeli:Kursi\n";
cout<<"harga satuan: Rp "<<harga<<endl;
break;

case 'B':
case 'b':
harga=2000000;
cout<<"Membeli:Meja\n";
cout<<"harga satuan: Rp "<<harga<<endl;
break;

case 'C':
case 'c':
harga=2500000;
cout<<"Membeli:Lemari\n";
cout<<"harga satuan: Rp "<<harga<<endl;
break;
}



cout<<"masukkan jumlah barang: ";cin>>jumlahbelanja;
totalbelanja=harga*jumlahbelanja;

if(totalbelanja>10000000)
{discount=(totalbelanja*20/100);}
else
{discount=0;}
totalbayar=totalbelanja-discount;

cout<<"total belanja: "<<totalbelanja<<endl;
cout<<"discount: "<<discount<<endl;
cout<<"total bayar: "<<totalbayar<<endl;
cout<<"bayar: ";cin>>bayar;
kembalian=bayar-totalbayar;
cout<<"kembalian: "<<kembalian<<endl;
getch();
}