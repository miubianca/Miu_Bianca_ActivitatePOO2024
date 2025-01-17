#include <iostream>
#include <fstream>
using namespace std;
#include <map>
#include<list>
class Cofetarie {
protected:
	string denumire;
    string nume;
	
public:
	Cofetarie() {
		this->denumire = "Cofetarie";
	}
		Cofetarie(string nume) {
			this->nume = nume;
		}
	virtual string getDenumire() {
		return denumire;
	}
};

class CofetarieOnline :public Cofetarie {
	string sufix;
public:
	CofetarieOnline(string denumire, string sufix) :Cofetarie(denumire) {
		this->sufix = sufix;

	}
	string getDenumire() {
		return denumire +" " + sufix;
	}
};

int main() {

	map<int, float> valori;
	valori.insert(pair<int, float>(7, 75.8));
	valori.insert(pair<int, float>(23, 102.6));
	valori.insert(pair<int, float>(3, 32.6));
	//valori.insert(pair<int, float>(23, 23));//nu va insera 23(cheile sunt unice!!!)

	valori[12] = 45.5;


	cout << valori[12] << endl;

	map<int, float>::iterator it;
	it = valori.begin();


	while (it != valori.end()) {
		cout << it->first << "=>" << it->second << endl;
		it++;
	}

	list<Cofetarie*> cofetarii;
	list<Cofetarie*>pcofetarii;

	pcofetarii.push_back(new Cofetarie("Ana Pann"));
	pcofetarii.push_back(new CofetarieOnline("Delicii ", "Dorobanti"));
	pcofetarii.push_front(new Cofetarie("Dulcinella"));
}

 for(list<Cofetarie*>::iterator i = pcofetarii.begin(); i != cofetarii.end(); i++) {
	cout << (*i)->getDenumire;




		return 0;

	
	}


    
    
    















	

	






