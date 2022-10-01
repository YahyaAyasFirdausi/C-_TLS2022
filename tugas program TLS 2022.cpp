#include <iostream>

using namespace std;

int main()
{
    char nama[10];
    double nilai_tugas, nilai_uts, nilai_uas, hasilakhir;
    
    cout<<"Enter name : ";
    cin>>nama;
    cout<<"\nInput nilai tugas : ";
    cin>>nilai_tugas;
    nilai_tugas=nilai_tugas*0.01*10;
    cout<<"\nInput nilai UTS : ";
    cin>>nilai_uts;
    nilai_uts=nilai_uts*0.01*40;
    cout<<"\nInput nilai UAS : ";
    cin>>nilai_uas;
    nilai_uas=nilai_uas*0.01*50;
    
    hasilakhir=nilai_tugas+nilai_uts+nilai_uas;
    
    if(hasilakhir < 50){
        cout<<"Mahasiswa bernama "<<nama<<" mendapat nilai E";
    }
    else if(hasilakhir < 60){
        cout<<"Mahasiswa bernama "<<nama<<" mendapat nilai D";
    }
    else if(hasilakhir < 70){
        cout<<"Mahasiswa bernama "<<nama<<" mendapat nilai C";
    }
    else if(hasilakhir < 80){
        cout<<"Mahasiswa bernama "<<nama<<" mendapat nilai B";
    }
    else{
        cout<<"Mahasiswa bernama "<<nama<<" mendapat nilai A";
    }

    return 0;
}
