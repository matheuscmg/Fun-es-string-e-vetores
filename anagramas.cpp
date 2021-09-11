#include <iostream>
#include <locale.h>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>

using namespace std;

void cabecalho (){
	cout<<"\n--------------------------------------------------------";
	cout<<"\nPontificia Universidade Catolica de Campinas\n";
	cout<<"\nCurso de Engenharia de Software";
	cout<<"\nDisciplina: Liguagem Algoritmica de Programação (LAP)\n";
	cout<<"\nMatheus das Neves Camargo";
	cout<<"\n--------------------------------------------------------";
	cout<<"\nTrabalho Final\n";
	cout<<"Programa que faz um jogo de anagramas";
	cout<<"\n--------------------------------------------------------\n\n";
}

void imprime_letras (char letras[]){
	int i;
	cout<<"                        LETRAS                    \n";
	cout <<"*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
	cout <<"*";
	for (i=0; i<12; i++){
		cout<<" "<<letras[i];
		cout<<"  ";
	}
	cout <<"*";
	cout <<"\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
	cout<<"\n\n";
}

int main()
{
	setlocale (LC_ALL,"");

	char letras []={'O','N','C','C','E','N','M','T','H','O','E','I'};
	char palavra[13];
	int i, j, k, tam,validar=0,n,res,erro=100,erro2,cont=0;
	char bancopalavras[20][13]={"CONHECIMENTO","CIMENTO","CINTO","NETO","OI","MENTE","CONTO","CEM","TOCO","CENTO","MEIO","TEM"};
	char bancoacertos[20][40]={"____________","_______","_____","____","__","_____","_____","___","____","_____","____","___"};


	while(validar!=12){
		cabecalho();

		cout<<"JOGO DE ANAGRAMAS\n";
		cout<<"Forme o maior número possível de palavras usando as letras disponíveis.\n";
		cout<<"--------------------------------------------------------------------------\n\n";

        imprime_letras(letras);
    for(i=0;i<6;i++){
    cout<<bancoacertos[i]<<"   ";}
    cout<<endl;
    for(i=6;i<12;i++){
    cout<<bancoacertos[i]<<"   ";}
    cout<<endl<<endl<<endl;
		if(erro==0){
			cout<<"Você errou, tente novamente\n";
		}
		if(erro==1){
			cout<<"Você acertou!\n";
		}
		if(erro==2){

			cout<<"Você já digitou esta palavra. Tente outra!\n";
		}

		cout<<"\n\nDigite uma palavra: ";
		cin>>palavra;

		erro=0;
		cont=0;

		for(i=0;i<12;i++){
			for(k=0;k<20;k++){
				palavra[k] = toupper (palavra[k]);
				res=strcmp(palavra,bancopalavras[i]);
			}
			if(res==0){

				if(strcmp(bancopalavras[i],bancoacertos[i])==0){
					erro=2;
				}else{
					strcpy(bancoacertos[i],bancopalavras[i]);
					erro=1;
					validar++;
				}
			}
		}
		system("cls");
	}
	cout << "\n\n\n" ;
system("color fa");
cout<<"########:::::'###::::'########:::::'###::::'########::'########:'##::: ##::'######::'####:"<<endl;
cout<<"##.... ##:::'## ##::: ##.... ##:::'## ##::: ##.... ##: ##.....:: ###:: ##:'##... ##: ####:"<<endl;
cout<<"##:::: ##::'##:. ##:: ##:::: ##::'##:. ##:: ##:::: ##: ##::::::: ####: ##: ##:::..:: ####:"<<endl;
cout<<"########::'##:::. ##: ########::'##:::. ##: ########:: ######::: ## ## ##:. ######::: ##::"<<endl;
cout<<"##.....::: #########: ##.. ##::: #########: ##.... ##: ##...:::: ##. ####::..... ##::..:::"<<endl;
cout<<"##:::::::: ##.... ##: ##::. ##:: ##.... ##: ##:::: ##: ##::::::: ##:. ###:'##::: ##:'####:"<<endl;
cout<<"##:::::::: ##:::: ##: ##:::. ##: ##:::: ##: ########:: ########: ##::. ##:. ######:: ####:"<<endl;
cout<<"..:::::::::..:::::..::..:::::..::..:::::..::........:::........::..::::..:::......:::....::"<<endl;
cout<<endl<<endl;
cout << "\n\n\n\n\n\n\n\n\n" ;

	return 0;
}