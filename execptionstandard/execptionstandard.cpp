// execptionstandard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<exception>
#include<array>
using namespace std;

int main()
{
	cout << "awal program" << endl; // penanda 1
	try {
		array<int, 3> data = { 3,5,7 };
		//pesan array interger 3 elemen
		cout << data.at(5) << endl;
		// memanggil array elemen ke 5
	}
	catch (exception& e) {
		// penangkap mengunakan objek exception
		cout << e.what() << endl;
		/*akan diesekusi karna array data hanya memiliki 3 elemen*/
	}
	cout << "baris program yang terakhir " << endl;
	/*penanda2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan */

	return 0;

}

