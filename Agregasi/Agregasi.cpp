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

}
