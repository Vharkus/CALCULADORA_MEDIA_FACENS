//Biblioteca padr�o.
#include <iostream>
//Biblioteca padr�o.
#include <stdlib.h>
//Evita o uso de "std::" noc c�digos.
using namespace std;
//Corpo principal.
int main() {
    //Declara��o das vari�veis.
    int RA;
    double ac1, ac2, ag, af;
    char continuar;
    //Coloquei string porque no char dava algum tipo de erro. Depois que eu escrevia o nome todas as linhas seguintes ficavam juntas. N�o sabia o que fazer D:
    string nome;
    //Codigo que dever� se repetir caso a condi��o seja cumprida.
    do{
    //Interface interativa.    
    cout << "Informe seu nome: ";
    //L� e armazena as informa��es na vari�vel.
    cin >> nome;
    //Interface interativa.
    cout << "Informe seu RA: ";
    //L� e armazena as informa��es na vari�vel.
    cin >> RA;
    //Interface interativa.
    cout << "Informe sua nota na AC1: ";
    //L� e armazena as informa��es na vari�vel.
    cin >> ac1;
    //Interface interativa.
    cout << "Informe sua nota na AC2: ";
    //L� e armazena as informa��es na vari�vel.
    cin >> ac2;
    //Interface interativa.
    cout << "Informe sua nota na AG: ";
    //L� e armazena as informa��es na vari�vel.
    cin >> ag;
    //Interface interativa.
    cout << "Informe sua nota na AF: ";
    //L� e armazena as informa��es na vari�vel.
    cin >> af;
    //Calculo feito para saber a m�dia da Facens usando seus pesos.
    double soma = ((ac1*1.5) + (ac2*3.5) + (ag*1) + (af*4));
    //Final do calculo dando a media final.
    double media = soma/10;
    //Interface sem intera��o, mostra apenas nossa nota.
    cout << "Sua m�dia foi: " << media << endl;
    //Comando que substitui o uso de v�rios "IF...ELSE" e testa a condicional.
    switch((int)media){
        //Caso nossa m�dia esteja entre 10 e 5 aqui ser� ativado.
        case 10:
        case 5:
            //Interface que aparece caso a m�dia seja maior que 5, indica aprova��o.
            cout << "Parab�ns, voc� foi aprovado!"<< endl;
            //Finaliza essa parte do c�digo.
            break;
        //Mesma ideia da anterior, mas agora com outros n�meros. Vale a pena notar que n�meros como "3.5" est�o inclusos aqui.    
        case 4:
        case 3:
            //Janela que aparece caso a media esteja entre 3 e 4.
            cout << "Foi quase! Ter� que fazer recupera��o." << endl;
            //Finaliza essa parte do c�digo caso seja acionada.
            break;
        //Mesma ideia do Else. Basicamente, se nada anterior funcionar esse daqui entre em a��o.    
        default:
            //Ultima janela do Switch, se aparecer � porque nada anterior foi cumprido.
            cout << "Voc� foi reprovado." << endl;
    }
    //Interface interativa que possibilita recome�ar tudo de novo.
    cout << "Deseja continuar? (s/n)"<< endl;
    //L� e armazena a informa��o na vari�vel.
    cin >> continuar;
    //Condi��o da repeti��o, caso a vari�vel atenda os requisitos o c�digo ficar� repetindo, ou parar se tiver algo diferente.
    }while(continuar == 's' ||continuar == 'S');
    return 0;
}