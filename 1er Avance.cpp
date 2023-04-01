#include <iostream>
using namespace std;
int main()
{
	int NA, opcion;
	char Nom[100], Des[50], Gen[10], clas[2], cons[10];
	cout << "Seleccione una opcion" << endl;
	cout << "1.Alta de articulos"<<endl;
	cout << "2.Modif articulos" << endl;
	cout << "3.Baja de articulos" << endl;
	cout << "4.Lista de articulos" << endl;
	cout << "5.Limpiar pantalla" << endl;
	cout << "6.Salir" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "Ingrese el nombre del articulo" << endl;
		cin>>Nom;
		cout << "Ingrese el numero del articulo" << endl;
		cin>>NA;
		cout<<"Ingrese una descripcion sobre articulo" << endl;
		cin>>Des;
		cout<<"Ingrese el genero del articulo"<<endl;
		cin>>Gen;
		cout<<"Ingrese la clasificación del articulo"<<endl;
		cin>>clas;
		cout<<"Ingrese el nombre de la consola del articulo"<<endl;
		cin>>cons;
		cout<<"Escriba un '1' para ingresar otro articulo ";
		cin >> opcion;
			if (opcion == 1)
			{
				return main();
			}
			break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		system("cls");
		break;
	case 6:
		exit(1);
		break;
	default:
		cout << "opcion invalida";
		return main();
	}
}