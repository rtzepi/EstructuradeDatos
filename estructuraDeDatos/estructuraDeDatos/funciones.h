
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//animatio 
#include <thread>  
#include <chrono>  

#include <cstdio>
#include <iostream>
#include <string>
#include "rlutil.h"
#include <windows.h>
#include<stdio.h>
#include<conio.h>
#include <limits>
#include <ctime> 

using namespace std;


//structura
struct Producto {
    int id;
    string nombre;
    string descripcion;
    int precio;
    int cantidad;
    int añoVenci;
    Producto* siguiente;
};


struct Persona {
    int id;
    string nombre;
    int numTelefono;
    string direccion;
    string genero;
    Persona* siguiente;
};

struct Producto2 {
    int id;
    string nombre;
    string descripcion;
    int precio;
    int cantidad;
    int añoVenci;
    Producto2* siguiente;
    Producto2* anterior;
};


struct Empleado
{
    int id;
    string nombre;
    string Apellido;
    string role;
    string direccion;
    int numTelefono;
    string  genero;
    int salario;

    int PosiX;
    int PosiY;
    Empleado* derecha;
    Empleado* Izquierda;
    Empleado* padre;
};

struct Empleado2
{
    int id;
    string nombre;
    string Apellido;
    string role;
    string direccion;
    int numTelefono;
    string  genero;
    int salario;

    int PosiX;
    int PosiY;
    int altura;
    Empleado2* derecha;
    Empleado2* Izquierda;
};



//interfaces
void introPortada();
void menuPrincipal(int y);



//pila
void menuPilaOp(int );
void ingresarDaPila(Persona*& pila);
void verDaPila(Persona*& pila);
void VaciarPila(Persona*& pila);
void eliminarDaPila(Persona*& pila);

//cola
void menuColaOp(int);
void ingresarDaCola(Persona*& frente, Persona*& fin);
void verDaCola(Persona*& frente, Persona*& fin);
void vaciarCola(Persona*& frente, Persona*& fina);
void eliminarDaCola(Persona*& frente, Persona*& fin);



//lista simple
void menuListaSimpleOp(int);
void insertListSimple(Producto*&);
void mostrarListaSimple(Producto*);
void elimnarListSimple(Producto*&);
void vaciarListaSimple(Producto*&);
void listSimInsertOp(const char*, int , int);


//lista simple circular
void menuListaCircularOp(int);
void insertListCircu( Producto*& , Producto*& );
void mostrarListCircu(Producto*);
void eliminarListCircu(Producto*&, Producto*&);
void vaciarListCircu(Producto*&, Producto*&);


//lista doblemente enlazada
void menuListaDobleOp(int);
void insertListDoble( Producto2*& , Producto2*& );
void mostrarListDoble( Producto2* );
void eliminarListDoble( Producto2*& );
void vaciarListDoble( Producto2*& );



//ARBOL ABB
void menuArbolABBOp(int);
void insertArbolABB(Empleado*& );
void mostrarArbolBB(Empleado*&);

void buscarArbolABB(Empleado* );
void RecorrerPreOrden(Empleado*& );
void RecorrerPostOrden(Empleado*& );
void RecorrerInOrden(Empleado*&);
void EliminarNodoArbol(Empleado*& );

//funcioens aux del arbol
void insertarNodoOrdenA(Empleado*&, int, string, string,string, string, string , int,int, Empleado*);

void imprimirArbolBBA(Empleado*&);
void imprimirArbolBBNodo(Empleado*&, int);

bool busquedaArbol(Empleado*, int);
bool busquedaNodoImpriAni(Empleado*, int);
bool busquedaABBImpriNodo(Empleado*, int);
void PreOrden(Empleado*);
void PostOrden(Empleado*);
void InOrden(Empleado*);
void verArbolDetaNodo(const char*, int, int);
void eliminarNodoBuscarN(Empleado*&, int);
void eliminarNodoIdABB(Empleado*);
Empleado* minimoABB(Empleado*);
void reemplarzarABB(Empleado*, Empleado*);
void destruirNodoABB(Empleado*);
void BorrarNodo(Empleado*& suprimido, Empleado*& raiz);
void Borrado_SinHijos(Empleado*& suprimido, Empleado*& raiz);
void Borrado_DosHijos(Empleado*& suprimido, Empleado*& raiz);
void Borrado_UnHijo(Empleado*& suprimido, Empleado*& hijo, Empleado*& raiz);
void Suprimir(Empleado*& suprimido);
Empleado* BuscarNodo(Empleado*& arbol, int buscado);
Empleado* minimo(Empleado* arbol);
bool EsHijoDerecho(Empleado*& hijo);



//arbol avl prototipos
void menuArbolAVLOp(int);
void insertAAVL(Empleado2*&);
void mostrarArbolAVL(Empleado2*& arbol);
void buscarArbolAVL(Empleado2*);
void RecorrerPreOrdenAVL(Empleado2*& );
void RecorrerPostOrdenAVL(Empleado2*& );
void RecorrerInOrdenAVL(Empleado2*&);
void EliminarNodoArbolAVL(Empleado2*&);

void deleteTree(Empleado2*& root);

//funciones auxiliares avl
bool busquedaNodoImpriAniAVL(Empleado2* arbol, int n);
void dibujarRamasArbolAVL(Empleado2* arbol);
void InOrdenAVL(Empleado2* arbol);
void PostOrdenAVL(Empleado2* arbol);
void PreOrdenAVL(Empleado2* arbol);


void imprimirArbolAVL(Empleado2*&);
void imprimirArbolAVLNodo(Empleado2*& arbol, int auxY);
bool busquedaArbolAVL(Empleado2* arbol, int n);
bool busquedaAVLImpriNodo(Empleado2* arbol, int n);

Empleado2* insertarNodoOrdenAAVL(Empleado2*&, int, string, string, string, string, string, int, int);
int height(Empleado2*);
int setHeight(Empleado2*);
Empleado2* rotateRight(Empleado2*);
Empleado2* rotateLeft(Empleado2* );













//other

void mensajeDatoNoEnco();
void mensajeNoHayDatosParaEli();


void showItem(const char*, int, int, bool);

void cuadro(int x1, int y1, int x2, int y2);
void cuadrolinea(int x1, int y1, int x2, int y2);
void cuadrolineaANi(int x1, int y1, int x2, int y2);
void cuadroRelle3(int , int, int);
void cuadroRelle3_1(int, int, int);
void NoHayDatos();
void izquierdaArbolBBR(int , int, int ,int );
void DerechoArbolBBR(int, int, int, int);
void dibujarRamasArbolBB(Empleado*);



#endif // !FUNCIONES_H_INCLUDED






