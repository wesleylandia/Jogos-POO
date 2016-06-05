

// C�digo do jogo "Corrida de caminhoes"
// as tr�s linhas abaixo servem para adicionar uma biblioteca 
#include <iostream>
#include <string>
#include <ctime>

using namespace  std;
// identifica a fun�ao 
void imprimir_espacos(int total);
int main(int argc, char* args[])
{

	int total_espacos = 69, rodada = 0, espaco_coca = 0, espaco_pepsi = 0;
	string jogador1, jogador2;

	// linha inicial
	cout << "Bem vindo a uma louca corrida de caminh�es" << endl;
	cout << "Dois caminh�es v�o competir pra ver quem chega primeiro" << endl;
	cout << "O caminh�o que quebrar primeiro perde!!" << endl;
	//vai pedir o nome do primeiro jogador e guardar na variavel
	cout << "Digite o nome do jogador que vai representar a Coca Cola:" << endl;
	getline(cin, jogador1);
	//vai pedir o nome do segundo jogador e guardar na variavel
	cout << "Digite o nome do jogador que vai representar a Pepsi:" << endl;
	getline(cin, jogador2);
	//loop 
	while (espaco_coca < total_espacos && espaco_pepsi < total_espacos)
	{
		cout << "Louca corrida de caminh�es" << endl;
		//fim da pista de corrida
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		srand((int)time(0)); //gerando 'semente'
		// parte da coca
		espaco_coca = rand() % 3 + 1 + espaco_coca; //gera um numero aleat�rio
		//imprime os espa�os
		cout << jogador1 << endl;

		imprimir_espacos(espaco_coca);
		cout << " _________ " << endl;
		imprimir_espacos(espaco_coca);
		cout << " |    |  |" << endl;
		imprimir_espacos(espaco_coca);
		cout << " |COCA|  |" << endl;
		imprimir_espacos(espaco_coca);
		cout << " |COLA|__|" << endl;
		imprimir_espacos(espaco_coca);
		cout << " <-o-o> " << endl;

		// parte da pepsi
		espaco_pepsi = rand() % 3 + 1 + espaco_pepsi; //gera n�mero aleat�rio
		cout << jogador2 << endl;

		imprimir_espacos(espaco_pepsi);
		cout << " __________ " << endl;
		imprimir_espacos(espaco_pepsi);
		cout << " |     |  |" << endl;
		imprimir_espacos(espaco_pepsi);
		cout << " |PEPSI|  |" << endl;
		imprimir_espacos(espaco_pepsi);
		cout << " |COLA |__|" << endl;
		imprimir_espacos(espaco_pepsi);
		cout << " <-o-o> " << endl;
		
	} 
	if (espaco_coca > espaco_pepsi) cout << "Pepsi venceu a corrida!" << endl; //se o carro da coca chegar primeiro, o carro da pepsi vence
	else if (espaco_pepsi > espaco_coca) cout << "Coca venceu a corrida!" << endl; // se n�o, o carro da coca vence
	else cout << "Saiu quebrando tudo! Ninguem ganhou" << endl; // ou pode haver empate
	system("pause");
	return 0;

}
void imprimir_espacos(int rodada)//Fun��o que vai imprimir os espa�os.
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
	{
		cout << " ";//Imprime os espa�os.
	}
}
