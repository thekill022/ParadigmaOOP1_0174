#include <iostream>
using namespace std;

//deklarasi class mahasiswa
class Mahasiswa {
    //membuat member class private
    private:
        const int id;
        string nama;
        float nilai;

    //membuat member class public
    public:
        //membuat member initialization list dari class mahasiswa
        Mahasiswa(int pId, string pNama, float pNilai) : nama(pNama), nilai(pNilai), id(pId) {

        };
};

int main()
{
    
}