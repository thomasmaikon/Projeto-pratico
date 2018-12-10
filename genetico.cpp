#include <iostream>
#include "binario.h"
using namespace std;
	//-------------------------------------------------------------------------------------------------------------------------------
	unsigned short PontoUnico(unsigned short num1,unsigned short num2){ // Inicializando a Funcao PontoUnico
		unsigned short bits = OrBinario(BitsBaixos(num2),  BitsAltos(num1)); /*cria uma variavel chamada Bits que
	chama a funcao OrBinario, contudo chama as funcoes BitsBaixos e BitsAltos para poder ficar com dois termos que 
	possuem seus termos baixos ligados de acordo com seu respectivo numero e termos altos ligados de acordo com seu 
	respectivo numero, para posteriormente fazer a portar OR da funcao or binario*/
		return bits; // retorna o resultado da operacao mecionada.
	}
	//-------------------------------------------------------------------------------------------------------------------------------
	unsigned short Aritimetico(unsigned short num3, unsigned short num4) {// inicializa a funcao aritimetico, recebendo 2 numeros
		unsigned short ande = AndBinario( num3,  num4);// chama a funcao AndBinario fornecendo os 2 numeros recebdidos
		return ande;// retorna o resultado final depois que foi realizado  processo dentro da funcao AndBnario
	}
	//-------------------------------------------------------------------------------------------------------------------------------
	unsigned short MutacaoSimples(unsigned short num5) {// inicia a funcao MutacaoSimples que é iniciada recebendo um valor
		unsigned short retorno; // cria uma variavel retorno
		if ((TestarBit(num5,9 )) == true) { /* entra em uma condicional  que chama a funcao TestarBit que recebe o mesmo valor 
											da funcao MutacaoSimples e um segundo valor ja pre-estabelecido, pelo professor
											que é da letra G, ela sera equipolente a posicao 9, da direita para a esquerda, 
											contando em bits , retornando um valr true ou false*/
			
			retorno = DesligarBit(num5, 9); /* retorna um valor que esta contido dentro da funcao DesligarBit que recebe o mesmo 
								valor e posicao que a funcao TestarBit utiiza, e realisa uma operacao para que o bit escolhido seja  desligado*/
		}
		
		else { /* "segunda parte" da condicional mencionada a cima que faz com o que caso nao entre na condicao acima ele diretamente 
				vem para essa condicao*/
			retorno = LigarBit(num5,9); /* chama a funcao LigarBit com o mesmo numero e peosicao que foram fornecidas na primeira
										condicional e esta faz a operacao nescessaria para ligar o bit na posicao escolhida*/
		}
		return retorno ; // recebe o valor  retornado de uma das duas condicionais acima.
	}
	//-------------------------------------------------------------------------------------------------------------------------------
	unsigned short MutacaoDupla(unsigned short num6) { /* inicia a funcao MutacaoDupla que recebe um valor para ser inicializada*/
		if (TestarBit(num6, 12) == true) { /*inicia uma condicional que chama a funcao TestarBit com o mesmo numero que a funcao
										   MutacaoDupla foi inicializada e uma dada posicao que também ja foi pre-estabelecida
										   é a letra D , em binario ficou na posicao 12, esta funcao TestarBit retorna uma valor true
										   ou false que é feita uma dada comparacao para saber em quando das condicionais ele entrara.*/
			
			num6 = DesligarBit(num6, 12); /* atualiza o a variavel num6  com a funcao DesligarBit que e inicializada com o mesmo numero e 
										  posicao da condicional*/
		} else {
			num6 = LigarBit(num6, 12); /*caso entre na segunda condicional atualiza a variavel num6 com o valor que 
									   a funcao LigarBit retorna, que porsua vez é inicializada com o numero e posicao da primeira 
									   condicional*/
		}

		if (TestarBit(num6, 3) == false) {/* inicia a condicional chamando a funcao TestarBit com o numero fornecido pela funcao
										  MutacaoDupla e com a posicao pre-estabelecida da letra M que em bits é o 4 termo da 
										  direita para equerda, retornando um valor booleano para ser feita a comparacao e entrar na condicional */
			
			num6 = LigarBit(num6, 3);/*entrando na condicional a variavel num6 recebe o valor da funcao LigarBit que recebe o numero fornecido 
									pela funcao MutacaoDupla, e posicao ja estabelecda na condicional, retornando um valor para a dada variavel.*/
	
		} else { // entra na segunda condicional caso a primeira condicional nao seja verdadeira.
			num6 = DesligarBit(num6, 3); /* entrando na segunda condicional a variavel num6 recebe o valor que é o resultado da funcao 
										 DesligarBit que é iniciada recebendo o numero e posicao anteriormente ja comentado. 
										 retornando a variavel um valor*/
		}
		return num6; // retorna um valor que foi resultado das condicionais anteriores.
	}
	//-------------------------------------------------------------------------------------------------------------------------------
	bool Avalia(unsigned short numero) {// inicializa a funcao Avalia, que para ser iniciada precisa receber um numero fornecido no Problema.cpp
		bool RESULTADO; // declaracao de uma variavael booleana
		 short VA=0, VB=0, VC=0, VD=0, VE=0, VF=0, VG=0, VH=0, VI=0, VJ=0, VK=0, VL=0, VM=0, VN=0, VO=0, VP=0;
		// instancia todos o valores de a até p como 0 para evitar que numeros aleatorios sejam escritos.
		 short PA = 0, PB = 0, PC = 0, PD = 0, PE = 0, PF = 0, PG = 0, PH = 0, PI = 0, PJ = 0, PK = 0, PL = 0, PM = 0, PN = 0, PO = 0, PP = 0;
		// instancia todos o peso de a ate p como 0 para evitar que numeros aleatorios sejam escritos
		 unsigned short VALOR, PESO;
		if (TestarBit(numero, 0)==true){ // chama afuncao testar bit com numero e posicoes pre estabelecidas
			PP = 1; // caso entre na condicional as variaveis possuirao estes valores
			VP = 12;
		}
		if (TestarBit(numero, 1) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PO = 4;// caso entre na condicional as variaveis possuirao estes valores
			VO = 4;
		}
		if (TestarBit(numero, 2) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PN = 2;// caso entre na condicional as variaveis possuirao estes valores
			VN = 3;
		}
		if (TestarBit(numero, 3) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PM = 5;// caso entre na condicional as variaveis possuirao estes valores
			VM = 10;
		}
		if (TestarBit(numero, 4) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PL = 4;// caso entre na condicional as variaveis possuirao estes valores
			VL = 15;
		}
		if (TestarBit(numero, 5) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PK = 2;// caso entre na condicional as variaveis possuirao estes valores
			VK = 20;
		}
		if (TestarBit(numero, 6) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PJ = 1;// caso entre na condicional as variaveis possuirao estes valores
			VJ = 10;
		}
		if (TestarBit(numero, 7) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PI = 4;// caso entre na condicional as variaveis possuirao estes valores
			VI = 2;
		}
		if (TestarBit(numero, 8) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PH = 3;// caso entre na condicional as variaveis possuirao estes valores
			VH = 1;
		}
		if (TestarBit(numero, 9) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PG = 2;// caso entre na condicional as variaveis possuirao estes valores
			VG = 1;
		}
		if (TestarBit(numero, 10) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PF = 1;// caso entre na condicional as variaveis possuirao estes valores
			VF = 3;
		}
		if (TestarBit(numero, 11) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PE = 9;// caso entre na condicional as variaveis possuirao estes valores
			VE = 15;
		}
		if (TestarBit(numero, 12) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PD = 4;// caso entre na condicional as variaveis possuirao estes valores
			VD = 10;
		}
		if (TestarBit(numero, 13) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PC = 5;// caso entre na condicional as variaveis possuirao estes valores
			VC = 8;
		}
		if (TestarBit(numero, 14) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PB = 3;// caso entre na condicional as variaveis possuirao estes valores
			VB = 4;
		}
		if (TestarBit(numero, 15) == true) {// chama afuncao testar bit com numero e posicoes pre estabelecidas
			PA = 12;// caso entre na condicional as variaveis possuirao estes valores
			VA = 4;
		}
		PESO = PA + PB + PC + PD + PE + PF + PG + PH + PI + PJ + PK + PL + PM + PN + PO + PP; /* soma todos os valroes 
													fornecidos do peso*/
		VALOR = VA + VB + VC + VD + VE + VF + VG + VH + VI + VJ + VK + VL + VM + VN + VO + VP;/* soma todos os valores
													fornecidos do valor*/
		//-------------------------------------------------------------------------------------------------------------------------------
		//retorna um valor booleano de acordo com a condicional que entre.
		if (PESO <= 20) {
			RESULTADO = true; 
		}
		else { 
			RESULTADO = false;
		}
		// comandos para imprimir na tela
		
		cout.width(5); cout << right; cout << numero;
		cout.width(1); cout << " - " << left; cout << "Kg" << PESO;
		cout.width(1); cout << " - " << left; cout << "$" << VALOR; 
		cout << " - ";
		
		
		//-------------------------------------------------------------------------------------------------------------------------------
		return RESULTADO; // retorna um resultado boolean da condicional que entrou 
	}
