#include <iostream>
using namespace std;

class Masina {
private:
	string* producatori;
	int nrRoti;
	string marca;
	float pret;
	static int TVA; //static apartine clasei
	const int anFabricatie; //const nu apare niciodata la stanga de egal
public:


	Masina() :anFabricatie(2024), nrRoti(4) {

		this->marca = "Dacia";
		this->pret = 5000;
		this->producatori = NULL;

	}
	Masina(int _nrRoti, string marca, float pret, int an) :anFabricatie(an) {
		this->nrRoti = _nrRoti;
		this->marca = marca;
		this->pret = pret;
		this->producatori = new string[this->nrRoti];
		for (int i = 0; i < this->nrRoti; i++)
		{
			this->producatori[i]="Michelin";
		}
	}
	Masina(const Masina& m): anFabricatie(m.anFabricatie){
		this->nrRoti = m.nrRoti;
		this->marca = m.marca;
		this->pret = m.pret;
		this->producatori = new string[m.nrRoti];
		for (int i = 0; i < m.nrRoti; i++) {
			this->producatori[i] = m.producatori[i];
		}
	}
	Masina operator = (const Masina& m) {
		this->nrRoti = m.nrRoti;
		this->marca = m.marca;
		this->pret = m.pret;
		if(this->producatori!= NULL){
			delete[]this->producatori;
		this->producatori = new string[m.nrRoti];
		for (int i = 0; i < m.nrRoti; i++) {
			this->producatori[i] = m.producatori[i];

	}
		return *this;
	
	~Masina() {
		if (this->producatori != NULL) {
			delete[]this->producatori;
		}
	}
	string getMarca() {
		return this->marca;
	}
	
	
	void setMarca(string marca) {
		if (marca.length() > 2) {
			this->marca = marca;
			}
	}
	float getPret() {
		return this->pret;
	}
	void setPret(float pret) {
		if (pret > 0) {
			this->pret = pret;
		}
	}
	string* getProducatori() {
		return this->producatori;
	}
	string getProducator(int index) {
		if (index >= 0 && index < this->nrRoti)
			return this->producatori[index];
		else {
			return "NU a fost gasit";
		}
	}
	void setNrRoti(int nrRoti, string* producatori) {
		if (nrRoti > 0) {
			this->nrRoti = nrRoti;
			if (this->producatori != NULL) {
				delete[]this->producatori;
			}
			this->producatori = new string[nrRoti];
			for (int i = 0; i < nrRoti; i++)
				this->producatori[i] = producatori[i];
		}

	}
	void afisare() {
		cout << "Marca:" << this->marca << endl;
		cout << "Pret:" << this->pret << endl;
		cout << "Nr roti:" << this->nrRoti << endl;
		cout << "TVA:" << this->TVA << endl;
		cout << "An de fabricatie:" << this->anFabricatie << endl;
		if (this->producatori !=NULL)
		for (int i = 0; i < this->nrRoti; i++){
			cout << this->producatori[i] << " , ";
	}
			cout << endl;


	}
	float calculeazaPretTotal() {
		return this->pret + (this->pret * (Masina::TVA / 100.0f));
	}

	static void modificaTVA(int noulTVA) {
		if (noulTVA > 0) {


			Masina::TVA = noulTVA;
		}

	}
	static float calculeazaPretTotalVector(int nrMasini, Masina* vector) {
		float pretTotal = 0;
		for (int i = 0; i < nrMasini; i++) {
			pretTotal += vector[i].calculeazaPretTotal();
		}
		return pretTotal;
	}


};
int Masina::TVA = 19;




int main() {
	Masina m;
	cout << m.getMarca() << endl;
	m.setMarca("Audi");
		cout << m.getMarca() << endl;
	m.afisare();

	Masina m2(4, "BMW", 45000,2021);
	m2.afisare();
	cout << endl << endl;
	cout << m2.getProducatori()[1];
	cout<< m2.getProducator(1);
	m2.setNrRoti(6, new string[6]{ "Michelin", "Continental" , "Pirell", "Bridgestone" "POO" "ttt" });
	cout << m2.getProducator(4);
	
	Masina m3(m2);
	Masina m4 = m2;
	cout << m4.getProducator(2);

	Masina m5;
	m5 = m2;
	m2 = m2;

	f(m4);

	return 0;
}

