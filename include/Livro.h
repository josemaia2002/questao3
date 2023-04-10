#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef LIVRO_H
#define LIVRO_H

class Livro{
private:
    string autor, titulo;
    vector<double> notas;
public:
    Livro();
    Livro(string autor, string titulo);
    Livro operator+(const Livro& param);
    //friend ostream &operator<<(ostream &output, const vector<double>& v);

    string getAutor();
    void setAutor(string autor);

    string getTitulo();
    void setTitulo(string titulo);

    vector<double> getNotas();
    void setNotas(double n);
};

#endif