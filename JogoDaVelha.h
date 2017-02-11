#include <iostream>
#include <stdlib.h>     //para poder usar o rand()
#include <cstdlib>

using tablespace std;

//DECLARAÇÃO DAS VARIÁVEIS GLOBAIS
char tabLinha1[3], tabLinha2[3], tabLinha3[3], vsNivel;
int vnAux, vnRandom;

//ASSINATURAS DAS FUNÇÕES
public void Construtor();
public bool FimDeJogo();
public bool ExisteGanhador();
public void NovoJogo();
public int GeraRandom(int pnAteQueNumero);
public void JogadaNivel();
public bool CPUAprendiz();
public bool CPUAvancado();
public bool CPUImpossivel();

public main(){
	
}

//FUNÇÃO DE INICIALIZAÇÃO OK
public void Construtor(){
	vnAux = 0;
	vsNivel = '';
	while (vnAux <=2){
		tabLinha1[vnAux] = 'N';
		tabLinha2[vnAux] = 'N';
		tabLinha3[vnAux] = 'N';
		vnAux += 1;
	}
}

//FUNÇÃO PARA DEFINIR O FIM DO JOGO OK
public bool FimDeJogo(){
	if (tabLinha1[0] == 'N' || tabLinha1[1] == 'N' || tabLinha1[2] == 'N' || 
	    tabLinha2[0] == 'N' || tabLinha2[1] == 'N' || tabLinha2[2] == 'N' || 
        tabLinha3[0] == 'N' || tabLinha3[1] == 'N' || tabLinha3[2] == 'N')
		if ExisteGanhador(){
			//CÓDIGO PARA HABILITAR O BOTÃO DE NOVO JOGO
			return FALSE;
		}else{
			if not ExisteGanhador(){
				printf("DEU VELHA!\n");
				//CÓDIGO PARA HABILITAR O BOTÃO DE NOVO JOGO
				return TRUE;
			}
		}
	return FALSE;
}

