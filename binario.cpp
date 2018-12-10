#include "binario.h"

unsigned short LigarBit(unsigned short numero, unsigned short posicao) { /*funcao ligar bit, pega 2 numero sendo que 1 deles
																		 Ã© para informar a posicao aonde o bit sera ligado*/
	posicao = 1 << posicao; // recebe a posicao aonde ficara com bit 1 para poder ativar o bit
	numero = numero | posicao;   // realisacao da porta OR para poder ligar o bit na posicao que foi requerido, sem que haja uma influencia nos demais bits.
	return numero;
}

unsigned short DesligarBit(unsigned short numero, unsigned short posicao) { //inicia funcao DesligarBit com um numero e uma posicao
	posicao = ~(1 << posicao); // atribui um valor a variavel posicao movendo o numero 1 para a posicao informada e depois invertendo todo o resultado
	numero = numero & posicao; // atribui um resultado a variavel numero que resulta de uma AND entre o numero e a posicao
	return numero; // retorna o valor final
}

bool TestarBit(unsigned short numero, unsigned short posicao) { // Inicia a funcao booleana TestarBit que recebe um numero e uma posicao
	bool resposta; // inicia uma variavel booleana
	posicao = 1 << posicao; // atribui um resultado a variavel posicao que move o numero 1 para a posiao informada pela funcao TestarBit
	if ((numero & posicao) == posicao) {/* inicia uma condicional,com o numero e posicao fornecidos realiza a operacao and entre 
										numero e posicao, que gera um resultado*/
		resposta = true; // atribui o resultado a uma variavel
	}
	else {// caso a primeira condicional nao seja atingida entra na segunda e retorna o valor desta
		resposta = false;
	}
	return resposta;// retorna o valor da condicional que atingiu as condicoes 
}

unsigned short AndBinario(unsigned short num1, unsigned short num2) {
	num1 = num1 & num2; // realiza AND, entre os numero
	return num1; // retorna o valor da operacao realizada anteriormente
}

unsigned short OrBinario(unsigned short num1, unsigned short num2) {// inicia a funcao OrBinario que recebe dois numero para ser inicializada
	num1 = num1 | num2; // realiza um OR , que é a soma dos numeros fornecidos em binario.
	return num1; // retorna o resultado da operacao anterior.
}

unsigned short BitsBaixos(unsigned short num1) { // funcao Bit baixo, recebe um numero
	num1 = num1 << 8; // "transporta" 8 bits da direita para a esquerda , zerando os bits da direita. 
	num1 = num1 >> 8; /* "transporta" 8 bits da esquerda para a direita, zerando os bits da esquerda
					  permanecendo com os bits da esquerda zerados. */
	return num1;// retorna o valor da operacao final realizada anteriomente
}

unsigned short BitsAltos(unsigned short num1) { // funcao Bit alto, recebe um numero
	num1 = num1 >> 8; // "transporta" 8 bits da esquerda para a direita, zerando os bits da esquerda.
	num1 = num1 << 8; /* "transporta" 8 bits da direita para a esquerda, zerando os bits da direita
					  permanecendo com os bits da direita zerandos. */
	return num1; // retorna o valor da operacao final realizada anteriomente
}