#include <iostream>

using namespace std;

struct Livro{
    string autor;
    string titulo;
    string edit;
    int pg;                                                                     //n�mero de pagnas
    int ano;

    void cadastro(string stautor,string sttitulo,string stedit,int stpg,int stano){
        autor = stautor;
        titulo = sttitulo;
        edit = stedit;
        pg = stpg;
        ano = stano;                                                              //st no inicio significa struct mas poderia ser qualquer coisa
    }
     void ver(){
        cout<<"AUTOR................"<<autor<<"\n";
        cout<<"TITULO..............."<<titulo<<"\n";
        cout<<"editora.............."<<edit<<"\n";
        cout<<"N�MERO DE P�GNAS....."<<pg<<"\n";
        cout<<"ANO DE LAN�AMENTO...."<<ano<<"\n\n";
        cout<<"==========================================\n";
    }
};

int main()
{
    setlocale(LC_ALL, "ptb");
	
	string autor,titulo,edit;
    int q,p,i;
    
    Livro livro1,livro2;
   
   livro1.cadastro("Andrzej Sapkowski","The Witcher - O �ltimo Desejo","WMF MARTINS FONTES",320,1993);
   livro2.cadastro("Andrzej Sapkowski","The Witcher - A espada do destino","WMF MARTINS FONTES",380,1992);
   
   //livro1.ver();
   //livro2.ver();
   
   
   
   
   
   
   
   do{
    do{                                                                         //fa�a enquanto 
    cout<<"\n====================================================";
    cout<<"\n*******  MENU PRINCIPAL  *******";
    cout<<"\n====================================================";
    cout<<"\nDIGITE O N�MERO DO PROCESSO DESEJADO";
    cout<<"\n1 - ADICIONAR LIVRO";
    cout<<"\n2 - CONSULTAR INVENT�RIO ";
    cout<<"\n3 - PEND�NCIAS";
    cout<<"\n4 - TERMOS DA BIBLIOTECA\n";
	cout<<"====================================================\n";
    cin>>p;
    system("cls");
    }while(p<=0 || p>=5);                                                        //condi��o
    
    
	
    if(p==1){                                                                    //1 variavel adicionar livros
        cout<<"**ADICIONAR LIVROS**";
        cout<<"\nTITULO DO LIVRO\n\n";
        cin>>titulo;
        cout<<"AUTOR DA OBRA\n\n";
        cin>>autor;
        cout<<"EDITORA\n\n";
        cin>>edit;
    	cout<<"\nDIGITE 1 PARA ADICIONAR OUTRO LIVRO E 2 PARA RETORNAR AO MENU\n";
    	cin>>i;}
    	
    	do{
		if(i==1){
			cout<<"**ADICIONAR LIVROS**";
        cout<<"\nTITULO DO LIVRO\n\n";
        cin>>titulo;
        cout<<"AUTOR DA OBRA\n\n";
        cin>>autor;
        cout<<"EDITORA\n\n";
        cin>>edit;
    	cout<<"\nDIGITE 1 PARA ADICIONAR OUTRO LIVRO E QUALQUER N�MERO PARA RETORNAR AO MENU\n";
    	cin>>i;}}while(i==1);
			
	system("cls");
	
    
	if(p==2){
        cout<<"\n** INVENT�RIO **\n"<<"\n";
		  livro1.ver();
   		  livro2.ver();
   
		cout<<"\nDIGITE QUALQUER N�MERO RETORNAR AO MENU\n";
    	cin>>i;
		system("cls");}
    
	if(p==3){
        cout<<"\n** PEND�NCIAS **";
		
		
		
		cout<<"\nDIGITE QUALQUER N�MERO RETORNAR AO MENU\n";
    	cin>>i;}
		system("cls");

    if(p==4){
    	cout<<"** TERMOS **";
	
		cout<<"\nDIGITE QUALQUER N�MERO RETORNAR AO MENU\n";
    	cin>>i;}
		system("cls");
	}while(i!=784654);
	
	cout<<"** FINAL DO CODIGO **";
	
	
	return 0;
}
