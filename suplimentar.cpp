#include <iostream>
using namespace std;

class Telefon {
private:
	string marca;
	int* capacitateStocare;
	bool areRecunoastereFaciala;
	const int anFabricatie;
	static float TVA;
	int pret;

public:
	Telefon() : anFabricatie(2024) {
		this->marca = "Apple";
		this->areRecunoastereFaciala = true;
		this->TVA = 20;
		this->pret = 4000;
		this->capacitateStocare = new int(128);
	}
	Telefon(string marca, int pret, bool faciala, int an) : anFabricatie(an) {
		this->marca = marca;
		this->areRecunoastereFaciala = faciala;
		this->TVA = TVA;
		this->capacitateStocare = new int[anFabricatie];
		for (int i = 0; i < 1;  i++) {
			this->capacitateStocare[i] = 2 * anFabricatie;
		}
		this->pret = pret;
	}
	Telefon(const Telefon& t) : anFabricatie(t.anFabricatie) {
		this->marca = t.marca;
		this->areRecunoastereFaciala = t.areRecunoastereFaciala;
		this->TVA = t.TVA;
		this->capacitateStocare = new int[t.anFabricatie];
		for (int i = 0; i < 1; i++) {
			this->capacitateStocare[i] = t.capacitateStocare[i];
		}
		this->pret = t.pret;
	}
	~Telefon() {
		if (this->capacitateStocare != NULL) {
			delete[]this->capacitateStocare;

		}
	}
		string getMarca(){
			return this->marca;
		}
		void setMarca(string marca) {
			if (marca.length() > 2) {
				this->marca = marca;
			}
		}
		

		void afisare() {
			cout << "Marca: " << this->marca << endl;
			if (this->capacitateStocare != NULL) {

			
				for (int i = 0; i < 1; i++) {
					cout << this->capacitateStocare[i] << endl;
				}

				

			}
			
			cout << "Pret: " << this->pret << endl;
			cout << "Are recunoastere faciala: " << (this->areRecunoastereFaciala ? "DA":"NU") << endl;
			
			cout << "An fabricatie: " << this->anFabricatie << endl;

		}


};
float Telefon::TVA = 20;
int main() {
	Telefon t1;
	t1.afisare();

	Telefon t2("Samsung", 2000, true, 2023);
	t2.setMarca("Allview");
	
	t2.afisare();
	return 0;

 }