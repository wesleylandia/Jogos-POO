
/*
	Exercício - Código Secreto
					CÓDIGO SECRETO
	Você é um Hacker tentando descobrir o código de
				um projeto super secreto.
			Teste suas habilidades. Boa Sorte!
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

// Funções do Programa (explicações no código da função)
void Mostrar_Circuito(bool cod1, bool cod2, bool cod3, bool cod4);

/*
	Exercício - Código Secreto
	Nesse jogo, o jogador precisa descobrir um código secreto de 4 (quatro) dígitos.
	Os valores de cada parte do código vão de 1 até 4. Sempre que o jogador acertar um
	dos valores, o circuito correto vai acender!
	Detalhe: 
	O código está incompleto!
	1. Leia o código (linha a linha) e seus comentários.
	2. Preencha os comentários em ----- MAIÚSCULO ----- com o código que está faltando.
	3. Comente os trechos de código que se pede.
	
	Se necessário, use uma folha para lhe auxiliar! Copie o nome das variáveis e seus valores.
	
	Boa sorte!
*/
int main()
{
	bool sair = false;

	// Marca os códigos em "falso" caso esteja *errado* e "true" caso esteja *certo*.
	bool cod1 = false, cod2 = false, cod3 = false, cod4 = false;

	srand((int)time(0));

	// Nosso código será composto de 4 (quatro) números (num1, num2, num3 e num4).
	int num1, num2, num3, num4;
	// os números do código vão ser aleatórios, indo de 1 até 4.
	num1 = rand() % 4 + 1;
	num2 = rand() % 4 + 1;
	num3 = rand() % 4 + 1;
	num4 = rand() % 4 + 1;
	/*
		Por exemplo, se ele gerar (aleatoriamente):
			num1 = 2
			num2 = 4
			num3 = 4
			num4 = 3
		Quer dizer que nosso código secreto será:
			2 4 4 3
	*/

	// Número do código que o jogador vai digitar.
	int codigo;

	while (!sair)
	{
		// Mostra o Painel de Circuitos em tela.
		Mostrar_Circuito(cod1, cod2, cod3, cod4);
		// Não mexa nesse código.

		// Se todos os números do código estiverem corretos, então encerra.
		if (cod1 == true && cod2 == true && cod3 == true && cod4 == true)
		{
			cout << "<SISTEMA HACKEADO COM SUCESSO ALERTA USO INDEVIDO>" << endl;
			sair = true;
			system("pause");
		}
		else
		{
			// Reinicia a luz dos circuitos.
			cod1 = false;
			cod2 = false;
			cod3 = false;
			cod4 = false;

			cout << "<HACKEANDO SISTEMA> DIGITE CODIGO [1 ATE 4] " << endl;
		
			cout << "<DIGITE O PRIMEIRO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num1) cod1 = true;

			cout << "<DIGITE O SEGUNDO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num2) cod2 = true;		
		
			// ------ REPITA O CÓDIGO ACIMA PARA O TERCEIRO E QUARTO NUMERO QUE PRECISAM SER DIGITADOS ------
			cout << "<DIGITE O TERCEIRO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num3) cod3 = true;
			
			cout << "<DIGITE O QUARTO NUMERO DO CODIGO NO TERMINAL> ";
			cin >> codigo;
			if (codigo == num4) cod4 = true;
			// ------ FAÇA UM LAÇO DE 0 ATÉ 100, PULANDO DE 10 EM 10, QUE REPITA AS DUAS LINHAS ABAIXO ------
			//					Sua variável de controle do laço deve se chamar "cont".
			int cont;
			// Dica: "cont++" é a mesma coisa que "cont = cont + 1".
			// Dica: "cont = cont + 1" aumenta o cont em 1, ou seja, pula de 1 em 1.
			//		 "cont = cont + 2" aumenta o cont em 2, ou seja, pula de 2 em 2.
			for (int cont = 0; cont < 100; cont = cont + 10)
					cout << "<PROCESSANDO CODIGO> AGUARDE " << cont << "%" << endl;
					system("cls");
		}

		system("cls");
	}

	// ------ FAÇA UM LAÇO QUE COLOQUE 4 LINHAS EM TELA ------
	for (int cont = 0; cont < 4; cont++) cout << endl;
	cout << "O codigo foi quebrado. Os arquivos finalmente sao seus." << endl;
	// ------ FAÇA UM LAÇO QUE COLOQUE 4 LINHAS EM TELA ------
	for (int cont = 0; cont < 4; cont++) cout << endl;
	cout << " -------------------- FIM DE JOGO ---------------------" << endl;

	return 0;
}

