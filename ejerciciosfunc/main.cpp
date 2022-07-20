#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;


int menu();
int factorial(int n);
double potencia(int n, int m);
double exponencial(int valor_ExP);
void segundo_despues(unsigned short int hor, unsigned short int min, unsigned short int seg);
double hipotenusa(double cateto1, double cateto2);
void cubos_numeros();
int inverso(int num);
bool capicua(int num);
int devolver_seg(int hor, int min, int seg);

int main()
{
    int opcion = 1;

    while(opcion != 0){
          opcion = menu();
          //system("pause");
          system("cls");
          switch(opcion){

            case 1:{
                    cout <<"\t EJERCICIO 1"<<endl<<endl;
                    int num = 0;
                    cout <<"De que numero desea calcular la exponencial"<<endl;
                    cout <<">";
                    cin >> num;
                    cout << "la exponencial de: "<<num<<" es "<<exponencial(num)<<endl;
            }
            break;


            case 2:{
                    cout <<"\t EJERCICIO 2"<<endl<<endl;
                    unsigned short int hora, minuto, segundo;
                    cout <<"Ingrese las horas: ";
                    cin >> hora;
                    cout <<"Ingrese los minutos: ";
                    cin >> minuto;
                    cout <<"Ingrese los segundos: ";
                    cin >> segundo;
                    cout <<endl<<endl;
                    segundo_despues(hora, minuto, segundo);
            }
            break;


            case 3:{
                    cout <<"\t EJERCICIO 3"<<endl<<endl;
                    for(int i = 0; i < 60; i++){
                        cout <<char(196);
                    }
                    cout <<endl;
                    cout <<"Tri"<<char(160)<<"ngulo \t Cateto 1 \t Cateto 2 \t Hipotenusa"<<endl;
                    for(int i = 0; i < 60; i++){
                        cout <<char(95);
                    }
                    cout <<endl;
                    cout <<"1 \t\t  3.0 \t\t  4.0 \t\t  "<<hipotenusa(3.0,4.0)<<endl;
                    cout <<"2 \t\t  5.0 \t\t  12.0 \t\t  "<<hipotenusa(5.0,12.0)<<endl;
                    cout <<"3 \t\t  8.0 \t\t  15.0 \t\t  "<<hipotenusa(8.0,15.0)<<endl;
            }
            break;


            case 4:{
                    cout <<"\t EJERCICIO 4"<<endl;
                    cubos_numeros();
            }
            break;


            case 5:{
                    cout <<"\t EJERCICIO 5"<<endl;
                    int numero = 1;
                    while(numero > 0){
                        cout <<"Ingrese un numero,(para terminar ingrese un numero negativo): ";
                        cin >> numero;
                        if(capicua(numero)){
                            cout <<"\nEL numero: "<<numero <<" es capicua"<<endl;
                        }else{
                            cout <<"\nEL numero: "<<numero <<" no es capicua"<<endl;
                        }
                    }
            }
            break;


            case 6:{
                    cout <<"\t EJERCICIO 6"<<endl;
                    int hora, minuto, segundo, tiempo1, tiempo2;
                    cout <<"Ingrese la primera hora"<<endl;
                    cout <<"Horas: ";
                    cin >> hora;
                    while(hora < 0 || hora >12){
                        cout <<"Horas: ";
                        cin >> hora;
                    }
                    cout <<"Minutos: ";
                    cin >> minuto;
                    while (minuto < 0|| minuto > 60) {
                        cout <<"Minutos: ";
                        cin >> minuto;
                    }
                    cout <<"Segundos: ";
                    cin >> segundo;
                    while(segundo < 0 || segundo > 60){
                        cout <<"Segundos: ";
                        cin >> segundo;
                    }
                    tiempo1 = devolver_seg(hora, minuto, segundo);


                    cout <<"\nIngrese la segunda hora"<<endl;
                    cout <<"Horas: ";
                    cin >> hora;
                    while(hora < 0 || hora >12){
                        cout <<"Horas: ";
                        cin >> hora;
                    }
                    cout <<"Minutos: ";
                    cin >> minuto;
                    while(minuto < 0|| minuto > 60){
                        cout <<"Minutos: ";
                        cin >> minuto;
                    }
                    cout <<"Segundos: ";
                    cin >> segundo;
                    while(segundo < 0 || segundo > 60){
                        cout <<"Segundos: ";
                        cin >> segundo;
                    }
                    tiempo2 = devolver_seg(hora, minuto, segundo);

                    cout <<"\nLa diferencia de segundos entre las horas ingresadas es:  "<<abs(tiempo2-tiempo1) <<endl;
            }
            break;


            case 0:{
                    cout <<"\t Gracias por su preferencia"<<endl;
            }
            break;


            default:{
                    cout <<"ALGO HA SALIDO MUY MAL :( "<<endl;
            }
            break;

          }//fin del switch

          system("pause");
          system("cls");
    }//fin del while principal

    return 0;
}

