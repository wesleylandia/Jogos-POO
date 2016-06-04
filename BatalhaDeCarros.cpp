#include <iostream>//Coloca todas as defini��es de nomes (para nomes como cin e cout) no std namespace.
#include <ctime>//Inclui a biblioteca que usa o tempo atual como 'semente' do gerador
using namespace std; //Namespace. Define todas as fun��es da biblioteca padr�o.


void imprimir_espacos(int rodada);//Declarando a fun��o que imprime os espa�os.
int main()//Diz que main � uma fun��o sem par�metros que ao terminar sua execu��o retornar� um valor inteiro int.
{//Abrindo a fun��o principal.
	int total_espacos = 50;//Definindo a quantidade de espa�os at� a chegada.
	int espacos_a = 0;//Quantidade de espa�os que o carro A correu.
	int espacos_b = 0;//Quantidade de espa�os que o carro B correu.
	while (espacos_a < total_espacos && espacos_b < total_espacos)//Fun��o que vai sair do la�o ao chegar na chegada (redund�ncia)
	{//In�cio do la�o da corrida.
		system("cls");//Limpa a tela.
		cout << "*RACING XTREME*" << endl;//Imprimindo a apresenta��o do jogo.
		cout << "                                      Chegada:" << endl;//Imprmie o que est� entre aspas.

		srand((int)time(0));//Gerando 'semente' a partir do tempo.
		/*Parte do c�digo do carro A*/
		espacos_a = rand() % 3 + 1 + espacos_a;//Gera n�mero aleat�rio a parir do 1 at� 3 para o carro A andar nesta quantidade delimitada.
		imprimir_espacos(espacos_a);//Imprimindo os espa�os.
		cout << " _ " << endl;//Imprimindo parte do carro A.
		imprimir_espacos(espacos_a);//Imprimindo os espa�os.
		cout << "-o-o>" << endl;//Imprimindo outra parte do carro A.
		/*Parte do c�digo do carro B*/
		espacos_b = rand() % 3 + 1 + espacos_b;//Gera n�mero aleat�rio a parir do 1 at� 3 para o carro B andar nesta quantidade delimitada.
		imprimir_espacos(espacos_b);//Imprimindo os espa�os.
		cout << " _ " << endl;//Imprimindo uma parte do carro B.
		imprimir_espacos(espacos_b);//Imprimindo os espa�os.
		cout << "-o-o>" << endl;//Imprimido outra parte do carro B.
	}//Finalizando o la�o da corrida.
	if (espacos_a > espacos_b) cout << "Carro A venceu a corrida!" << endl;//Se o carro A vencer a corrida, entrar� nesta condi��o.
	else if (espacos_b > espacos_a) cout << "Carro B venceu a corrida!" << endl;//Se n�o, o carro B vencer� a corrida.
	else cout << "Empate!" << endl;//Se os dois chegarem ao mesmo tempo, dar� empate.
	return 0;//Este comando termina a invoca��o da fun��o main e fornece 0 como o valor da fun��o. O programa termina quando este comando � executado.
}//Finalizando a fun��o principal.

void imprimir_espacos(int rodada)//Fun��o que vai imprimir os espa�os.
{//Abrindo fun��o que imprime os espa�os.
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
	{//In�cio do la�o que imprime os espa�os.
		cout << " ";//Imprime o que est� entre aspas. Ou seja, os espa�os.
	}//Fechando o la�o que imprime os espa�os.
}//Fechando fun��o que imprime os espa�os.