#include "unit.h"
#include <ctime>
#include <cstdlib>

int main(){
	srand(time(0));
	unit* k;
	unit* d;
	k = new knight();
	d = new devil();

	k->speak();
	d->speak();
	k->Attack(*d);
	cout<<"The state of devil :"<<endl;
	d->printInfo();

}

