#include <iostream>

using namespace std;

// Clasa Frigider
class Frigider {
public:
    int capacitate;
    string marca;
    float* temperaturaCurenta;
    const bool noFrost;
    static int numarFrigidere;

    // Constructori
    Frigider() : noFrost(true), capacitate(300) {
        marca = "ARCTIC";
        temperaturaCurenta = new float(-18.0f);
        numarFrigidere++;
    }
    Frigider(int capacitate, string marca) : noFrost(false), capacitate(capacitate) {
        this->marca = marca;
        temperaturaCurenta = new float(-17.0f);
        numarFrigidere++;
    }
    Frigider(int capacitate, string marca, bool noFrost, float temperatura) : noFrost(noFrost), capacitate(capacitate) {
        this->marca = marca;
        temperaturaCurenta = new float(temperatura);
        numarFrigidere++;
    }


    static int getNumarFrigidere() {
        return numarFrigidere;
    }

    void afisare() const {
        cout << "Marca: " << marca << ", Capacitate: " << capacitate << " litri, NoFrost: " << noFrost
            << ", Temperatura: " << *temperaturaCurenta << "°C\n";
    }
    ~Frigider() {
        delete temperaturaCurenta;
    }
};

int Frigider::numarFrigidere = 0;

class Cuptor {
public:
    string marca;
        float* temperaturaCurenta;
        int putere;
        bool areGrill;
        static int nrCuptoare;

        

        Cuptor() : areGrill(false), putere(1000) {
            marca = "Samsung";
            temperaturaCurenta = new float(100.0f);
            nrCuptoare++;
    }
        Cuptor(int putere, string marca) : areGrill(true), putere(putere) {
            this->marca = marca;
            temperaturaCurenta = new float(90.0f);
            nrCuptoare++;
        }
        Cuptor(int putere, string marca, bool areGrill, float temperatura) : areGrill(areGrill), putere(putere) {
            this->marca = marca;
            temperaturaCurenta = new float(temperatura);
            nrCuptoare++;
        }
        static int getNrCuptaore() {
            return nrCuptoare;
        }

        void afisare() const {

            cout << "Marca: " << marca << ", Putere: " << putere << " W, Grill: " << areGrill
                << ", Temperatura: " << *temperaturaCurenta << "°C\n";

        }
        ~Cuptor() {
            delete temperaturaCurenta;

        }
       
};
int Cuptor::nrCuptoare = 0;

class MasinaDeSpalat {
public:
    int capacitate;
    string marca;
    float* temperaturaCurenta;
    const bool areUscator;
    static int numarMasini;

    MasinaDeSpalat() : capacitate(200), areUscator(true)
    {
        marca = "Samsung";
        temperaturaCurenta = new float(40);
        numarMasini++;
    }
    MasinaDeSpalat(int capacitate, string marca) : capacitate(capacitate), areUscator(true) {
        this->marca = marca;
        temperaturaCurenta = new float(50);
        numarMasini++;

    }

    MasinaDeSpalat(int capacitate, string marca, float temperatura, bool areUscator) : capacitate(capacitate), marca(marca),  areUscator(areUscator) {
        this->marca = marca;
        temperaturaCurenta = new float(temperatura);
        numarMasini++;
    }

    static int getNumarMasini() {
        return numarMasini;
    }
    void afisare()const {
        cout << "Marca: " << marca << ", Capacitate: " << capacitate << ", Are Uscator: " << areUscator << ", TemperaturaCurenta: " << *temperaturaCurenta;
    }
    ~MasinaDeSpalat() {
        delete temperaturaCurenta;
    }
    
};
int MasinaDeSpalat::numarMasini = 0;
int main() {
    Frigider f1;
    Frigider f2(300, "Whirpool");
    Frigider f3(400, "Samsung", true, -20);
    f1.afisare();
    f2.afisare();
    f3.afisare();
    cout << "Numar frigidere create: " << Frigider::getNumarFrigidere() << endl;

    Cuptor c1;
    Cuptor c2(800, "LG");
    Cuptor c3(900, "Whirpool", false, 700);
    c1.afisare();
    c2.afisare();
    c3.afisare();
    cout << "Numar cuptoare create: " << Cuptor::getNrCuptaore() << endl;

    MasinaDeSpalat m1;
    MasinaDeSpalat m2(300, "jojo");
    MasinaDeSpalat m3(300, "Allview", 30, false);
    m1.afisare();
    m2.afisare();
    m3.afisare();
    cout << "Numar de masini de spalat create: " << MasinaDeSpalat::getNumarMasini() << endl;


    return 0;
}
 

    

