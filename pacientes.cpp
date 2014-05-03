#include<cstdlib>
#include<string>
#include<iostream> 
#include<cstring>
#include<fstream> //Libreria que usamos para el manejo de ficheros
#include<conio.h>

using namespace std;
int consultar();
main(){
	   char resp='s';
	   int opcion; 
	
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
		
      //Esta variable se usa para saber si el usuario quiere continuar usando el sistema
       do{ 
       ofstream fs;
	   fs.open("prueba.txt",ios::ate);
      
       if (opcion==1){
	           if(fs.fail()){
	                   cout<<"\n El archivo no se creo correctamente \n"<<endl;
	                   getch();;//espera a que presiones una tecla y termina 
	                  }
					  else{
	                          char nombre[50];
	                          char n_exp[50], nuevo[50], fecha_nac[10], sexo[10], estado_civil[20],dui[15], ocupacion[100], direccion[500], telefono[20], causa[1000],
							  peso[50], altura[50];
	                          char padre[100], madre[100], responsable[100], direccion_responsable[500], telefono_respo[20];
	                          char apellido[50];
	                          int edad;
	                          
	                          cout<<"\n ---------------POR FAVOR LLENAR ESTE FORMULARIO---------------\n";
	                          cout<<"\n ---------------INFORMACION DEL PACIENTE---------------\n";
							  cout<<"\n N° Expediente: ";
							  cin>>n_exp;
	                          cout<<"\n Ingrese Nombres del paciente: ";
	                          fflush(stdin);
	                          gets(nombre);
	                          cout<<"\n Ingrese Apellidos del paciente: ";
	                          fflush(stdin);
	                          gets(apellido);
	                          cout<<"\n Ingrese Sexo del paciente: ";
	                          cin>>sexo;
	                          cout<<"\n Fecha de Nacimiento (dd-mm-aa): ";
	                          cin>>fecha_nac;
	                          cout<<"\n Edad: ";
	                          cin>>edad;
	                          cout<<"\n Estado Civil: ";
	                          cin>>estado_civil;
	                          cout<<"\n DUI: ";
	                          cin>>dui;
	                          cout<<"\n Ocupacion: ";
	                          cin>>ocupacion;
	                          cout<<"\n Direccion Habitual: ";
	                          cin>>direccion;
	                          cout<<"\n Telefono: ";
	                          cin>>telefono;
	                          cout<<"\n Causa: ";
	                          cin>>causa;
	                          cout<<"\n Peso: ";
	                          cin>>peso;
	                          cout<<"\n Altura: ";
	                          cin>>altura;
	                          
	                          
	                          cout<<"\n ---------------INFORMACION DE LA FAMILIA---------------\n";
	                          cout<<"\n Nombre del Padre: ";
	                          cin>>padre;
	                          cout<<"\n Nombre de la Madre: ";
	                          cin>>madre;
	                          cout<<"\n Responsable del Paciente: ";
	                          cin>>responsable;
	                          cout<<"\n Direccion del Responsable: ";
	                          cin>>direccion_responsable;
	                          cout<<"\n Telefono: ";
	                          cin>>telefono_respo;
                   	       

	                          do{
	                          cout<<"\n Ingrese la edad del paciente: ";
	                          cin>>edad;
	                          }while(edad<0); //Seguira pidiendo la edad hasta que sea mayor que cero
	                          fs<<"\n * ------------------------------------------------------------------- *"<<endl;
	                          fs<<"\n N° Expediente: "<<n_exp;
	                          fs<<"\n Nombre del paciente: "<<nombre<<" "<<apellido;
	                          fs<<"\n Sexo del paciente: "<<sexo;
	                          fs<<"\n Fecha de Nacimiento (dd-mm-aa): "<<fecha_nac;
	                          fs<<"\n Edad: "<<edad;
	                          fs<<"\n Estado Civil: "<<estado_civil;
	                          fs<<"\n DUI: "<<dui;
	                          fs<<"\n Ocupacion: "<<ocupacion;
	                          fs<<"\n Direccion Habitual: "<<direccion;
	                          fs<<"\n Telefono: "<<telefono;
	                          fs<<"\n Causa: "<<causa;
	                          fs<<"\n Peso: "<<peso<<"lb ";
	                          fs<<"\n Altura: "<<altura<<"m \n";
	                        	                          
	                          fs<<"\n ---------------INFORMACION DE LA FAMILIA---------------\n";
	                          fs<<"\n Nombre del Padre: "<<padre;
	                          fs<<"\n Nombre de la Madre: "<<madre;
	                          fs<<"\n Responsable del Paciente: "<<responsable;
	                          fs<<"\n Direccion del Responsable: "<<direccion_responsable;
	                          fs<<"\n Telefono: "<<telefono_respo;
	                          fs<<"\n Edad del paciente: "<<edad<<" años"<<"\n";
	                          fs<<" * ------------------------------------------------------------------- *"<<endl<<endl;
	                          fs.close(); //Cerramos el fichero
	                          cout<<"\n --------------GUARDAR ARCHIVO-------------- \n";
	                          cout<<"\n Ingrese nombre de archivo mas .txt: ";
	                          cin>>nuevo;
	                          std::rename( "prueba.txt", (nuevo));
	                          cout<<"\n Los datos han sido guardados con exito... \n";
	                          getch();;//espera a que presiones una tecla y termina 
	                          
	                     
						 }   
       }
       else if(opcion==2){
       		consultar();
       }
    cout<<"\n\n Desea continuar con nuestro sistema hospitalario (S/N)?"<<endl;
    cin>>resp;//Aqui se captura el valor para saber si desea continuar usando el sistema 
    system("cls");
    }while(resp=='s' || resp=='S'); //Mientras resp sea 's' o 'S' se seguira usando el sistema correctamente
       }
       
int consultar(){
		char consultar[100];
       	cout<<"\n Ingrese el Nombre del Archivo a consultar: ";
       	cin>>consultar;
	       	
	    char *filename = consultar;
	    ifstream fichero(filename); // abrir archivo para lectura
	 
	    // verificar la apertura del archivo
	    if ( fichero.bad() ) {
		cout << "Error al tratar de abrir archivo";
		cin.get();
		return 1;
	    }
	 
	    // lectura de datos
	    while ( ! fichero.eof() ) cout << (char)fichero.get();
	    fichero.close();
	    cout << endl << "archivo leido exitosamente" << endl;
	    return 0;
}
