#include <iostream>
using namespace std;
class Mobil
{
public:
    string nama_mobil;
    string tipe_mobil;

private:
    int harga_mobil;

public:
    void input_data()
    {
        cout << "Masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "Masukkan tipe mobil: ";
        cin >> tipe_mobil;
        cout << "Masukkan harga mobil: ";
        cin >> harga_mobil;
    }
    void output_data()
    {
        cout << "harga mobil = " << harga_mobil << endl;
    }
};

int main()
{
    Mobil GTR;
    GTR.input_data();
    cout << "nama mobil = " << GTR.nama_mobil << endl;
    cout << "tipe mobil = " << GTR.tipe_mobil << endl;
    GTR.output_data();
}