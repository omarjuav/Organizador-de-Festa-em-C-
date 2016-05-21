/*-Organizador de festa Milênio - versão 1.0-*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main (){
	
char nome[20],cpf[11],endereco[30],contato[11],opcao;	
int convidado,i,mesa,menu,cont,max_conv,men_conv,total_conv;
float mesa_1,mesa_2,total,max_orc,men_orc,total_orc;
menu=0;
opcao=0;
i=0;
cont=0;
max_orc=0;
max_conv=0;
men_orc=999999;
men_conv=999999;
total_orc=0;
total_conv=0;

system ("color 8E");

/*-Inicio do desenho e da moldura (pagina inicial)-----------------------------------------------------------------------------*/
for(i=1;i<=119;i++)
 	printf("\xFE");
 	
printf("\n"                                      
"\xFE\t\t                                Y@      Y,                                			      \xFE\n"
"\xFE\t\t                                 Bv     @                                     		              \xFE\n"
"\xFE\t\t                                  O    qv                                                             \xFE\n"
"\xFE\t\t                                5B7      7   P                                                        \xFE\n"
"\xFE\t\t                               .LUi       :.       .                                                  \xFE\n"
"\xFE\t\t                                  r2j,      .:r7@BMX                                                  \xFE\n"
"\xFE\t\t                                q@M. . ..:ii:,rMP;B,                                                  \xFE\n"
"\xFE\t\t                                7P :YUvr:vM: i7J.   Z7                                                \xFE\n"
"\xFE\t\t                               @       .B@vLYr      0r                                                \xFE\n"
"\xFE\t\t                             u@B7i,     1J    F:.:, EB.                                               \xFE\n"
"\xFE\t\t                              B@@i.:ir,: k   :rEB.,u: B                                               \xFE\n"
"\xFE\t\t                              @ :JYi. :O:X@r@7.:@87   JF                                              \xFE\n"
"\xFE\t\t                             i@    :irB::@ @B.:.       @                                              \xFE\n"
"\xFE\t\t                             i@      @2 Lr  @i         2,                                             \xFE\n"
"\xFE\t\t                             .B      L :8    @B        i:                                             \xFE\n"
"\xFE\t\t                              @:      :N      rBO.      i                                             \xFE\n"
"\xFE\t\t                              k@     ru         7@BL   Uu                                             \xFE\n"
"\xFE\t\t                               Br   vi            ,X@B8JZ                                             \xFE\n"
"\xFE\t\t                                @BZES.                EB  E                                           \xFE\n"
"\xFE\t\t                               B  @                   jB .X                                           \xFE\n"
"\xFE\t\t                              .@ :7                    YB :F                                          \xFE\n"
"\xFE\t\t                              8J N                      uM rS ...                                     \xFE\n"
"\xFE\t\t                              B .U                       S7 .i..N@,                                   \xFE\n"
"\xFE\t\t                             PF P                        YX    1@1                                    \xFE\n"
"\xFE\t\t                         7vJju  q:                      8P .J@BZ,                                     \xFE\n"
"\xFE\t\t                        OB@:     .ri                   u@NBBM7                                        \xFE\n"
"\xFE\t\t                         :FBB@GXjLk@:                   ::.                                           \xFE\n"
"\xFE\t\t                              .:::,                                                                   \xFE\n");

for(i=1;i<=119;i++)
 	printf("\xFE");
 	
system("pause>null");  
                                   
/*-Final do desenho e da moldura (pagina inicial)------------------------------------------------------------------------------*/ 

                                      
/*-Menu principal (onde tera as opções de navegação no progrma até selecionar a opção de sair----------------------------------*/


