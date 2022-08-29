#include <iostream> 
#include <iomanip>
using namespace std;
int main(int argc, char **argv)
{
    double *salario, *vendas;
    salario = new double();
    vendas = new double();
    cout << "Digite o salario: ";
    cin >> *salario;
    cout << "Digite o o valor das vendas: ";
	cin >> *vendas;
    cout << fixed << setprecision(2);
	cout << "Total a receber: " << *vendas*0.15+*salario;
    delete salario, vendas;
    return 0;
}