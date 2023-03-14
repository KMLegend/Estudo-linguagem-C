#include <iostream>
#include <string>
using namespace std;

class Data {
private:
    //isso são os atributos: --> pode ser privados ou publicos. --> podem ter o metodo de GET(Adiquirir) ou SET(definir).
    int dia = 0;
    int mes = 0;
    int ano = 0;

public:
    //isso é um metodo:
    /*
    void insereValores(int Dia, int Mes , int Ano) {
        dia = Dia;
        mes = Mes;
        ano = Ano;
    }*/
    
    void setDia(int valor){

        if (dia < 1 || dia > 31){return;}
        dia = valor;
    }
    int getDia(){
        return dia;
    }
    void setMes(int valor){
        if (mes < 1 || mes > 12){return;}
        mes = valor;
    }

    int getMes(){
        return mes;
    }

    void setAno(int valor){
        ano = valor;
    }
    int getAno(){
        return ano;
    }

};


int main () {
    
    Data dt;
    dt.setDia(14);
    dt.setMes(3);
    dt.setAno(2023);

    cout << dt.getDia() << "/" << dt.getMes() << "/" << dt.getAno() << endl;
    //cout << dt.dia << "/" << dt.mes << "/" << dt.ano << endl; --> quando os atributos são publicos na public

    return 0;
}   







