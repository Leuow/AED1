#include<iostream>
#include<string>
using namespace std;


class Gato{
private:
	string nome;
	float peso;
	int idade;
public:
	void corre();
	void come();
	void mia();
	void print();
	void fazAniversario();
	
	string getNome(){
	//this.nome = nome;
		return nome;
	}
	int getIdade(){
		return idade;
	}
};

void Gato::corre(){
	cout << "HAHA corre" << endl;
	peso -= 0.5;		
}

void Gato::come(){
	cout << "nhac nhac" << endl;
	peso += 0.5;
}

void Gato::mia(){
	cout << "miaau" << endl;
}

void Gato::print(){
	//cout << "nome: " << nome  << endl;
	cout << "idade: " << idade  << endl;
	cout << "peso: " << peso << endl; 
}

void Gato::fazAniversario(){
	peso += 0.5;
	idade ++;

}
int main(){
	Gato g;
	
	/*g.nome = "Garfield";	
	g.peso = 5.5;
	g.idade = 8;
	*/
	cout << g.getNome() << endl;
	
	for(int i = 0; i < 5; i++){
		g.fazAniversario();
		g.print();
	}


	
	return 0;
}


