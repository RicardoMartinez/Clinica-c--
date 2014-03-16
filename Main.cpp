#include<cstdlib>
#include<string>
#include<iostream> 
#include<fstream> //Libreria que usamos para el manejo de ficheros
#include<conio.h> 

using namespace std;
main(){
       char resp='s';
	   int opcion;  //Esta variable se usa para saber si el usuario quiere continuar usando el sistema
       do{
       ofstream entrada;
       entrada.open("pacientes.txt",ios::app); //Apertura del fichero de texto para añadir el texto al final (app)
       
       //Entrada
		cout<<"\n ------------------- Bienvendido a nuestro programa -----------------------\n ";
		cout<<"\n ------------------- Selecciones una Opcion del Menu ----------------------\n ";
		cout<<"\n |-------------------------------- MENU ----------------------------------|\n";
		cout<<"\n |------------------- 1-Ingreso de Pacientes -----------------------------|";
		cout<<"\n |------------------- 2-Consulta de Pacientes(aun no funcional) ----------|";
		cout<<"\n |------------------- 3------- -------------------------------------------|";
		cout<<"\n |------------------- 4-Salir --------------------------------------------|";
						  
		cout<<"\n\n Seleccione una Opcion del Menu: ";
		cin>>opcion;
		system("cls");
       if (opcion==1){
	       if(entrada.fail()){
	                   cout<<"El archivo no se creo correctamente"<<endl;
	                   getch();;//espera a que presiones una tecla y termina 
	                  }else{   
	                          char nombre[50];
	                          char apellido[50];
	                          int edad;
	                          
			
	                          cout<<"\n Ingrese el nombre del paciente: ";
	                          fflush(stdin);
	                          gets(nombre);
	                          cout<<"\n Ingrese el apellido del paciente: ";
	                          fflush(stdin);
	                          gets(apellido);
	                          do{
	                          cout<<"\n Ingrese la edad del paciente: ";
	                          cin>>edad;
	                          }while(edad<0); //Seguira pidiendo la edad hasta que sea mayor que cero
	                          entrada<<"\n * ------------------------------------------------------------------- *"<<endl;
	                          entrada<<"\n Nombre del paciente: "<<nombre<<" "<<apellido<<"\n";
	                          entrada<<"\n Edad del paciente: "<<edad<<" años"<<"\n";
	                          entrada<<" * ------------------------------------------------------------------- *"<<endl<<endl;
	                          entrada.close(); //Cerramos el fichero
	                              
	                          cout<<"\n Los datos han sido guardados con exito... \n";
	                          getch();;//espera a que presiones una tecla y termina 
	                          
	                          }
       }
    cout<<"\n\nDesea continuar con nuestro sistema hospitalario (S/N)?"<<endl;
    cin>>resp;//Aqui se captura el valor para saber si desea continuar usando el sistema 
    system("cls");
    }while(resp=='s' || resp=='S'); //Mientras resp sea 's' o 'S' se seguira usando el sistema correctamente
       }
