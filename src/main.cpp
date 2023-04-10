#include <iostream>
#include <string>
#include <vector>
#include "Livro.h"

using namespace std;

// Operator overloading function
ostream &operator<<(ostream &os, const vector<double>& v) { 
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]\n";
    return os;           
}

double mediaLivro(Livro& l){
    double media, soma = 0;
    vector<double> temp;
    temp = l.getNotas();

    for(int i = 0; i < temp.size(); i++){
        soma += temp[i];
    }

    media = soma / temp.size();

    return media;
}


double mediaGeral(vector<Livro>& v){
    double media, soma = 0;

    for(int i = 0; i < v.size(); i++){
        soma += mediaLivro(v[i]);
    }

    media = soma / v.size();

    return media;
}


int main(){    
    Livro l1, l2, l3, l4;
    vector<Livro> estante;

    l1.setAutor("Karl Marx");
    l1.setTitulo("O Capital");

    l2.setAutor("Bram Stoker");
    l2.setTitulo("Dracula");

    l3.setAutor("Homero");
    l3.setTitulo("Iliada");

    l4.setAutor("Homero");
    l4.setTitulo("Odisseia");

    cout << l1.getAutor() << ", " << l1.getTitulo() << endl;
    cout << l2.getAutor() << ", " << l2.getTitulo() << endl;
    cout << l3.getAutor() << ", " << l3.getTitulo() << endl;
    cout << l4.getAutor() << ", " << l4.getTitulo() << endl;

    l1.setNotas(8.9);
    l1.setNotas(9.6);
    l1.setNotas(7.9);
    l1.setNotas(8.3);

    l2.setNotas(8.6);
    l2.setNotas(9.2);


    l3.setNotas(7.6);
    l3.setNotas(9.1);

    l4.setNotas(8.4);
    l4.setNotas(8.2);

    estante.push_back(l1);
    estante.push_back(l2);
    estante.push_back(l3);
    estante.push_back(l4);

    cout << estante[0].getNotas() << endl;
    cout << estante[1].getNotas() << endl;
    cout << estante[2].getNotas() << endl;
    cout << estante[3].getNotas() << endl;

    cout << mediaLivro(l1) << endl;
    cout << mediaGeral(estante) << endl;

    return 0;
}