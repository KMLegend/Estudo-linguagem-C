#include <iostream>
#include <string>
using namespace std;


//Numero 01:
class Data{
public:
    int dia;
    int mes;
    int ano;
};

//Numero 02:
class Data{
private:
    int mes;
public:
    int dia;
    int ano;
};

//Numero 03:
class Cliente{
public:
    string nome;
    string endereco;
    int idade;
    int rg;
    long telefone;
};

//Numero 04:

class Cliente{
private:
    string nome;
    string endereco;
    int idade;
    int rg;
    long telefone;
public:
    void setNome(string valor){
        nome = valor;
    }
    string getNome(){
        return nome;
    }

    string getEndereco(){
        return endereco;
    }
    void setEndereco(string valor){
        endereco = valor;
    }

    int getIdade(){
        return idade;
    }
    void setIdade(int valor){
        idade = valor;
    }

    int getRg(){
        return rg;
    }
    void setIdade(int valor ){
        rg = valor;
    }

    long getTelefone(){
        return telefone;
    }
    void setTelefone(long valor){
        telefone = valor;
    }
};