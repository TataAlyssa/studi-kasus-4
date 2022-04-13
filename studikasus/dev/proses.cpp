#include <iostream>
#include <fstream>
#include "../library/proses.h"

int main(){
	Proses proses;
	proses.getData();
	proses.cetak();
	proses.toFile();
	return 0;
}