int menu(){

    int opcion;
    cout <<"\tMEN"<<char(233)<<endl;
    cout <<"1) Ejercicio 1"<<endl;
    cout <<"2) Ejercicio 2"<<endl;
    cout <<"3) Ejercicio 3"<<endl;
    cout <<"4) Ejercicio 4"<<endl;
    cout <<"5) Ejercicio 5"<<endl;
    cout <<"6) Ejercicio 6"<<endl;
    cout <<"0) SALIR"<<endl;
    cout <<"Opci"<<char(162)<<"n: ";
    cin >> opcion;
    while( (opcion < 0)||(opcion > 6) ){
        cout <<"Int"<<char(130)<<"ntelo de nuevo"<<endl;
        cout <<"Opci"<<char(162)<<"n: ";
        cin >> opcion;
    }


   return opcion;
}//fin de la función menú


int factorial(int n){

    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    return factorial;
}//fin de la funcion factorial


double potencia(int n, int m){
    double potencia = 1;

    for(int i = 1; i <= m; i++){
        potencia *= n;
    }

    return potencia;
}//fin de la función potencia


double exponencial(int valor_ExP){

    double suma = 0;
    for(int i = 0; i <= 10; i++){
        suma = suma + (potencia(valor_ExP,i)/factorial(i));

    }
    return suma;
}//fin dela funcion exponencial


void segundo_despues(unsigned short int hor,unsigned short int min,unsigned short int seg){
    cout <<hor<<":"<<min<<":"<<seg<<endl;
    seg = seg + 1;
    if(seg > 59){
        min = min +1;
        seg = 0;

        if(min > 59){
            hor = hor + 1;
            min = 0;
            if(hor >= 24){
                hor = 0;
                seg = 0;
            }
        }
    }
    cout <<"Luego de 1 segundo"<<endl;
    cout <<hor<<":"<<min<<":"<<seg<<endl;
}//fin de la función segundo despues


double hipotenusa(double cateto1, double cateto2){

    return hypot(cateto1,cateto2 );
}//fin de la función hipotenusa


void cubos_numeros(){
    int num1 = 0;
    int a =0, b=0, c=0;
    for(num1 = 100; num1 <= 999; num1++){
        a = num1 % 10; //primer digito
        b = (num1/10)%10; //segundo digito
        c = num1/100; //tercer digito
        if( (pow(a,3)+pow(b,3)+pow(c,3)) == num1 ){
            cout <<c<<" + "<<b<<" + "<<a<<" = "<<num1<<endl;
        }

    }

}//fin de la función cubos numeros


int inverso(int num){

    int num_aux = num, contador = 0;
    while(num_aux > 0){
        contador = contador*10 + num_aux%10;
        num_aux /= 10;
    }

    return contador;
}//fin de la función inverso


bool capicua(int num){

    bool sonIguales = false;
    int num_invertido = inverso(num);

    num_invertido == num ? sonIguales=true:sonIguales=false;

    return sonIguales;
}//fin de la función capicua


int devolver_seg(int hor, int min, int seg){

        //LAS HORAS ESTÁN EN UN FORMATO DE 12 HORAS
    int segundos_1 = 0;
    segundos_1 =  seg + min*60 + hor*3600;

    return segundos_1;
}//fin de la función devolver segundos
