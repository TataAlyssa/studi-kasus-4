#include <iostream>
#include <fstream>
#include "library/input.h"

#include "library/output.h"
#include "library/proses.h"

using namespace std;

int main(){
	Input input;
	input.cetak();
	input.tofile();


	Proses proses;
	proses.getData();
	proses.cetak();
	proses.toFile();

	
	Output output;
	output.getData();
	output.cetak();


	return 0;
}	
