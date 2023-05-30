#include <iostream>
#include <stack>
#include <vector>
#include <fstream>
using namespace std;


class Toy {
private:
	string Manufactor;
	int model, fAge, lAge;
public:
	Toy () {
		Manufactor = "Not initialized";
		model = 0;
		fAge = 0;
		lAge = 0;
	}
	Toy(string Manufactor, int model, int fAge, int lAge) {
		this->Manufactor = Manufactor;
		this->model = model;
		this->fAge = fAge;
		this->lAge = lAge;
	}
	
	string GetManu(){
		return Manufactor;
	}
	int GetModel(){
		return model;
	}
	int GetfAge() {
		return fAge;
	}
	int GetlAge() {
		return lAge;
	}
	int SetAge(int fAge, int lAge) {
		this->fAge = fAge;
		this->lAge = lAge;
	}
	string SetManufactor(string Manufactor) {
		this->Manufactor = Manufactor;
	}
	int SetModel(int model) {
		this->model = model;
	}
	bool operator <(Toy a) {
		if (Manufactor < a.GetManu) {
			return true;
		}
		else if (model < a.GetModel) {
			return true;
		}
		return false;
	}
	bool operator >(Toy a) {
		if (Manufactor > a.GetManu) {
			return true;
		}
		else if (model > a.GetModel) {
			return true;
		}
		return false;
	}
	bool operator ==(Toy a) {
		if (Manufactor == a.GetManu) {
			return true;
		}
		else if (model == a.GetModel) {
			return true;
		}
		return false;
	}
};

int main() {
	Toy Toy1, Toy2;
	Toy1.SetManufactor("Lego");
	Toy1.SetModel(111111);
	Toy1.SetAge(0, 15);
	Toy2.SetManufactor("Hasbro");
	Toy2.SetModel(123456);
	Toy2.SetAge(14,18);
	cout << "Toy1 = Toy2?" << (Toy1 == Toy2)<<endl;
}
