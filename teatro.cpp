#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL,"portuguese");


    int mapalugares[10][20]= {0};
    int i,j,assentos,linha;
    char fila,k,nome[50],faca;


    do {
        cout <<"                              SALA DO TEATRO \n";
        cout << "                     (Lugares com numero 1:ocupados 0:livres)\n";
        cout <<"-------------------------------------------------------------------------------------" <<endl;

        for(i=0, k=65; i < 10, k <=74; i++, k++) {
            cout << k <<  " ";
            for(j=0; j < 20; j++) {
                cout<<setw(4)<<mapalugares[i][j];
            }
            cout <<endl;
        }
        cout <<"\n";
        cout << "     1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20\n\n";

        cout <<"\-----------------------------------------------------------------------------------\n\n";
        do {
            cout << "\n  Escolha uma fileira que deseja ficar de A - J ... : ";
            cin >> fila;
            fila = toupper(fila);
            linha = fila - 65 ;
        } while(fila < 65 || fila > 75 );
        do {
            cout << "  Escolha o assento desejado da fileria "<<fila<<" de 1 - 20 : ";
            cin >> assentos;
            cout <<"\n";
        } while(assentos < 1 || assentos > 20);

        if(mapalugares[linha][assentos-1]==0) {
            mapalugares[linha][assentos-1]++;
            cout << " O ingresso reservado em nome de : ";
            cin.ignore();
            cin.getline(nome, 50);
            cout << " Sua reserva foi feita, aguarde o seu horario ! \n\n";
            cout << "====================================================================\n";
            cout << " Lugar reservado em nome de : "<<nome<<"\n";
            cout << "====================================================================\n\n";
            cout << " Nome da peça ...: Os melhores do mundo \n ";
            cout << "Horario da peça : 18h - 19h \n";
            cout << " Lugar reservado :  "<<"Fileira "<<fila<<" assento "<<assentos<<"\n";
            cout << " Deseja reservar mais algum lugar ? 's/n' : ";
            cin >> faca;
            faca = toupper(faca);
        } else {
            cout << "O lugar escolhido ja está ocupado,escolha outro lugar ! \n ";
        }
    } while(faca != 'N');

    return 0;
}