//FUNÇÃO PARA VERIFICAR SE EXISTE GANHADOR OK
public bool ExisteGanhador(){
//====VERIFICAÇÃO DAS LINHAS====
	//VERIFICA SE A PRIMEIRA LINHA É DE X
	int i = 0, count = 0;
	while( i <= 2 ){
		if (tabLinha1[i] == 'X')
			count += 1;
		i += 1;
	}
	if (count == 3){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A SEGUNDA LINHA É DE X
	i = 0; 
	count = 0;
	while( i <= 2 ){
		if (tabLinha2[i] == 'X')
			count += 1;
		i += 1;
	}
	if (count == 3){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A TERCEIRA LINHA É DE X
	i = 0; 
	count = 0;
	while( i <= 2 ){
		if (tabLinha3[i] == 'X')
			count += 1;
		i += 1;
	}
	if (count == 3){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A PRIMEIRA LINHA É DE O
	i = 0; 
	count = 0;
	while( i <= 2 ){
		if (tabLinha1[i] == 'O')
			count += 1;
		i += 1;
	}
	if (count == 3){
		printf("VOCE PERDEU!")
		return TRUE;
	}
	//VERIFICA SE A SEGUNDA LINHA É DE O
	i = 0; 
	count = 0;
	while( i <= 2 ){
		if (tabLinha2[i] == 'O')
			count += 1;
		i += 1;
	}
	if (count == 3){
		printf("VOCE PERDEU!")
		return TRUE;
	}
	//VERIFICA SE A TERCEIRA LINHA É DE O
	i = 0; 
	count = 0;
	while( i <= 2 ){
		if (tabLinha3[i] == 'O')
			count += 1;
		i += 1;
	}
	if (count == 3){
		printf("VOCE PERDEU!")
		return TRUE;
	}
//====VERIFICAÇÃO DAS COLUNAS====
	//VERIFICA SE A PRIMEIRA COLUNA É DE X
	if (tabLinha1[0] == 'X' && tabLinha2[0] == 'X' && tabLinha3[0] == 'X'){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A SEGUNDA COLUNA É DE X
	if (tabLinha1[1] == 'X' && tabLinha2[1] == 'X' && tabLinha3[1] == 'X'){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A TERCEIRA COLUNA É DE X
	if (tabLinha1[2] == 'X' && tabLinha2[2] == 'X' && tabLinha3[2] == 'X'){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A PRIMEIRA COLUNA É DE O
	if (tabLinha1[0] == 'O' && tabLinha2[0] == 'O' && tabLinha3[0] == 'O'){
		printf("VOCE PERDEU!")
		return TRUE;
	}
	//VERIFICA SE A SEGUNDA COLUNA É DE O
	if (tabLinha1[1] == 'O' && tabLinha2[1] == 'O' && tabLinha3[1] == 'O'){
		printf("VOCE PERDEU!")
		return TRUE;
	}
	//VERIFICA SE A TERCEIRA COLUNA É DE O
	if (tabLinha1[2] == 'O' && tabLinha2[2] == 'O' && tabLinha3[2] == 'O'){
		printf("VOCE PERDEU!")
		return TRUE;
	}
//====VERIFICAÇÃO DAS DIAGONAIS====
	//VERIFICA SE A PRIMEIRA DIAGONAL É DE X
	if (tabLinha1[0] == 'X' && tabLinha2[1] == 'X' && tabLinha3[2] == 'N'){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A SEGUNDA DIAGONAL É DE X
	if (tabLinha1[2] == 'X' && tabLinha2[1] == 'X' && tabLinha3[0] == 'X'){
		printf("VOCE GANHOU!")
		return TRUE;
	}
	//VERIFICA SE A PRIMEIRA DIAGONAL É DE O
	if (tabLinha1[0] == 'O' && tabLinha2[1] == 'O' && tabLinha3[2] == 'O'){
		printf("VOCE PERDEU!")
		return TRUE;
	}
	//VERIFICA SE A SEGUNDA DIAGONAL É DE O
	if (tabLinha1[2] == 'O' && tabLinha2[1] == 'O' && tabLinha3[0] == 'O'){
		printf("VOCE PERDEU!")
		return TRUE;
	}
	//RETORNA FALSE SE NENHUMA CONDIÇÃO FOR ENCONTRADA
	return FALSE;
}

//FUNÇÃO PARA INICIAR UM NOVO JOGO 
public void NovoJogo(){
	//INICIA OS COMPONENTES DO NOVO JOGO
}

//FUNÇÃO QUE GERA NÚMRO ALEATÓRIO DE 0 ATÉ 8 OK
public int GeraRandom(int pnAteQueNumero){
	int vnRnd = rand() % (pnAteQueNumero - 1);
	return vnRnd;
}

//FUNÇÃO PARA DEFINIR QUAL O NÍVEL A SER JOGADO
public void JogadaNivel(){
	//IDENTIFICA QUAL SERÁ O NÍVEL QUE O USUÁRIO ESCOLHEU
	//SE NÍVEL APRENDIZ, UTILIZAR CPUAprendiz
	//SE NÍVEL AVANÇADA, UTILIZAR CPUAvancado
	//SE NÍVEL IMPOSSÍVEL, UTILIZAR CPUImpossivel
}

//FUNÇÃO DE INTELIGÊNCIA APRENDIZ OK
public bool CPUAprendiz(){
	bool vbJogou = FALSE;
	int vnNum = 0;
	//LOOP ENQUANTO NÃO ENCONTRAR UMA CASA PARA JOGAR
	while (not vbJogou && not FimDeJogo()){
		vnNum = GeraRandom(9);
		//SE O NÚMERO GERADO FOR 0
		if (vnNum == 0){
			if (tabLinha1[0] == 'N'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 1
		if (vnNum == 1){
			if (tabLinha1[1] == 'N'){
				tabLinha1[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 2
		if (vnNum == 2){
			if (tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 3
		if (vnNum == 3){
			if (tabLinha2[0] == 'N'){
				tabLinha2[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 4
		if (vnNum == 4){
			if (tabLinha2[1] == 'N'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 5
		if (vnNum == 5){
			if (tabLinha2[2] == 'N'){
				tabLinha2[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 6
		if (vnNum == 6){
			if (tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 7
		if (vnNum == 7){
			if (tabLinha3[1] == 'N'){
				tabLinha3[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
		//SE O NÚMERO GERADO FOR 8
		if (vnNum == 8){
			if (tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}
	}
	
}

//FUNÇÃO DE INTELIGÊNCIA AVANÇADA OK
public bool CPUAvancado(){
	bool vbJogou = FALSE;
	int i = 0, qtdX = 0;
	//LOOP ENQUANTO NÃO ENCONTRAR UMA CASA PARA JOGAR
	while (not vbJogou && not FimDeJogo()){
		//CONTA QUANTOS X EXISTEM NO TABULEIRO
		while (i < 3){
			if (tabLinha1[i]== 'X')
				qtdX += 1;
			if (tabLinha2[i]== 'X')
				qtdX += 1;
			if (tabLinha3[i]== 'X')
				qtdX += 1;
			i += 1;
		}
		//FAZ LÓGICA DE QUANDO TEM MAIS DE 1 X NO TABULEIRO
		if (qtdX != 1){
			/***************************************************
			 *VERIFICA PRIMEIRO SE HÁ CONDIÇÕES DE GANHAR O JOGO
			 ***************************************************/
			//VERIFICA A PRIMEIRA LINHA
			if (tabLinha1[0] == 'O' && tabLinha1[1] == 'O' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha1[1] == 'N' && tabLinha1[2] == 'O'){
				tabLinha1[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'N' && tabLinha1[1] == 'O' && tabLinha1[2] == 'O'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA LINHA
			if (tabLinha2[0] == 'O' && tabLinha2[1] == 'O' && tabLinha2[2] == 'N'){
				tabLinha2[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'O' && tabLinha2[1] == 'N' && tabLinha2[2] == 'O'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'N' && tabLinha2[1] == 'O' && tabLinha2[2] == 'O'){
				tabLinha2[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A TERCEIRA LINHA
			if (tabLinha3[0] == 'O' && tabLinha3[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'O' && tabLinha3[1] == 'N' && tabLinha3[2] == 'O'){
				tabLinha3[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'N' && tabLinha3[1] == 'O' && tabLinha3[2] == 'O'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A PRIMEIRA DIAGONAL
			if (tabLinha1[0] == 'N' && tabLinha2[1] == 'O' && tabLinha3[2] == 'O'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha2[1] == 'N' && tabLinha3[2] == 'O'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha2[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA DIAGONAL
			if (tabLinha3[0] == 'N' && tabLinha2[1] == 'O' && tabLinha1[2] == 'O'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'O' && tabLinha2[1] == 'N' && tabLinha1[2] == 'O'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha2[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			/****************************************************
			 *SE NÃO TEM COMO GANHAR, VERIFICA COMO PODE BLOQUEAR
			 ****************************************************/
			if (tabLinha1[0] == 'X' && tabLinha1[1] == 'X' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha1[1] == 'N' && tabLinha1[2] == 'X'){
				tabLinha1[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'N' && tabLinha1[1] == 'X' && tabLinha1[2] == 'X'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA LINHA
			if (tabLinha2[0] == 'X' && tabLinha2[1] == 'X' && tabLinha2[2] == 'N'){
				tabLinha2[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'X' && tabLinha2[1] == 'N' && tabLinha2[2] == 'X'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'N' && tabLinha2[1] == 'X' && tabLinha2[2] == 'X'){
				tabLinha2[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A TERCEIRA LINHA
			if (tabLinha3[0] == 'X' && tabLinha3[1] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'X' && tabLinha3[1] == 'N' && tabLinha3[2] == 'X'){
				tabLinha3[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'N' && tabLinha3[1] == 'X' && tabLinha3[2] == 'X'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A PRIMEIRA DIAGONAL
			if (tabLinha1[0] == 'N' && tabLinha2[1] == 'X' && tabLinha3[2] == 'X'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha2[1] == 'N' && tabLinha3[2] == 'X'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha2[1] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA DIAGONAL
			if (tabLinha3[0] == 'N' && tabLinha2[1] == 'X' && tabLinha1[2] == 'X'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'X' && tabLinha2[1] == 'N' && tabLinha1[2] == 'X'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha2[1] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			/****************************************************
			 *SE NENHUMA REGRA FUNCIONAR, PREENCHE ALEATORIAMENTE
			 ****************************************************/
			else {
				CPUAprendiz();
				vbJogou = TRUE;
				return TRUE;
			}
		}else{
			//LÓGICA PARA QUANDO HOUVER SOMENTE 1 X
			if (tabLinha2[1] == 'N'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}else{
				CPUAprendiz();
				vbJogou = TRUE;
				return TRUE;
			}
		}
	}
	
}

//FUNÇÃO DE INTELIGÊNCIA IMPOSSÍVEL DE GANHAR OK
public bool CPUImpossivel(){
	//VARIÁVEIS
	bool vbJogou = FALSE;
	int	i = 0, qtdX = 0;
	
	//ENQUANTO NÃO JOGAR
	while not vbJogou and not FimDeJogo(){
		//CONTA QUANTOS X EXISTEM NO TABULEIRO
		while (i < 3){
			if (tabLinha1[i]== 'X')
				qtdX += 1;
			if (tabLinha2[i]== 'X')
				qtdX += 1;
			if (tabLinha3[i]== 'X')
				qtdX += 1;
			i += 1;
		}
		//FAZ A LÓGICA DE QUANDO EXISTE 1 X NO TABULEIRO
		if (qtdX == 1){
			//JOGA SEMPRE NO LADO OPOSTO AO PLAYER NO PRIMEIRO MOVIMENTO QUE NÃO FOR CANTO OU CENTRO
			//SE PLAYER ESCOLHER 2, JOGAR NO 8
			if (tabLinha1[1] == 'N' && tabLinha3[1] == 'X'){
				tabLinha1[1] ='O';
				if (ExisteGanhador()){
					//CHAMA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//SE PLAYER ESCOLHER 8, JOGAR NO 2
			if (tabLinha1[1] == 'X' && tabLinha3[1] == 'N'){
				tabLinha3[1] ='O';
				if (ExisteGanhador()){
					//CHAMA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//SE PLAYER ESCOLHER 6, JOGAR NO 4
			if (tabLinha2[0] == 'N' && tabLinha2[2] == 'X'){
				tabLinha2[0] ='O';
				if (ExisteGanhador()){
					//CHAMA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//SE PLAYER ESCOLHER 4, JOGAR NO 6
			if (tabLinha2[2] == 'N' && tabLinha2[0] == 'X'){
				tabLinha2[2] ='O';
				if (ExisteGanhador()){
					//CHAMA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//SE O PLAYER JOGAR NO MEIO, SEMPRE JOGAR EM UM DOS CANTOS
			vnRandom = rand() %3;
			switch(vnRandom){
				case 0:
					tabLinha1[0] = 'O'
					if (ExisteGanhador()){
						//CHAMA NOVO JOGO
						return FALSE;
					}else{
						vbJogou = TRUE;
						return TRUE;
					}
					break;
				case 1:
					tabLinha1[2] = 'O'
					if (ExisteGanhador()){
						//CHAMA NOVO JOGO
						return FALSE;
					}else{
						vbJogou = TRUE;
						return TRUE;
					}
					break;
				case 2:
					tabLinha3[0] = 'O'
					if (ExisteGanhador()){
						//CHAMA NOVO JOGO
						return FALSE;
					}else{
						vbJogou = TRUE;
						return TRUE;
					}
					break;
				case 3:
					tabLinha3[2] = 'O'
					if (ExisteGanhador()){
						//CHAMA NOVO JOGO
						return FALSE;
					}else{
						vbJogou = TRUE;
						return TRUE;
					}
					break;
			}
			//PRIORIZA SEMPRE JOGAR NA CASA DO MEIO QUANDO O PLAYER ESCOLHER CANTOS
			if (tabLinha1[1] == 'N' && tabLinha2[0] == 'N' && tabLinha2[2] == 'N' && tabLinha3[1] == 'N'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//CHAMA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
		}else {
			CPUAprendiz();
			vbJogou = TRUE;
			return TRUE;
		}
		//REGRA DAS DEMAIS JOGADAS
		if (qtdX >= 2){
			/***************************************************
			 *VERIFICA PRIMEIRO SE HÁ CONDIÇÕES DE GANHAR O JOGO
			 ***************************************************/
			//VERIFICA A PRIMEIRA LINHA
			if (tabLinha1[0] == 'O' && tabLinha1[1] == 'O' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha1[1] == 'N' && tabLinha1[2] == 'O'){
				tabLinha1[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'N' && tabLinha1[1] == 'O' && tabLinha1[2] == 'O'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA LINHA
			if (tabLinha2[0] == 'O' && tabLinha2[1] == 'O' && tabLinha2[2] == 'N'){
				tabLinha2[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'O' && tabLinha2[1] == 'N' && tabLinha2[2] == 'O'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'N' && tabLinha2[1] == 'O' && tabLinha2[2] == 'O'){
				tabLinha2[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A TERCEIRA LINHA
			if (tabLinha3[0] == 'O' && tabLinha3[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'O' && tabLinha3[1] == 'N' && tabLinha3[2] == 'O'){
				tabLinha3[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'N' && tabLinha3[1] == 'O' && tabLinha3[2] == 'O'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A PRIMEIRA DIAGONAL
			if (tabLinha1[0] == 'N' && tabLinha2[1] == 'O' && tabLinha3[2] == 'O'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha2[1] == 'N' && tabLinha3[2] == 'O'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha2[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA DIAGONAL
			if (tabLinha3[0] == 'N' && tabLinha2[1] == 'O' && tabLinha1[2] == 'O'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'O' && tabLinha2[1] == 'N' && tabLinha1[2] == 'O'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'O' && tabLinha2[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			/****************************************************
			 *SE NÃO TEM COMO GANHAR, VERIFICA COMO PODE BLOQUEAR
			 ****************************************************/
			if (tabLinha1[0] == 'X' && tabLinha1[1] == 'X' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha1[1] == 'N' && tabLinha1[2] == 'X'){
				tabLinha1[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'N' && tabLinha1[1] == 'X' && tabLinha1[2] == 'X'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA LINHA
			if (tabLinha2[0] == 'X' && tabLinha2[1] == 'X' && tabLinha2[2] == 'N'){
				tabLinha2[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'X' && tabLinha2[1] == 'N' && tabLinha2[2] == 'X'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha2[0] == 'N' && tabLinha2[1] == 'X' && tabLinha2[2] == 'X'){
				tabLinha2[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A TERCEIRA LINHA
			if (tabLinha3[0] == 'X' && tabLinha3[1] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'X' && tabLinha3[1] == 'N' && tabLinha3[2] == 'X'){
				tabLinha3[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'N' && tabLinha3[1] == 'X' && tabLinha3[2] == 'X'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A PRIMEIRA DIAGONAL
			if (tabLinha1[0] == 'N' && tabLinha2[1] == 'X' && tabLinha3[2] == 'X'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha2[1] == 'N' && tabLinha3[2] == 'X'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha2[1] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			//VERIFICA A SEGUNDA DIAGONAL
			if (tabLinha3[0] == 'N' && tabLinha2[1] == 'X' && tabLinha1[2] == 'X'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha3[0] == 'X' && tabLinha2[1] == 'N' && tabLinha1[2] == 'X'){
				tabLinha2[1] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			if (tabLinha1[0] == 'X' && tabLinha2[1] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
				
			}
			/**************************************************
			 *****************REGRAS ESPECIAIS*****************
			 **************************************************/
			//REGRA DO TRIÂNGULO
			if (tabLinha2[1] == 'X' && tabLinha3[2] == 'X' && tabLinha1[0]== 'O' && tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DO L PEQUENO
			if (tabLinha1[0] == 'X' && tabLinha3[1] == 'X' && tabLinha2[1] == 'O' && tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DO L PEQUENO
			if (tabLinha1[2] == 'X' && tabLinha2[0] == 'X' && tabLinha2[1] == 'O' && tabLinha1[0] == 'N'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DO L PEQUENO
			if (tabLinha3[2] == 'X' && tabLinha1[1] == 'X' && tabLinha2[1] == 'O' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DO L PEQUENO
			if (tabLinha3[0] == 'X' && tabLinha2[2] == 'X' && tabLinha2[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha3[1] == 'X' && tabLinha1[1] == 'O' && tabLinha1[2] == 'X' && tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha3[1] == 'X' && tabLinha1[1] == 'O' && tabLinha1[0] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha1[1] == 'X' && tabLinha3[1] == 'O' && tabLinha3[0] == 'X' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha1[1] == 'X' && tabLinha3[1] == 'O' && tabLinha3[2] == 'X' && tabLinha1[0] == 'N'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha2[0] == 'X' && tabLinha2[2] == 'O' && tabLinha1[2] == 'X' && tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha2[0] == 'X' && tabLinha2[2] == 'O' && tabLinha3[2] == 'X' && tabLinha1[0] == 'N'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha2[2] == 'X' && tabLinha2[0] == 'O' && tabLinha1[0] == 'X' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA SEM NOME
			if (tabLinha2[2] == 'X' && tabLinha2[0] == 'O' && tabLinha3[0] == 'X' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DA DIAGONAL
			if (tabLinha1[0] == 'X' && tabLinha3[2] == 'X' && tabLinha1[2] == 'N' && tabLinha3[0] == 'O'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DA DIAGONAL
			if (tabLinha1[0] == 'X' && tabLinha3[2] == 'X' && tabLinha1[2] == 'O' && tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DA DIAGONAL
			if (tabLinha1[2] == 'X' && tabLinha3[0] == 'X' && tabLinha1[0] == 'N' && tabLinha3[2] == 'O'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DA DIAGONAL
			if (tabLinha1[2] == 'X' && tabLinha3[0] == 'X' && tabLinha1[0] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//REGRA DA DIAGONAL
			if (tabLinha1[2] == 'X' && tabLinha3[0] == 'X' && tabLinha1[0] == 'N' && tabLinha3[2] == 'N'){
				tabLinha2[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha2[2] == 'X' && tabLinha3[1] == 'X' && tabLinha2[0] == 'O' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha2[0] == 'X' && tabLinha3[1] == 'X' && tabLinha1[1] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha1[1] == 'X' && tabLinha2[0] == 'X' && tabLinha2[2] == 'O' && tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha1[1] == 'X' && tabLinha2[2] == 'X' && tabLinha3[1] == 'O' && tabLinha1[0] == 'N'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha2[2] == 'X' && tabLinha3[1] == 'X' && tabLinha1[1] == 'O' && tabLinha3[0] == 'N'){
				tabLinha3[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha2[0] == 'X' && tabLinha3[1] == 'X' && tabLinha2[2] == 'O' && tabLinha1[0] == 'N'){
				tabLinha1[0] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha1[1] == 'X' && tabLinha2[0] == 'X' && tabLinha3[1] == 'O' && tabLinha1[2] == 'N'){
				tabLinha1[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			//ÚLTIMA REGRA
			if (tabLinha1[1] == 'X' && tabLinha2[2] == 'X' && tabLinha2[0] == 'O' && tabLinha3[2] == 'N'){
				tabLinha3[2] = 'O';
				if (ExisteGanhador()){
					//HABILITA NOVO JOGO
					return FALSE;
				}else{
					vbJogou = TRUE;
					return TRUE;
				}
			}
			/**************************************************
			 *****************SE NENHUMA REGRA*****************
			 **************************************************/
			
		}else{
			CPUAprendiz();
			vbJogou = TRUE;
			return TRUE;
		}
	}
}