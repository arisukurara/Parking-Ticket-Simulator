#include "ParkedCar.h"

ParkedCar::ParkedCar(string mk, string ml, string co, string ln, int mn) {
	make = mk;
	model = ml;
	color = co;
	licenseNumber = ln;
	minutesParked = mn;
}

string ParkedCar::getMake() const {
	return make;
}
string ParkedCar::getModel() const {
	return model;
}
string ParkedCar::getColor() const {
	return color;
}
string ParkedCar::getLicenseNumber() const {
	return licenseNumber;
}
int ParkedCar::getMinutesParked() const {
	return minutesParked;
}