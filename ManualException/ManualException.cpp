
#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "selamat belajar di prodi ti umy " << endl;
        throw 0.5; //melemparkan sebuah interger maka
        cout << "pernytaan tidak akan di esekusi" << endl;
    }
    catch (int a) {
        // blok ini akan di esekusi 
        cout << " pengecualian akan di esekusi " << endl;
    }
    catch (...){
        /*jika selain interger maka blok ini akan di esekusi */
        cout << "default pengeculian diexsekusi" << endl;
    }
    return 0;
}

