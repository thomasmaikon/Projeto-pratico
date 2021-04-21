#include <iostream>
#include "binario.h" // chamo a biblioteca de prototipos binario.h
#include "genetico.h" // chamo a biblioteca de prototipos genetico.h
#include "windows.h" // chama a biblioteca do windos para mudar a cor do resultado
using namespace std;

int main() {
//-------------------------------------------------------------------------------------------------------------------------------
// Declaracao das 6 variaveis, que serao utilizadas para ler 6 numeros.
	unsigned short num1, num2, num3, num4, num5, num6;
/* utilizando o unsigned eu impesso que meu usuario digite numeros negativos, 
dobrando o tamanho da declaracao de variavel short que so cabem 16 bits. */
//-------------------------------------------------------------------------------------------------------------------------------
	cout << "Digite 6 numeros entre 0 e 66535" << endl; // imprime na tela a frase que esta entre aspas duplas.
//-------------------------------------------------------------------------------------------------------------------------------
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6; // leio sequencialmente 6 numeros, do primeiro num1 até num6.
//-------------------------------------------------------------------------------------------------------------------------------
	
	cout << "Resultado da Avaliacao" << endl;
	cout << "----------------------"<< "\n"; // imprime o caractere (-) 23 vezes. 
	if (Avalia(num1)==true){ 
		
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	} /*entra em uma condicional que chama a funcao Avalia atribuindo
	o Primeiro numero digitado, que retorna um booleano para ser feito uma comparacao, de acordo com o resultado da comparacao,
	true retorna OK, e false retorna X*/
		      
	if (Avalia(num2)==true){
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	} /*entra em uma condicional que chama a funcao Avalia atribuindo
	o Segundo numero digitado, que retorna um booleano para ser feito uma comparacao, de acordo com o resultado da comparacao,
	true retorna OK, e false retorna X*/

	if (Avalia(num3)==true){ 
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	}/*entra em uma condicional que chama a funcao Avalia atribuindo
	o Terceiro numero digitado, que retorna um booleano para ser feito uma comparacao, de acordo com o resultado da comparacao,
	true retorna OK, e false retorna X*/  
	
	if (Avalia(num4)==true){
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	}/*entra em uma condicional que chama a funcao Avalia atribuindo
	o Quarto numero digitado, que retorna um booleano para ser feito uma comparacao, de acordo com o resultado da comparacao,
	true retorna OK, e false retorna X*/ 
 
	if (Avalia(num5)==true){
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	}/*entra em uma condicional que chama a funcao Avalia atribuindo
	o Quinto numero digitado, que retorna um booleano para ser feito uma comparacao, de acordo com o resultado da comparacao,
	true retorna OK, e false retorna X*/  
	
	if (Avalia(num6)==true){
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	} /*entra em uma condicional que chama a funcao Avalia atribuindo
	o Sexto numero digitado, que retorna um booleano para ser feito uma comparacao, de acordo com o resultado da comparacao,
	true retorna OK com a cor verde, e false retorna X com a cor vermelha*/ 
//-------------------------------------------------------------------------------------------------------------------------------
	cout << "----------------------" << "\n";// imprime o caractere (-) 23 vezes. 
//-------------------------------------------------------------------------------------------------------------------------------

	if (Avalia(PontoUnico(num1, num2))==true){
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{ 
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	} 
	/* chama a funcao PontoUnico e atribui os dois primeiros numeros digitados a ele,dentro da funcao avaliacao, para 
	poder ser feito o "cruzamento" de ponto unico com os valores fornecidos e
	gerar o resultado do ponto unico e atribuir ele na funcao Avaliacao para que envie um resultado booleano e
	de acordo com esse valor mostre o OK ou o X na tela.*/

//-------------------------------------------------------------------------------------------------------------------------------
	
	if (Avalia(Aritimetico(num3, num4))==true){
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	} 
	/* Chama a funcao Aritimetico atribuindo a ela o 3 e 4 numeros digitados, para que seja gerado um resultado e 
	enviado para dentro da funcao Avaliacao para que envie um resultado booleano e de acordo com esse valor mostre o OK 
	ou o X na tela.*/

//------------------------------------------------------------------------------------------------------------------------------- 
	
	if (Avalia(MutacaoSimples(num5))==true){ 
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	} 
	/* chama a funcao Mutacao atribuindo o 5 valor digitado no incio do porgrama dentro da funcao Avaliacao que retorna
	um valor para que a funcao Avalicao para que envie um resultado booleano e de acordo com esse valor mostre o OK ou o X na tela.*/

//------------------------------------------------------------------------------------------------------------------------------- 
	
	if (Avalia(MutacaoDupla(num6))==true){
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_GREEN);
		cout.width(1);
		cout << "OK\n";
		SetConsoleTextAttribute(V, 7);
	}
	else{ 
		HANDLE V = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(V, FOREGROUND_RED);
		cout.width(1);
		cout << "X\n";
		SetConsoleTextAttribute(V, 7);
	} /* chama a funcao mutacaodupla atribuindo o 6 valor
	digitado no inicio do programa  que retorna um valor a funcao Avalia para que envie um resultado booleano e de acordo com 
	esse valor mostre o OK ou o X na tela. */

//-------------------------------------------------------------------------------------------------------------------------------	
	system("Pause"); // evita que a tela feche diretamente, faz permanecer na tela ate que seja apertada alguma outra tecla
//-------------------------------------------------------------------------------------------------------------------------------
}
