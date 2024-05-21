#include <iostream>
#include <vector>
using namespace std;

//penyertaan file header ibu.h dan anak.h
#include "ibu.h"
#include "anak.h"

int main()
{
    
	//deklarasi dan pemberian nilai variabel pointer untuk objek dari class ibu dan anak
	Ibu* varIbu = new Ibu("dini");
	Ibu* varIbu2 = new Ibu("novi");
	anak* varAnak1 = new anak("tono");
	anak* varAnak2 = new anak("rini");
	anak* varAnak3 = new anak("Dewi");

	//pemanggilan dan pemberian argument pada prosedur tambahAnak()
	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);

	//pemanggilan prosedur cetakAnak()
	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	return 0;
}
