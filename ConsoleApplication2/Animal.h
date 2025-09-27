#include<iostream>
using namespace std;


namespace Animal {
	class AnimalBase {
	public:
		Animal(string name);
		string GetInfo() {
			return this->name;
		
		}
		protected:
			string name;
	};
}
