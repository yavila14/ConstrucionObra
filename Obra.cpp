#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int mts,materiales,manobra,utilidad;
	std::cout << "Digite el numero de metros de la obra ";
	std::cin >>mts;
	std::cout <<"Metros de la obra: " <<mts <<"\n";
	materiales=((mts+((mts*50)/100)))*3000;
	manobra=((mts+((mts*50)/100)))*4500;
	std::cout <<"Materiales: $ " <<materiales <<"\n";
	std::cout <<"Mano de Obra: $ " <<manobra <<"\n";
	utilidad=materiales+manobra;
	std::cout <<"Utilidad: $ " <<(utilidad*10)/100 <<"\n";
	std::cout <<"Valor a Cobrar: $ " <<utilidad+((utilidad*10)/100) <<"\n";
	return 0;
}
