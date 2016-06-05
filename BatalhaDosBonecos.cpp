#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;
	string jogador1, jogador2;
	int vidajog1 = 100, vidajog2 = 100;
	int Ataque = 20, Defesa = 10;


	cout << "Digite o nome do jogador 1:" << endl;
	getline(cin, jogador1);

	cout << "Digite o nome do jogador 2:" << endl;
	getline(cin, jogador2);
	while (sair == false) {


		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jogador1 << "             " << jogador2 << endl;
		cout << "Vida:" << vidajog1 << "           " << "Vida:" << vidajog2 << endl;
		cout << "Nivel de ataque:" << Ataque << "           " << "Nivel de ataque:" << Ataque << endl;
		cout << "Nivel de defesa:" << Defesa << "           " << "Nivel de defesa:" << Defesa << endl;


		system("pause");

		int dado50;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		//Gera um número aletorio
		dado50 = rand() % 50 + 10;
		//Gera um dano no jogador 1
		if (dado50 > 15)
		{
			vidajog1 = vidajog1 - dado50;
			cout << jogador1 << " Dano: " << -dado50 << endl;
			cout << jogador2 << " Acertou! " << endl;
			cout << " Proxima jogada: " << endl;
			cin.get();
		}

		else if (dado50 <= 15)
		{

			cout << jogador2 << " Errou! " << endl;
			cout << " Proxima jogada: " << endl;
			cin.get();

		}
		//Mesma coisa para o jogador 2
		dado50 = rand() % 50 + 10;

		if (dado50 > 15)
		{

			vidajog2 = vidajog2 - dado50;
			cout << jogador2 << " Dano: " << -dado50 << endl;
			cout << jogador1 << " Acertou! " << endl;
			cout << " Proxima jogada: " << endl;
			cin.get();
		}
		else if (dado50 <= 15) {

			cout << jogador1 << " Errou! " << endl;
			cout << " Proxima jogada: " << endl;
			cin.get();

		}

		//cout << "Vida:" << vidajog1 << "           " << "Vida:" << vidajog2 << endl;

		system("cls");

		// se sair não limpa a tela do usuario
		if (vidajog1 <= 0 || vidajog2 <= 0)
		{

			sair = true;
		}
		// se continuar entao limpa a tela do usuario
		else system("cls");
	}


	cout << "Finish" << endl;
	if (vidajog1 > 0) cout << jogador1 << "Arrasou, Jogador 1!" << endl;
	else if (vidajog2 > 0) cout << jogador2 << "Arrasou, Jogador 2!" << endl;
	else cout << "Que derrota, em, coleguinhas!" << endl;
	return 0;


}