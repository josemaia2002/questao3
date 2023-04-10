#include <iostream>
#include <vector>
#include <string>
#include "Livro.h"

using namespace std;

Livro::Livro(){
    this->autor = " ";
    this->titulo = " ";
}

Livro::Livro(string autor, string titulo){
    this->autor = autor;
    this->titulo = titulo;
}

/*
Livro Livro::operator+(const Livro& param){
    Livro temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}
*/

string Livro::getAutor(){
    return this->autor;
}

void Livro::setAutor(string autor){
    this->autor = autor;
}


string Livro::getTitulo(){
    return this->titulo;
}

void Livro::setTitulo(string titulo){
    this->titulo = titulo;
}


vector<double> Livro::getNotas(){
    return this->notas;
}

void Livro::setNotas(double n){
    notas.push_back(n);
}