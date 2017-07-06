/* Bambang Nurhidayat
* NIM. 16.111.176
* TIF RM 16C
* TUGAS UAS (06/07/2017)
* Main Program
*/

#include <iostream> //input & output stream
#include "ab.cpp"
#include "ary.cpp"
#include "Faktorial.cpp"
#include "main.cpp"
#include "pra1.cpp"
#include "pra2.cpp"
#include "pra3.cpp"
#include "Praktek1.cpp"
#include "Praktek2.cpp"
#include "Praktek3.cpp"
#include "tugas.cpp"


using namespace std;

int main(){
	int pil;
	
		cout<<"-----------------------------\n";
		cout<<"PROGRAM KOMPILASI APPLIKASI\n";
		cout<<"UAS ALGORITMA PEMROGRAMAN II\n";
		cout<<"Dosen : Frencius, MT.\n";
		cout<<"Nama  : Bambang Nurhidayat\n\n\n";
        cout<<"-----------------------------\n";
		cout<<"------------MENU-------------\n";
        cout<<"1. ab\n";
        cout<<"2. ary\n";
        cout<<"3. Faktorial\n";
        cout<<"4. main\n";
        cout<<"5. pra1\n";
        cout<<"6. pra2\n";
        cout<<"7. pra3\n";
        cout<<"8. Praktek1 \n";
        cout<<"9. Praktek2 (Penjumlahan)\n";
        cout<<"10. Praktek3 (dengan tabel)\n";
        cout<<"11. tugas\n";
    
    
    
        
        cout<<"\n"<<"Masukan Pilihan :";
		cin>>pil;
		
		if(cin.fail()){
			cin.clear(); cin.ignore(); main();
		} else {		
			//seleksi data
			if(pil == 1){ ab();}
			else if(pil == 2){ ary(); }
            else if(pil == 4){ Faktorial(); }
            else if(pil == 5){ ccd(); }
            else if(pil == 6){ pra1(); }
            else if(pil == 7){ pra2(); }
            else if(pil == 8){ pra3(); }
            else if(pil == 9){ Praktek1(); }
            else if(pil == 10){ Praktek2(); }
            else if(pil == 11){ Praktek3(); }
            else if(pil == 12){ tugas(); }
			else{
				//return main();
                cout<<"KESALAHAN INPUT, ULANGI!\n\n";
			}
		}		
	
}