/*
	Mostra o Painel de Circuitos em tela.
	Se o jogador acertar um dos valores do código, o circuito correto vai acender.
	Quando todos os circuitos acenderem, quer dizer que o código está completo!
	Obs: Não mexa nesse código! Ele que vai mostrar as coisas em tela.
*/
void Mostrar_Circuito(bool cod1, bool cod2, bool cod3, bool cod4)
{
	// ------ EXPLIQUE O QUE O IF ELSE ABAIXO FAZ NO PROGRAMA ------
	// Dica: Olhe os outros IF ELSE abaixo. Veja o que muda e tente interpretar.
	// o if vai ver se o valor de codx é verdade, se for ele vai imprimir tal coisa, se nao, vai imprimir o else
	if (cod2 == true)
	{
		cout << "	       ____	" << endl;
		cout << "	      |||||    " << endl;
		cout << "	      |||||                     ____" << endl;
	}
	else
	{
		cout << "	       ____	" << endl;
		cout << "	      |   |    " << endl;
		cout << "	      |___|                     ____" << endl;
	}

	if (cod4 == true)
	{
		cout << "	       | |                     |||||" << endl;
		cout << "	       | |                     |||||" << endl;
	}
	else
	{
		cout << "	       | |                     |   |" << endl;
		cout << "	       | |                     |___|" << endl;
	}

	cout << "	       | |______                | |_" << endl;
	cout << "	       |______  |               |_  |" << endl;
	cout << "	Hack   	      | |  System Code	  | |" << endl;
	cout << "	-----------------------------------------" << endl;
	cout << "  ______|   ___   |   ___   |   ___   |   ___   |" << endl;
	cout << " |  ____|  /\\  \\  |  /\\  \\  |  /\\  \\  |  /\\  \\  |" << endl;
	cout << " | |	| /::\\  \\ | /::\\  \\ | /::\\  \\ | /::\\  \\ | " << endl;
	cout << "_|_|_   |/:/\\:\\__\\|/:/\\:\\__\\|/:/\\:\\__\\|/::\\:\\__\\|	" << endl;

	if (cod1 == true)
	{
		cout << "|||||	|\\:\\ \\/__/|\\:\\/:/  /|\\:\\/:/  /|\\:\\:\\/  /|	" << endl;
		cout << "|||||   | \\:\\__\\  | \\::/  / | \\::/  / | \\:\\/  / |	" << endl;
	}
	else
	{
		cout << "|   |	|\\:\\ \\/__/|\\:\\/:/  /|\\:\\/:/  /|\\:\\:\\/  /|	" << endl;
		cout << "|___|   | \\:\\__\\  | \\::/  / | \\::/  / | \\:\\/  / |	" << endl;
	}

	cout << "	|  \\/__/  |  \\/__/  |  \\/__/  |  \\/__/  |		" << endl;
	cout << "	-----------------------------------------		" << endl;
	cout << "	     Protection Lvl 10  | |	   Secret		" << endl;
	cout << "		         ____   | |				" << endl;

	if (cod3 == true)
	{
		cout << "                        |||||___| |				" << endl;
		cout << "                        |||||_____|				" << endl;
	}
	else
	{
		cout << "                        |   |___| |				" << endl;
		cout << "                        |___|_____|				" << endl;
	}

	cout << endl << endl;
}
/*
Código por https://github.com/marcelomesmo/POOAulas
Desenhos ASCII retirados de http://ascii.co.uk/art/pokemon
*/
