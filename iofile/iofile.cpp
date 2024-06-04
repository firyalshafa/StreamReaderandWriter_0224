// iofile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    //membuka  file dalama mode menulis 
    ofstream outfile; 
    // menunjuk ke sebuah nama file 
    outfile.open("contohfile.txt");
   
    cout << ">= menulis file, \'q\' untuk keluar " << endl;

    // unlimited loop untuk menulis
    while (true) {
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda masukan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file 
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup
    outfile.close();

    // membuka file dalam mode baca 
    ifstream infile;
}