while(menu!=3)
{
system("cls");

printf("\xC9");

for(i=1;i<=118;i++)
	printf("\xCD");
	
printf("\xBB");	

printf("\xBA					  	  MENU PRINCIPAL                                                       \xBA");

printf("\xBA");

for(i=1;i<=118;i++)
	printf("\xCD");
	
printf("\xBA");
printf("\xBA");
	
printf("				       1-Cadastro\t"
	"2-Relatorio\t"
	"3-Sair");

printf("					       \xBA");
printf("\xBA");

for(i=1;i<=118;i++)
	printf("\xCD");

printf("\xBA");

printf("					Digite a opcao desejada [1, 2 ou 3]: ");
	scanf("%i",&menu);
		
system("cls");

/*-Menu de cadastro (Nome, Cpf, endereço e contato)----------------------------------------------------------------------------*/
	
if (menu==1)
{
//para número total de clientes cadastrados
	cont=cont+1;

	do{
       system("cls");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t");
       _sleep(120);
       printf("C\t");
       _sleep(250);
       printf("A\t");
       _sleep(250);
       printf("D\t");
       _sleep(250);
       printf("A\t");
       _sleep(250);
       printf("S\t");
       _sleep(250);
       printf("T\t");
       _sleep(250);
       printf("R\t");
       _sleep(250);
       printf("O\t");
       _sleep(250);
       printf(".\t");
       _sleep(250);
       printf(".\t");
       _sleep(250);
       printf(".\t");
       _sleep(250);
       }
       while (i<0);
       system("cls");
	
	fflush(stdin);
	
	printf("						CADASTRO DE CLIENTES\n");
	printf("\nDigite o nome: \n");
		gets(nome);
		fflush(stdin);
		
	printf("\nDigite o CPF (apenas numeros): \n");
		gets(cpf);
		fflush(stdin);
		
	printf("\nDigite o endereco: \n");
		gets(endereco);
		fflush(stdin);
		
	printf("\nDigite um numero de contato: \n");
		gets(contato);
		fflush(stdin);
			
/*-Menu de orçamentos, com o titulo de cada cardapio para selecionar-----------------------------------------------------------*/		

printf("						ORCAMENTOS");
printf("\n\n\nDigite o numero de convidados da festa do(a) Sr.(a) %s: ",nome);
	scanf("%d",&convidado);

opcao=0;	
while(opcao!=6)	
	{		
	printf("\n\n\n					ITENS PARA PREPARACAO DA FESTA");
	
	printf("\n\n\n		1-Mesao Rustico\n" 
		"		2-Mesao Frios\n" 
		"		3-Salgados\n" 
		"		4-Pista de massa\n"
		"		5-Bebidas\n" 
		"		6-Valor orcado\n");
	
		
/*-Valor digitado referente a mesa, para ver o conteudo e seus respectivos valores---------------------------------------------*/	

		
	printf("\n\n\nDigite o numero relacionado a mesa para ver o cardapio e seus respectivos valores: ");
		scanf("%i",&opcao);
		
		if (opcao==1)
			{
			printf("\n---MESAO RUSTICO---\n"
				"\n *FEIJAO TROPERO\n" 
				" *BOLINHO DE ARROZ\n" 
				" *TORRESMO\n"
				" *MANDIOCA FRITA OU COZIDA\n" 
				" *PERNIL\n" 
				" *LINGUICA\n" 
				" *PAO DE QUEIJO\n" 
				" *PELOTINHA\n"  
				" *FRANGO A PASSARINHO\n" 
				" *BATATA PALITO\n" 
				" *MINI HAMBURGUER\n" 
				" *MINI PIZZA\n"
				" R$ 50,00 (valor referente a um convidado) ");
			}
		else	
			if (opcao==2)
				{
				printf("\n---MESAO DE FRIOS---\n"
					"\n *PRESUNTO\n"
					" *MUSSARELA\n"
					" *SALAMINHO\n"
					" *SALPICAO\n"
					" *QUIBE CRU\n"
					" *MUSSE SALGADO\n"
					" *PATES DE FRANGO\n"
					" *PRESUNTO\n"
					" R$ 30,00 (valor referente a um convidado) ");
				}
		else
 			if (opcao==3)
 				{
				printf("\n---SALGADOS---\n"
					"\n *COXINHA\n"
					" *BODAS DE OURO\n"
					" *BOLINHO DE BACALHAU\n"
					" *MEDALHAO\n"
					" *EMPADA\n"
					" *PASTEL\n"
					" R$ 28,00 (valor referente a um convidado) ");
				}
		else
			if (opcao==4)
				{
				printf("\n---PISTA DE MASSA---\n"
					"\n MACARRAO-3 TIPOS(TALHARINO, GRAVATINHA E PENE)\n"
					" ACOMPANHAMENTOS:\n"
					" *PRESUNTO\n"
					" *MUSSARELA\n"
					" *MILHO\n"
					" *CALABRESA\n"
					" *BACON\n"
					" *ERVILHA\n"
					" *AZEITE\n"
					" R$ 35,00 (valor referente a um convidado) ");
				}
				
		else
			if(opcao==5)
			{
			printf("\n---BEBIDAS---\n"
			" *CAIPIRINHA\n"
			" *CERVEJA\n"
			" *REFRIGERANTE (COCA-COLA, FANTA E GUARANA ANTARTICA)\n"
			" *BATIDA DE FRUTAS\n"
			" *AGUA\n"
			" R$ 20,00 (valor referente a um convidado)");
			}
			
		else
			if(opcao==6)
				system("exit");
		
		else
			printf("\n\n				Voce digitou uma opcao invalida.Tente novamente!\n");
						
	}
	
	
/*-Menu de orçamento final, depois de visto os cardapios e os valores, será feito a somatória referente ao número total de
convidados na festa, dando no final o valor total orçado-----------------------------------------------------------------------*/	
	
printf("\n\nDigite o valor da primeira mesa escolhida por %s: R$",nome);
	scanf("%f",&mesa_1);
	
printf("\n\nDigite o valor da segunda mesa escolhida por %s: R$",nome);
	scanf("%f",&mesa_2);

total=(mesa_1+mesa_2+20)*convidado;
	
printf("\nValor orcado do Sr.(a) %s, com as mesas escolhidas mais bebidas: R$%.2f",nome,total);

printf("\n\nPrecione [ENTER]");

system("pause>null");

//para valor total de todas festas
total_orc=total_orc+total;


//para total de convidados de todas as festas
total_conv=total_conv+convidado;

}

/*-Relatório final-------------------------------------------------------------------------------------------------------------*/


//para o maior orçamento
if (total>max_orc)
	max_orc=total;

//para menor orçamento
if(total<men_orc)
	men_orc=total;
	
//para festa com maior númerode convidados
if (convidado>max_conv)
	max_conv=convidado;
	
//para festa com menor número de convidados
if (convidado<men_conv)
	men_conv=convidado;

	
//	Opção para escolha do relatório	
else
if(menu==2)
	{
	do{
       system("cls");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t");
       _sleep(200);
       printf("R\t");
       _sleep(200);
       printf("E\t");
       _sleep(200);
       printf("L\t");
       _sleep(200);
       printf("A\t");
       _sleep(200);
       printf("T\t");
       _sleep(200);
       printf("O\t");
       _sleep(200);
       printf("R\t");
       _sleep(200);
       printf("I\t");
       _sleep(200);
       printf("O\t");
       _sleep(200);
       printf(".\t");
       _sleep(200);
       printf(".\t");
       _sleep(200);
       printf(".\t");
       _sleep(200);
       }
       while (i<0);
       system("cls");
       
	printf("\nNumero total de clientes cadastrados:	%i\n"
		"\nNumero total de convidados de todas festas cadastradas: %i\n"
		"\nValor total orçado de todas festas cadastradas: R$%.2f\n"
		"\nFesta com maior preco orcado: R$%.2f\n"
		"\nFesta com menor preco orcado R$%.2f\n"
		"\nFesta com maior numero de convidados: %i\n"
		"\nFesta com menor numero de convidados:  %i\n",
		cont,total_conv,total_orc,max_orc,men_orc,max_conv,men_conv);
	
	printf("\n\nPrecione [ENTER]");

	system("pause>null");	
	}
		
/*-Opção de saída, assim que selecionado finalizará o programa-----------------------------------------------------------------*/
else	
if (menu==3)
	{
	do{
       system("cls");
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
       _sleep(300);
       printf("A ");
       _sleep(300);
       printf("MILENIO ");
       _sleep(300);
       printf("AGRADECE ");
       _sleep(300);
       printf("A ");
       _sleep(300);
       printf("SUA ");
       _sleep(300);
       printf("VISITA ");
       _sleep(300);
       printf("\n\n\t\t\t\t\tVOLTE ");
       _sleep(300);
       printf("SEMPRE");
       _sleep(300);
       printf("!");
       _sleep(300);
       printf("!");
       _sleep(300);
       printf("!");
       _sleep(300);
       }
       while (i<0);
       system("cls");
       
       printf("Precione[ENTER]");
       	return 0;
	}

else
	{
	printf("Opcao invalida. Tente Novamente!!!\n");
	system("pause");
	}
	

	}
	
	
system("pause>null");
		
}
