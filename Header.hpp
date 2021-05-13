
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <fstream>
#include <chrono>
#include <deque>
#include <list>

using namespace std;
using namespace chrono;

class Studentas{
    private:
        string vardas, pavarde;
        int final;

    public: 
        void setVardas(string _vardas, string _pavarde){
            vardas = _vardas;
            pavarde = _pavarde;
        }

        void setfinal(int _final){
            final = _final;
        }

        string getVardas() const {
            return vardas;
        }

        string getPavarde() const {
            return pavarde;
        }

        int getFinal() const {
            return final;
        }

        Studentas(){}
        Studentas (string _vardas, string _pavarde, int _final) : vardas(_vardas), pavarde(_pavarde), final(_final){}
        Studentas (const Studentas& a) : vardas(a.getVardas()), pavarde(a.getPavarde()), final(a.getFinal()){}        // Kopijavimo konstruktorius

        Studentas& operator=(const Studentas& a){     // Priskyrimo operatorius
            if(&a == this) 
                return *this;
            vardas = a.getVardas();
            pavarde = a.getPavarde();
            final = a.getFinal();   
            return *this;
        }

        ~Studentas(){}       // Destruktorius

        bool operator<(Studentas a){
            return vardas < a.vardas;
        }

        bool operator>(Studentas a){
            return vardas > a.vardas;
        }
};


template <typename P>
void Startas(P&, P&, P&, double []);

template <typename P>
void IvedimasRanka(P&);

template <typename P>
void Rusiavimas(P&, P&, P& , double []);

template <typename P>
void Rusiavimas2(P&, P&, double []);

template <typename P>
void Isvedimas(P&, P&, P&, double []);

template <typename P>
bool IvedimasIsFailo(P&, double []);

void fromMain(double [], char tip);
double Vidurkis(vector<int>&);
bool IvestisYN(string);
int IvestisND(string, bool check0to10 = true);
void generavimas(double []);
bool DaugiauNei4(int);