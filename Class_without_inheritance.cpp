#include <iostream>
#include <string>
using namespace std;
class Toy {
private:
	string producer;
	string model;
	int first_age, second_age;
public:
	Toy(string producer, string model, int first_age, int second_age) {
		this->producer = producer;
		this->model = model;
		this->first_age = first_age;
		this->second_age = second_age;
	}
	void set_age_range(int first_age, int second_age) {
		this->first_age = first_age;
	}
};
