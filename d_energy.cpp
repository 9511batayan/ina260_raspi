#include "ina260.h"
#include <iostream>
using namespace ina260;
using namespace std;
int main(void){
	Ina260 em = Ina260(0x42);
	double mvol = em.readVoltage_mV();
	cout<<mvol<<"[mV]"<<endl;
	cout<<mvol*0.001<<"[V]"<<endl;
	double mamp = em.readCurrent_mA();
	cout<<mamp<<"[mA]"<<endl;
	cout<<mamp*0.001<<"[A]"<<endl;
	cout<<em.readPower_mW()<<"[mW]"<<endl;
	
	return 0;
}


