#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define pausa system("pause")
#define limpa system("cls")
using namespace std;

void menu();
void jogo();
int forca(int vidas);
void leiaAntes();

int main(){
	SetConsoleTitle("JOGO DA FORCA");
	while(1){
		menu(); //MENU
		int opcao;
		cout << "OPCAO -> ";
		cin >> opcao;
		if(opcao == 1){
			limpa;
			jogo();
			pausa;
			limpa;
		}
		if(opcao == 2){
			limpa;
			leiaAntes();
			pausa;
			limpa;
		}
		if(opcao == 3){
			break;
		}		
	}
}

void menu(){
	system("color 0A");
	cout << endl;
	cout << "      *********     *****     *********     *****         " << endl; Sleep(300);
	cout << "      *********   *********   *********   *********       " << endl; Sleep(300);
	cout << "         ***      ***   ***   ***         ***   ***       " << endl; Sleep(300); 
	cout << "         ***      ***   ***   ***  ****   ***   ***       " << endl; Sleep(300);
	cout << "      ** ***      ***   ***   ***   ***   ***   ***       " << endl; Sleep(300);
	cout << "      ******      *********   *********   *********       " << endl; Sleep(300);
	cout << "      ******        *****     *********     *****         " << endl; Sleep(300);
	cout << endl;
	cout << "\t\t\t\t 1 - INICIR JOGO" << endl;
	cout << "\t\t\t\t 2 - LEIA ANTES " << endl;
	cout << "\t\t\t\t 3 - SAIR " << endl;
	cout << endl << endl;
}

void jogo(){ // LOGIGA DO JOGO
	char nomeCarrasco[10], nomeVitima[10], carrasco[30], mesa[30], letra;
	string vitima;
	int vidaVitima = 0, auxVida;
	for(int i = 0; i < 30; i++){
		carrasco[i] = NULL;
		mesa[i] = NULL;
	}	
	fflush(stdin);
	cout << "NOME DO CARRASCO -> ";
	gets(nomeCarrasco);
	cout << "NOME DA VITIMA -> ";
	gets(nomeVitima);
	limpa;
	cout << "(CARRASCO) " << nomeCarrasco << " escreva a Palavra / Frase -> ";
	gets(carrasco);
	for(int i = 0; carrasco[i] != '\0'; i++){
		if(carrasco[i] == ' '){
			mesa[i] = ' ';
		}else{
			mesa[i] = '_';
		}
	}
	limpa;
	while(1){
		auxVida = 0;
		cout << "LETRAS -> " << vitima << endl << endl; 
		forca(vidaVitima);
		if(vidaVitima == 5){
			cout << "A PALAVRA ERA -> " << carrasco << endl << endl;
			break;
		}
		cout << "\t\t\t\t\t" << mesa << endl << endl << endl;
		cout << "Letra -> ";
		cin >> letra;
		vitima = (vitima + letra);
		for(int i = 0; carrasco[i] != '\0'; i++){
			if(letra == carrasco[i]){
				mesa[i] = letra;
				auxVida++;
			}
		}
		if(auxVida == 0){
			vidaVitima++;
		}
		limpa;
		if(!strcmp(mesa, carrasco)){
			cout << "PARABENS " << nomeVitima << " VOCE GANHOU!!" << endl << endl;
			cout << "PALAVRA -> " << carrasco << endl << endl;
			break;
		}		
	}
}

int forca(int vidas){ // FORCA -> FUNCAO QUE ESTA SENDO CHAMADA DENTRO DA LOGICA DO JOGO
	if (vidas == 0){
		cout << "     ----------    "  << endl;
		cout << "    |        __|__ "  << endl;
		cout << "    |              "  << endl;
		cout << "    |              "  << endl;
		cout << "    |              "  << endl;
		cout << "    |              "  << endl;
		cout << "    |              "  << endl;
		cout << " ___|___           "  << endl;
		cout << endl;
		    
	}else{
		if(vidas == 1){
			cout << "     ----------    "  << endl;
			cout << "    |        __|__ "  << endl;
			cout << "    |          O   "  << endl;
			cout << "    |              "  << endl;
			cout << "    |              "  << endl;
			cout << "    |              "  << endl;
			cout << "    |              "  << endl;
			cout << " ___|___           "  << endl;			
			cout << endl;
		}else{
			if(vidas == 2){
				cout << "     ----------    "  << endl;
				cout << "    |        __|__ "  << endl;
				cout << "    |          O   "  << endl;
				cout << "    |         /|   "  << endl;
				cout << "    |              "  << endl;
				cout << "    |              "  << endl;
				cout << "    |              "  << endl;
				cout << " ___|___           "  << endl;					
			    cout << endl;
			}else{
				if(vidas == 3){
					cout << "     ----------    "  << endl;
					cout << "    |        __|__ "  << endl;
					cout << "    |          O   "  << endl;
					cout << "    |         /|\\ "  << endl;
					cout << "    |              "  << endl;
					cout << "    |              "  << endl;
					cout << "    |              "  << endl;
					cout << " ___|___           "  << endl;
					cout << endl;				
				}else{
					if(vidas == 4){
						cout << "     ----------    "  << endl;
						cout << "    |        __|__ "  << endl;
						cout << "    |          O   "  << endl;
						cout << "    |         /|\\ "  << endl;
						cout << "    |          |   "  << endl;
						cout << "    |         /    "  << endl;
						cout << "    |              "  << endl;
						cout << " ___|___           "  << endl;
						cout << endl;									
					}else{
						if(vidas == 5){
	                        cout << "     ----------    "  << endl;
							cout << "    |        __|__ "  << endl;
							cout << "    |          O   "  << endl;
							cout << "    |         /|\\ "  << endl;
							cout << "    |          |   "  << endl;
							cout << "    |         / \\ "  << endl;
							cout << "    |              "  << endl;
							cout << " ___|___           "  << endl;
							cout << endl << endl << endl;
							cout << "QUE PENA, MAS VOCE PERDEU!!!" << endl << endl;														
						}
					}
				}
			}
		}
	}	
}

void leiaAntes(){
	cout << "\t\t\t INSTRUCOES DO JOGO DA FORCA" << endl << endl;
	cout << "* A PALAVRA / FRASE QUE O CARRASCO ESCOLHER DEVE SOMENTE CONTER LETRAS" << endl << "MINUSCULAS." << endl << endl;
	cout << "* O NOME DOS JOGADORES PODE CONTER LETRAS MAIUSCULAS / MINUSCULAS." << endl << endl;
	cout << "* NUMERO MAXIMO DE VIDAS = 5" << endl << endl;
	cout << "* LETRAS ERRADAS REPTIDAS SERAO CONSIDERADAS COMO ERRO." << endl << endl;
	cout << "* LETRAS CORRETAS REPETIDAS NAO SERAO CONSIDERADAS PELO PROGRAMA." << endl << endl;	
}

/*
	EXPLICAÇÃO VARIAVEIS:
	nomeCarrasco -> nome da pessoa que vai escolher a palavra / frase.
	nomeVitima -> nome da pessoa que vai tentar adivinhar a palavra / frase.
	carrasco -> variavel que  vai armazenar a palavra / frase.
	vitimas -> variavel que vai mostrar as letras ja faladas pela vitima
	mesa -> variavel que mostra as letras ja descobertas pela vitima.
	vidaVitima -> variavel que conta a quantidade de vidas...quando for iagual a 5, acaba o jogo
	auxVida -> variavel que verifica se tem alguma letra errada digitada pela vitima...se tiver ela permite a entrada eu mu if() que irá fazer a variavel vidaVitima++
*/