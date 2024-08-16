#include "funciones.h"

//version 3/////

int auxX = 0;
int raiz = NULL;


//principales
void introPortada() {
    rlutil::hidecursor();
    rlutil::setColor(11);
    //F
    rlutil::msleep(80);
    rlutil::locate(70, 20);  cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(70, 21); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(70, 22); cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(70, 23); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(70, 24); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(75);


    //A
    rlutil::locate(79, 20); cout << " " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(75);
    rlutil::locate(79, 21); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(75);
    rlutil::locate(79, 22); cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(75);
    rlutil::locate(79, 23); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(75);
    rlutil::locate(79, 24); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(70);


    //R
    rlutil::locate(88, 20); cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(88, 21); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(88, 22); cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(88, 23); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(88, 24); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(60);

    //M
    rlutil::locate(97, 20);  cout << (char)219 << (char)219 << (char)219 << "    " << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(60);
    rlutil::locate(97, 21); cout << (char)219 << (char)219 << (char)219 << (char)219 << "  " << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(60);
    rlutil::locate(97, 22); cout << (char)219 << (char)219 << " " << (char)219 << (char)219 << (char)219 << (char)219 << " " << (char)219 << (char)219 << endl;
    rlutil::msleep(60);
    rlutil::locate(97, 23); cout << (char)219 << (char)219 << "  " << (char)219 << (char)219 << "  " << (char)219 << (char)219 << endl;
    rlutil::msleep(60);
    rlutil::locate(97, 24); cout << (char)219 << (char)219 << "      " << (char)219 << (char)219 << endl;
    rlutil::msleep(70);

    //A
    rlutil::locate(109, 20); cout << " " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(109, 21); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(109, 22); cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(109, 23); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(70);
    rlutil::locate(109, 24); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(80);

    //c
    cout << endl;
    rlutil::locate(118, 20); cout << " " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(118, 21); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(118, 22); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(118, 23); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(80);
    rlutil::locate(118, 24); cout << " " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(85);

    //i
    cout << endl;
    rlutil::locate(127, 20); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(85);
    rlutil::locate(127, 21); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(85);
    rlutil::locate(127, 22); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(85);
    rlutil::locate(127, 23); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(85);
    rlutil::locate(127, 24); cout << (char)219 << (char)219 << endl;
    rlutil::msleep(95);


    //A
    rlutil::locate(131, 20); cout << " " << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(95);
    rlutil::locate(131, 21); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(95);
    rlutil::locate(131, 22); cout << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << (char)219 << endl;
    rlutil::msleep(95);
    rlutil::locate(131, 23); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(95);
    rlutil::locate(131, 24); cout << (char)219 << (char)219 << "   " << (char)219 << (char)219 << endl;
    rlutil::msleep(100);




    rlutil::setColor(4);
    rlutil::locate(70, 25); cout << R"( 
                                                                     .     |___________________________________
                                                                     |-----|- - -|''''|''''|''''|''''|''''|'##\|__
                                                                     |- -  | c++ 6    5    4    3    2    1 ### __]==----------------------
                                                                     |-----|________________________________##/|
                                                                     '     |"""""""""""""""""""""""""""""""""""`
    )" << '\n';


}
void menuPrincipal(int yM) {

    int x = 78; int y = 10;

    //dibuja una linar debajo del titulo
    rlutil::setColor(14);
    for (size_t i = 0; i < 65; i++)
    {
        rlutil::locate(x + i - 4, y + 1); cout << (char)219;
    }

    //titulo
    rlutil::setColor(3);
    rlutil::locate(x + 20, y-2); cout << "GESTION DE DATOS";
    rlutil::setColor(11);
    rlutil::locate(x + 18, y - 1); cout << "FARMACIA LA BENDICION";


    //opciones
    rlutil::setColor(9);
    showItem("   Modulo de datos Pila ->  Usuarios                        ", x + 0, y + 3,  yM == 0);
    showItem("   Modulo de datos COla ->  Usuarios                        ", x + 0, y + 5,  yM == 2);
    showItem("   Modulo de datos Lista Simple -> Productos                ", x + 0, y + 7,  yM == 4);
    showItem("   Modulo de datos Lista Circular Simple -> Productos       ", x + 0, y + 9,  yM == 6);
    showItem("   Modulo de datos Lista Doblemente Enlazada -> Productos   ", x + 0, y + 11, yM == 8);
    showItem("   Modelo de datos Arbol ABB -> Empleado                    ", x + 0, y + 13, yM == 10);
    showItem("   Modelo de datos Arbol AVL -> Empleado                    ", x + 0, y + 15, yM == 12);
    showItem("   Salir                                                    ", x + 0, y + 17, yM == 14);

    rlutil::setColor(4);
    cuadrolinea(71, 4, 142, 34);


    //detalles
    rlutil::setColor(5);
    gotoxy(71, 30); cout << (char)219; 
    gotoxy(120, 4); cout << (char)254; 
    gotoxy(121, 4); cout << (char)254; 
    gotoxy(122, 4); cout << (char)254; 
    gotoxy(123, 4); cout << (char)254;


    //pequeños detalles lineas
    rlutil::setColor(7);
    for (size_t i = 0; i < 70 ; i++)
    {
        gotoxy(70+i, 38); cout << (char)196;
    }

    rlutil::setColor(8);
    for (size_t i = 0; i < 23; i++)
    {
        gotoxy(65, 15+i); cout << (char)179;
    }

    rlutil::setColor(7);
    for (size_t i = 0; i < 4; i++)
    {
        gotoxy(65, 2 + i); cout << (char)179;
    }
    rlutil::setColor(9);
    for (size_t i = 0; i < 4; i++)
    {
        gotoxy(65, 8 + i); cout << (char)179;
    }

    rlutil::setColor(8);
    for (size_t i = 0; i < 40; i++)
    {
        gotoxy(65 + i, 1); cout << (char)196;
    }

    rlutil::setColor(7);
    for (size_t i = 0; i < 20; i++)
    {
        gotoxy(149, 5 + i); cout << (char)179;
    }

    rlutil::setColor(8);
    for (size_t i = 0; i < 20; i++)
    {
        gotoxy(130 + i, 1); cout << (char)196;
    }


    rlutil::setColor(12);
    gotoxy(30 ,  31); cout << (char)254;

    rlutil::setColor(12);
    gotoxy(165, 10); cout << (char)254;


    rlutil::setColor(13);
    gotoxy(170, 40); cout << (char)254;
}


//pila = edwin
void menuPilaOp(int yM) {
    rlutil::hidecursor();
    rlutil::setColor(10);

    int x = 65; int y = 7;


    //cuandrp del titulo
    for (size_t i = 0; i < 60; i++)
    {
        gotoxy(x+i, y); cout << (char)219;
        gotoxy(x + i, y+1); cout << (char)219;
        gotoxy(x + i, y + 2); cout << (char)219;
        gotoxy(x + i, y + 3); cout << (char)219;
    }


    //titilo
    rlutil::setBackgroundColor(10);
    rlutil::setColor(0);
    gotoxy(x+3,y+1);cout << "REGISTRO DE USUARIOS DE LA FARMACIA LA BENDICION";
    gotoxy(x+3, y + 2); cout << "Pila";
    rlutil::setBackgroundColor(0);

    //cuandro menu
    rlutil::setColor(6);
    cuadro(x, y+4, 150, 25);

    //opciones
    rlutil::setColor(9);
    showItem("   Ingresar Usuario                          ", x +  10, y + 6, yM == 0);
    showItem("   Ver Usuarios                              ", x + 10, y + 8, yM == 2);
    showItem("   Eliminar todos los Usuarios               ", x +  10, y + 10, yM == 4);
    showItem("   Eliminar un Usuario                       ", x + 10, y + 12, yM == 6);
    showItem("   Regresar                                  ", x +  10, y + 14, yM == 8);

}

void ingresarDaPila(Persona*& pila) {
    rlutil::cls();rlutil::showcursor();

    int x = 65; int y = 7;
    Persona* nuevo_Usuario = new Persona();


    rlutil::setColor(3);
    cuadrolinea(71, 5, 142, 9);
    rlutil::setColor(11); 
    rlutil::locate(90, 7); cout << "Ingrese los datos del Nuevo Cliente" << endl;


    rlutil::setColor(9);
    rlutil::locate(72, 11); cout << "ID: ";
    rlutil::locate(72, 14); cout << "NUMERO TELEFONO";
    rlutil::locate(72, 17); cout << "NOMBRE";
    rlutil::locate(72, 20); cout << "DIRECCION";
    rlutil::locate(72, 23); cout << "GENERO M/F";


    rlutil::setColor(10);
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 12); cout << (char)220;
    }

    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72+i, 15); cout << (char)220;
    }
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 18); cout << (char)220;
    }

    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 21); cout << (char)220;
    }
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 24); cout << (char)220;
    }


    rlutil::setColor(3);
    rlutil::locate(95, 11); cin >> nuevo_Usuario->id;
    rlutil::locate(95, 14); cin >> nuevo_Usuario->numTelefono;
    cin.ignore();
    rlutil::locate(95, 17); getline(cin, nuevo_Usuario->nombre);
    rlutil::locate(95, 20); getline(cin, nuevo_Usuario->direccion);
    rlutil::locate(95, 23); getline(cin, nuevo_Usuario->genero);


    nuevo_Usuario->siguiente = pila;
    pila = nuevo_Usuario;
    system("cls");
    verDaPila(pila);
};

void verDaPila(Persona*& pila) {
    system("cls");int e = 0; 
    struct Persona* temporal = pila;

    if (temporal != NULL)
    {

        rlutil::setColor(6);
        for (size_t i = 0; i < 70; i++)
        {
            rlutil::locate(68 + i, 5); cout << (char)219;
            rlutil::locate(68 + i, 6); cout << (char)219;
            rlutil::locate(68 + i, 7); cout << (char)219;
        }


        rlutil::setColor(0);
        rlutil::setBackgroundColor(6);
        rlutil::locate(85, 6); cout << "INFORMACION DE LOS USUARIOS->PILA" << endl;
        rlutil::setBackgroundColor(0);

        while (temporal != NULL)
        {
            rlutil::setColor(7);
            rlutil::locate(70, 10 + e); cout << "ID: " << endl;
            rlutil::setColor(2);
            rlutil::locate(90, 10 + e); cout << temporal->id << endl;

            rlutil::setColor(7);
            rlutil::locate(70, 11 + e); cout << "NOMBRE: " << endl;
            rlutil::setColor(2);
            rlutil::locate(90, 11+ e); cout << temporal->nombre << endl;


            rlutil::setColor(7);
            rlutil::locate(70, 12 + e); cout << "DIRECCION: " << endl;
            rlutil::setColor(2);
            rlutil::locate(90, 12 + e); cout << temporal->direccion << endl;


            rlutil::setColor(7);
            rlutil::locate(70, 13 + e); cout << "NUMERO TELEFONO: " << endl;
            rlutil::setColor(2);
            rlutil::locate(90, 13 + e); cout << temporal->numTelefono << endl;


            rlutil::setColor(7);
            rlutil::locate(70, 14 + e); cout << "MEMORIA: " << endl;
            rlutil::setColor(2);
            rlutil::locate(90, 14 + e); cout << temporal << endl;


            rlutil::setColor(7);
            rlutil::locate(70, 15 + e); cout << "MEMORIA ANTE: " << endl;
            rlutil::setColor(2);
            rlutil::locate(90, 15 + e); cout << temporal->siguiente << endl;

            if (temporal == pila)
            {
                rlutil::setColor(13);
                rlutil::locate(60, 12 + e);cout << "Ultimo" << endl;
                rlutil::locate(60, 13 + e);cout << "Dato" << endl;
            }

            if (temporal->siguiente == NULL)
            {
                rlutil::setColor(13);
                rlutil::locate(60, 12 + e);cout << "Primer" << endl;
                rlutil::locate(60, 13 + e);cout << "Dato" << endl;
            }
            temporal = temporal->siguiente;
            rlutil::setColor(3);
            cuadrolinea(55, 9 + e, 150, 16 + e);
            e = e + 9;
        }
        rlutil::setColor(8);
        cout << endl << endl;
        system("pause");
    }
    else
    {
        mensajeDatoNoEnco();
    }
    rlutil::cls();
};

void VaciarPila(Persona*& pila) {
    rlutil::cls();
    while (pila != NULL)
    {
        system("cls");
        Persona* aux = pila;

        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL USUARIO CON EL NOMBRE: ";
        rlutil::setColor(2);
        gotoxy(115, 16); cout << aux->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);

        pila = aux->siguiente;
        delete aux;

        rlutil::msleep(1000);
        system("cls");
    }

    rlutil::setColor(14);
    gotoxy(80, 16); cout << "TODOS LOS DATOS HAN SIDO ELIMINADOS\n";
    cout << endl; cout << endl;
    rlutil::setColor(8);

    cout << endl;    cout << endl;
    system("pause");
    rlutil::cls();
};

void eliminarDaPila(Persona*& pila) {
    system("cls");
    if (pila != NULL)
    {
        system("cls");
        Persona* aux = pila;


        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL USUARIO CON EL NOMBRE: ";
        rlutil::setColor(2);
        gotoxy(115, 16); cout << aux->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);

        pila = aux->siguiente;
        delete aux;

        cout << endl; cout << endl;
        rlutil::setColor(8);
        system("pause");
        system("cls");
        verDaPila(pila);
        return;
    }
    mensajeNoHayDatosParaEli();
    system("cls");
};



//cola = jeniger
void menuColaOp(int  yM) {

    rlutil::hidecursor();
    rlutil::setColor(10);
    int x = 65; int y = 7;


    //cuandrp del titulo
    for (size_t i = 0; i < 60; i++)
    {
        gotoxy(x + i, y); cout << (char)219;
        gotoxy(x + i, y + 1); cout << (char)219;
        gotoxy(x + i, y + 2); cout << (char)219;
        gotoxy(x + i, y + 3); cout << (char)219;
    }


    //titilo
    rlutil::setBackgroundColor(10);
    rlutil::setColor(0);
    gotoxy(x + 3, y + 1); cout << "REGISTRO DE USUARIOS DE LA FARMACIA LA BENDICION";
    gotoxy(x + 3, y + 2); cout << "COLA";
    rlutil::setBackgroundColor(0);

    //cuandro menu
    rlutil::setColor(6);
    cuadro(x, y + 4, 150, 25);


    //opciones
    rlutil::setColor(9);
    showItem("   Ingresar Usuario                          ", x + 10, y + 6, yM == 0);
    showItem("   Ver Usuarios                              ", x + 10, y + 8, yM == 2);
    showItem("   Eliminar todos los Usuarios               ", x + 10, y + 10, yM == 4);
    showItem("   Eliminar un Usuario                       ", x + 10, y + 12, yM == 6);
    showItem("   Regresar                                  ", x + 10, y + 14, yM == 8);

};

void ingresarDaCola(Persona*& frente, Persona*& fin) {
    rlutil::cls();rlutil::showcursor();

    Persona* nuevo_Usuario = new Persona();

    rlutil::setColor(3);
    cuadrolinea(71, 5, 142, 9);
    rlutil::setColor(11);
    rlutil::locate(90, 7); cout << "Ingrese los datos del Nuevo Cliente" << endl;


    rlutil::setColor(9);
    rlutil::locate(72, 11); cout << "ID: ";
    rlutil::locate(72, 14); cout << "NUMERO TELEFONO";
    rlutil::locate(72, 17); cout << "NOMBRE";
    rlutil::locate(72, 20); cout << "DIRECCION";
    rlutil::locate(72, 23); cout << "GENERO M/F";


    rlutil::setColor(10);
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 12); cout << (char)220;
    }

    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 15); cout << (char)220;
    }
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 18); cout << (char)220;
    }

    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 21); cout << (char)220;
    }
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(72 + i, 24); cout << (char)220;
    }

    rlutil::setColor(3);
    rlutil::locate(95, 11); cin >> nuevo_Usuario->id;
    rlutil::locate(95, 14); cin >> nuevo_Usuario->numTelefono;
    cin.ignore();
    rlutil::locate(95, 17); getline(cin, nuevo_Usuario->nombre);
    rlutil::locate(95, 20); getline(cin, nuevo_Usuario->direccion);
    rlutil::locate(95, 23); getline(cin, nuevo_Usuario->genero);

    nuevo_Usuario->siguiente = NULL;

    if (frente == NULL)
    {
        frente = nuevo_Usuario;
    }
    else {
        fin->siguiente = nuevo_Usuario;
    }

    fin = nuevo_Usuario;
    system("cls");
    verDaCola(frente, fin);
};

void verDaCola(Persona*& frente, Persona*& fin) {
    rlutil::cls();int e = 0;
    Persona* aux = frente;

    if (frente != NULL)
    {

        rlutil::setColor(6);
        for (size_t i = 0; i < 70; i++)
        {
            rlutil::locate(68 + i, 5); cout << (char)219;
            rlutil::locate(68 + i, 6); cout << (char)219;
            rlutil::locate(68 + i, 7); cout << (char)219;
        }

        rlutil::setColor(0);
        rlutil::setBackgroundColor(6);
        rlutil::locate(85, 6); cout << "INFORMACION DE LOS USUARIOS->Cola" << endl;
        rlutil::setBackgroundColor(0);

        while (aux != NULL)
        {
            rlutil::setColor(7);
            rlutil::locate(5 + e, 15); cout << "Id";
            rlutil::locate(5 + e, 16); cout << "Nombre";
            rlutil::locate(5 + e, 17); cout << "Genero";
            rlutil::locate(5 + e, 18); cout << "Direccion";
            rlutil::locate(5 + e, 19); cout << "Telefono";
            rlutil::locate(5 + e, 20); cout << "Dire sig";
            rlutil::locate(5 + e, 21); cout << "Dire act";


            rlutil::setColor(2);
            rlutil::locate(17 + e, 15); cout << aux->id;
            rlutil::locate(17 + e, 16); cout << aux->nombre;
            rlutil::locate(17 + e, 17); cout << aux->genero;
            rlutil::locate(17 + e, 18); cout << aux->direccion;
            rlutil::locate(17 + e, 19); cout << aux->numTelefono;
            rlutil::locate(17 + e, 20); cout << aux->siguiente;
            rlutil::locate(17 + e, 21); cout << aux;

            rlutil::setColor(3);
            cuadrolinea(3 + e, 14, 40 + e, 22);
            aux = aux->siguiente;
            cout << endl;    cout << endl;  cout << endl;
            e = e + 40;
        }
        system("pause");
    }
    else
    {
        mensajeDatoNoEnco();
    }
    cout << endl;    cout << endl;  cout << endl;
    system("cls");
};

void vaciarCola(Persona*& frente, Persona*& fin) {
    rlutil::cls();
    if (frente != NULL)
    {
        while (frente != NULL)
        {
            system("cls");
            Persona* aux = frente;

            rlutil::setColor(14);
            gotoxy(70, 16); cout << "HEMOS ELIMINADO EL USUARIO CON EL NOMBRE: ";
            rlutil::setColor(2);
            gotoxy(115, 16); cout << frente->nombre;
            rlutil::setColor(3);
            cuadro(65, 13, 150, 19);

            frente = frente->siguiente;
            delete aux;

            rlutil::msleep(1000);
            system("cls");
        }
        fin = NULL;

        rlutil::setColor(14);
        gotoxy(80, 16); cout << "TODOS LOS DATOS HAN SIDO ELIMINADOS\n";
        cout << endl; cout << endl;
        rlutil::setColor(8);

        system("pause");
    }
    else
    {
        mensajeNoHayDatosParaEli();
    }
        cout << endl; cout << endl;system("cls");
};

void eliminarDaCola(Persona*& frente, Persona*& fin) {
    rlutil::cls();
    if (frente != NULL)
    {
        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL USUARIO CON EL NOMBRE: ";
        rlutil::setColor(2);
        gotoxy(115, 16); cout << frente->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);

        Persona* aux = frente;
        if (frente == fin) {
            frente = NULL;
            fin = NULL;
        }
        else {
            frente = frente->siguiente;
        }
        delete aux;
        cout << endl; cout << endl;
        rlutil::setColor(8);
        system("pause");
        verDaCola(frente, fin);
    }
    else
    {
        mensajeNoHayDatosParaEli();
    }
    system("cls");
};






//lista simple = royer
void menuListaSimpleOp(int yM) {

    rlutil::hidecursor();
    rlutil::setColor(10);
    int x = 65; int y = 7;


    //cuandrp del titulo
    for (size_t i = 0; i < 60; i++)
    {
        gotoxy(x + i, y); cout << (char)219;
        gotoxy(x + i, y + 1); cout << (char)219;
        gotoxy(x + i, y + 2); cout << (char)219;
        gotoxy(x + i, y + 3); cout << (char)219;
    }


    //titilo
    rlutil::setBackgroundColor(10);
    rlutil::setColor(0);
    gotoxy(x + 3, y + 1); cout << "REGISTRO DE MEDICAMENTOS DE LA FARMACIA LA BENDICION";
    gotoxy(x + 3, y + 2); cout << "LISTA SIMPLE";
    rlutil::setBackgroundColor(0);

    //cuandro menu
    rlutil::setColor(6);
    cuadro(x, y + 4, 150, 25);


    //opciones
    rlutil::setColor(9);
    showItem("   Ingresar nuevo Medicamento                ", x + 10, y + 6, yM == 0);
    showItem("   Ver Medicamentos disponibles              ", x + 10, y + 8, yM == 2);
    showItem("   Eliminar un Medicamento                   ", x + 10, y + 10, yM == 4);
    showItem("   Eliminar Todos los Medicamentos           ", x + 10, y + 12, yM == 6);
    showItem("   Regresar                                  ", x + 10, y + 14, yM == 8);
};

void insertListSimple(Producto*& lista) {

    rlutil::cls(); rlutil::showcursor();
    int xG = 0;int yG = 5;
    Producto* nuevoNodo = new Producto();

    rlutil::setColor(5);
    cuadroRelle3(xG, yG, 60 );
    rlutil::setColor(0);
    rlutil::setBackgroundColor(5);
    rlutil::locate(xG+85, yG+3); cout << "INSERTAR NUEVO MEDICAMENTO EN LA LISTA" << endl;
    rlutil::setBackgroundColor(0);

    listSimInsertOp("Id: ",                    xG+ 75,yG+  8 );
    listSimInsertOp("Nombre: ",                xG+ 75,yG+  11);
    listSimInsertOp("Descripcion: ",           xG+ 75,yG+  14);
    listSimInsertOp("Precio Q: ",              xG+ 75,yG+  17);
    listSimInsertOp("Ano de Vecimiento : ",    xG + 75, yG + 20);
    listSimInsertOp("Cantidad Ingresados : ",  xG + 75, yG + 23);


    rlutil::setColor(2);
    rlutil::locate( xG+ 105, yG+ 8); cin >> nuevoNodo->id;
    cin.ignore();
    rlutil::locate( xG+ 100, yG+ 11); getline(cin, nuevoNodo->nombre);
    rlutil::locate( xG+ 100, yG+ 14); getline(cin, nuevoNodo->descripcion);
    rlutil::locate( xG+ 100, yG+ 17); cin >> nuevoNodo->precio;
    rlutil::locate(xG + 100, yG + 20); cin >> nuevoNodo->añoVenci;
    rlutil::locate(xG + 100, yG + 23); cin >> nuevoNodo->cantidad;



    Producto* aux1 = lista;
    Producto* aux2 = NULL;

    while ((aux1 != NULL) && (aux1->id < nuevoNodo->id))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1)
    {
        lista = nuevoNodo;
    }
    else
    {
        aux2->siguiente = nuevoNodo;
    }
    nuevoNodo->siguiente = aux1;

    system("cls");
    mostrarListaSimple(lista);
};

void mostrarListaSimple(Producto* lista) {
    system("cls");
    int xG = 0; int yG = 3;
    Producto* actual = new Producto();
    actual = lista;

    //cada nodo se suma 24
    int e = 0;



    if (actual != NULL)
    {
        rlutil::setColor(4);
        cuadroRelle3(xG, yG, 60);
        rlutil::setColor(0);
        rlutil::setBackgroundColor(4);
        rlutil::locate(xG + 83, yG + 3); cout << "INFORMACION DE LOS MEDICAMENTOS DISPONIBLES";
        rlutil::setBackgroundColor(0);

        while (actual != NULL) {

            rlutil::setColor(7);
            rlutil::locate(5 + e, yG+ 15); cout << "Id";
            rlutil::locate(5 + e, yG+ 16); cout << "Nombre";
            rlutil::locate(5 + e, yG+ 17); cout << "Descripcion";
            rlutil::locate(5 + e, yG+ 18); cout << "Precio Q";
            rlutil::locate(5 + e, yG+ 19); cout << "Ano Vecimi";
            rlutil::locate(5 + e, yG+20); cout << "Cantidad";
            rlutil::locate(5 + e, yG+21); cout << "Dire sig";

            rlutil::setColor(2);
            rlutil::locate(22 + e, yG+ 15); cout << actual->id;
            rlutil::locate(22 + e, yG+ 16); cout << actual->nombre;
            rlutil::locate(22 + e, yG+ 17); cout << actual->descripcion;
            rlutil::locate(22 + e, yG+ 18); cout << actual->precio;
            rlutil::locate(22 + e, yG + 19); cout << actual->añoVenci;
            rlutil::locate(22 + e, yG + 20); cout << actual->cantidad;
            rlutil::locate(22 + e, yG+ 21); cout << actual->siguiente;

            rlutil::setColor(13);
            rlutil::locate(17 + e, yG + 13); cout << actual;

            rlutil::setColor(3);
            cuadrolinea(3 + e, yG+ 14,  45 + e, 25);

            actual = actual->siguiente;
            if (actual != NULL)
            {
                rlutil::setColor(6);
                rlutil::locate(46 + e,yG+ 18); cout << (char)196 << (char)196 << (char)196<< (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << ">";
            }
            e = e + 53;
        }
    }
    else
    {
        NoHayDatos();
    }
        rlutil::setColor(8);
        cout << endl;cout << endl;
        system("pause");system("cls");
};

void elimnarListSimple(Producto*& lista) {
    //elimina el primer nodo
     system("cls");

    if (lista != NULL)
    {
        Producto* aux = lista;

        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL MEDICAMENTO CON EL NOMBRE : ";
        rlutil::setColor(2);
        gotoxy(120, 16); cout << aux->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);

        lista = aux->siguiente;
        delete aux;

        rlutil::msleep(1000);
        system("cls");

        mostrarListaSimple(lista);
        system("cls");
    }
    else
    {
        NoHayDatos();
        cout << endl; cout << endl;
        rlutil::setColor(8);
        system("pause");
        system("cls");
    }
}

void vaciarListaSimple(Producto*& lista) {
    rlutil::cls();

    if (lista == NULL)
    {
        NoHayDatos();
        rlutil::setColor(8);
        system("pause");
        system("cls");
        return;
    }
    while ( lista != NULL )
    {
        Producto* aux = lista;
        mostrarListaSimple(aux);
        lista = aux->siguiente;
        delete aux;
    }
    system("cls");
};



//lista simple circular = royer
void menuListaCircularOp(int yM) {
    rlutil::hidecursor();

    int x = 77; int y = 11;
    rlutil::setColor(13);
    for (size_t i = 0; i < 65; i++)
    {
        rlutil::locate(x + i - 4, y + 1); cout << (char)220;
    }
    rlutil::setColor(11);
    rlutil::locate(x -5, y-1); cout << "GESTION DE INFORMACION DE MEDICAMENTOS DE LA FAMARICA LA BENDICION";
    rlutil::setColor(10);
    rlutil::locate(x-5, y ); cout << "Lista circular simple";

    rlutil::setColor(9);
    showItem("   Ingresar un Nuevo Medicamento                      ", x + 4, y + 3, yM == 0);
    showItem("   Ver Medicamentos disponibles                       ", x + 4, y + 5, yM == 2);
    showItem("   Eliminar un Medicamento                            ", x + 4, y + 7, yM == 4);
    showItem("   Eliminar todos los Medicamentos                    ", x + 4, y + 9, yM == 6);
    showItem("   Regresar                                           ", x + 4, y + 11, yM == 8);
}

void insertListCircu( Producto*& cabeza, Producto*& ultimo ) {
    rlutil::cls();rlutil::showcursor();
    int xG = 0; int yG = 5;
    Producto* nuevoNodo = new Producto();

    rlutil::setColor(10);
    cuadroRelle3(xG, yG, 60);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(xG + 90, yG + 3); cout << "INSERTAR UN NUEVO MEDICAMENTO" << endl;
    rlutil::setBackgroundColor(0);


    listSimInsertOp("Id: ",                   xG + 75, yG + 8);
    listSimInsertOp("Nombre: ",               xG + 75, yG + 11);
    listSimInsertOp("Descripcion: ",          xG + 75, yG + 14);
    listSimInsertOp("Precio Q: ",             xG + 75, yG + 17);
    listSimInsertOp("Ano de Vecimiento : ",   xG + 75, yG + 20);
    listSimInsertOp("Cantidad Ingresados : ", xG + 75, yG + 23);

    rlutil::setColor(2);
    rlutil::locate(xG + 100, yG + 8); cin >> nuevoNodo->id;
    cin.ignore();
    rlutil::locate(xG + 100, yG + 11); getline(cin, nuevoNodo->nombre);
    rlutil::locate(xG + 100, yG + 14); getline(cin, nuevoNodo->descripcion);
    rlutil::locate(xG + 100, yG + 17); cin >> nuevoNodo->precio;
    rlutil::locate(xG + 100, yG + 20); cin >> nuevoNodo->añoVenci;
    rlutil::locate(xG + 100, yG + 23); cin >> nuevoNodo->cantidad;

    if ( cabeza == NULL)
    {
        cabeza = nuevoNodo;
        cabeza->siguiente = cabeza;
        ultimo = cabeza;
    }
    else if (nuevoNodo->id < cabeza->id )
    {
        ultimo->siguiente = nuevoNodo;
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }else if( nuevoNodo->id > ultimo->id )
    {
        ultimo->siguiente = nuevoNodo;
        nuevoNodo->siguiente = cabeza;
        ultimo = nuevoNodo;
    }
    else
    {
        Producto* actual = cabeza->siguiente;
        Producto* anterior = cabeza;
        while (actual != cabeza &&  actual->id < nuevoNodo->id)
        {
            anterior = actual;
            actual = actual->siguiente;
        }
        anterior->siguiente = nuevoNodo;
        nuevoNodo->siguiente = actual;
    }
    mostrarListCircu(cabeza);
    system("cls");
};

void mostrarListCircu(Producto* cabeza) {
    system("cls");
    int xG = 0; int yG = 3;
    Producto* actual = new Producto();
    actual = cabeza;
    //cada nodo se suma 45
    int e = 0;





    //condicion si tenesmo dato en la lista
    if (cabeza != NULL)
    {

        rlutil::setColor(4);
        cuadroRelle3(xG, yG, 60);
        rlutil::setColor(0);
        rlutil::setBackgroundColor(4);
        rlutil::locate(xG + 83, yG + 3); cout << "INFORMACION DE LOS MEDICAMENTOS DISPONIBLES";
        rlutil::setBackgroundColor(0);

        int e = 0; int ele = 0;
        do {
            ele++;


            rlutil::setColor(7);
            rlutil::locate(5 + e, yG + 15); cout << "Id";
            rlutil::locate(5 + e, yG + 16); cout << "Nombre";
            rlutil::locate(5 + e, yG + 17); cout << "Descripcion";
            rlutil::locate(5 + e, yG + 18); cout << "Precio Q";
            rlutil::locate(5 + e, yG + 19); cout << "Ano Vecimi";
            rlutil::locate(5 + e, yG + 20); cout << "Cantidad";
            rlutil::locate(5 + e, yG + 21); cout << "Dire sig";



            rlutil::setColor(2);
            rlutil::locate(22 + e, yG + 15); cout << actual->id;
            rlutil::locate(22 + e, yG + 16); cout << actual->nombre;
            rlutil::locate(22 + e, yG + 17); cout << actual->descripcion;
            rlutil::locate(22 + e, yG + 18); cout << actual->precio;
            rlutil::locate(22 + e, yG + 19); cout << actual->añoVenci;
            rlutil::locate(22 + e, yG + 20); cout << actual->cantidad;
            rlutil::locate(22 + e, yG + 21); cout << actual->siguiente;

            rlutil::setColor(13);
            rlutil::locate(17 + e, yG + 13); cout << actual;

            rlutil::setColor(3);
            cuadrolinea(3 + e, yG + 14, 45 + e, 25);


            actual = actual->siguiente;

            //dibujar conecion entre nodos
            if (actual != cabeza) {
                rlutil::setColor(6);
                rlutil::locate(46 + e, yG + 18); cout << (char)196 << (char)196  << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << ">";
            }
            //cuando el nodo es  igal a inciicon 
            if (actual == cabeza)
            {
                rlutil::setColor(6);
                rlutil::locate(46 + e, yG+ 18);  cout << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196;
                Sleep(50);
                rlutil::locate(53 + e, yG+ 18);  cout << (char)191;
                Sleep(50);
                rlutil::locate(53 + e, yG+ 19); cout << (char)179;
                Sleep(50);
                rlutil::locate(53 + e, yG+ 20); cout << (char)179;
                Sleep(50);
                rlutil::locate(53 + e, yG+ 21); cout << (char)179;
                Sleep(50);
                rlutil::locate(53 + e, yG+ 22); cout << (char)179;
                Sleep(50);
                rlutil::locate(53 + e, yG + 23); cout << (char)179;
                Sleep(50);
                rlutil::locate(53 + e, yG + 24); cout << (char)179;
                Sleep(50);
                rlutil::locate(53 + e, yG + 25); cout << (char)179;
                Sleep(50);
                rlutil::locate(53 + e, yG+ 25); cout << (char)217;
                Sleep(50);
                for (int i = 0; i < (e + 30); i++)
                {
                    rlutil::locate(52 + e - i, yG+ 25); cout << (char)196;
                    Sleep(30);
                }
                rlutil::locate(23, yG+ 25); cout << (char)192;
                Sleep(50);
                rlutil::locate(23, yG+ 24); cout << "^";
                Sleep(50);
            }
            e = e + 53;
        } while (actual != cabeza);
    }
    else
    {

        NoHayDatos();
        Sleep(1000);
    }
    cout << endl; cout << endl; cout << endl; cout << endl; cout << endl; cout << endl;
    rlutil::setColor(8);
    system("pause");
    system("cls");

};

void eliminarListCircu(Producto*& cabeza, Producto*& ultimo) {
    //elimina el primer nodo
    system("cls");
    if ( ultimo ==NULL )
    {
        NoHayDatos();
        rlutil::msleep(1000);
        rlutil::cls();
        return;
    }

    if (cabeza == ultimo)
    {

        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL MEDICAMENTO CON EL NOMBRE : ";
        rlutil::setColor(2);
        gotoxy(120, 16); cout << cabeza->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);


        delete ultimo;
        ultimo = NULL;
        cabeza = NULL;

        Sleep(1000);
        mostrarListCircu(cabeza);
        return;
    }



    Producto* aux = cabeza->siguiente;

    rlutil::setColor(14);
    gotoxy(70, 16); cout << "HEMOS ELIMINADO EL MEDICAMENTO CON EL NOMBRE : ";
    rlutil::setColor(2);
    gotoxy(120, 16); cout << cabeza->nombre;
    rlutil::setColor(3);
    cuadro(65, 13, 150, 19);


    ultimo->siguiente = aux;
    delete cabeza;
    cabeza = aux;
    aux = NULL;



    cout << endl; cout << endl;
    Sleep(2000);
    mostrarListCircu(cabeza);
};

void vaciarListCircu(Producto*& cabeza, Producto*& ultimo) {
    system("cls");
    if (cabeza == NULL) {
        NoHayDatos();
        rlutil::msleep(1000);
        rlutil::cls();
        return;
    }

    Producto* actual = cabeza;
    Producto* siguiente;
    int e = 0; int ele = 0;
    do {
        siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    } while (actual != cabeza);
    cabeza = NULL;
    ultimo = NULL;

    rlutil::setColor(14);
    gotoxy(90, 15); cout << "SE ELIMINARON TODOS LOS NODOS DE LA LISTA CIRCULAR";
    Sleep(2500);
    cout << endl; cout << endl;
    rlutil::setColor(8);
    system("cls");
};




//lista doblemente enlazada = royer

void menuListaDobleOp(int yM) {
    rlutil::hidecursor();

    int x = 77; int y = 11;
    rlutil::setColor(13);
    for (size_t i = 0; i < 65; i++)
    {
        rlutil::locate(x + i - 4, y + 1); cout << (char)220;
    }
    rlutil::setColor(3);
    rlutil::locate(x + 13, y-2); cout << "MENU GESTION DE MEDICAMENTOS";
    rlutil::setColor(6);
    rlutil::locate(x + 15, y - 1); cout << "Lista Doblememte Enlazada";

    rlutil::setColor(9);
    showItem("   Ingresar un Nuevo Medicamento                  ", x + 4, y + 3, yM == 0);
    showItem("   Ver Medicamentos                               ", x + 4, y + 5, yM == 2);
    showItem("   Eliminar un Medicamento                        ", x + 4, y + 7, yM == 4);
    showItem("   Eliminar todos los Medicamentos                ", x + 4, y + 9, yM == 6);
    showItem("   Regresar                                       ", x + 4, y + 11, yM == 8);
}

void insertListDoble( Producto2*&primero, Producto2*&ultimo ) {
    rlutil::cls(); rlutil::showcursor();
    int xG = 0; int yG = 5;
    Producto2* nuevoNodo = new Producto2();

    rlutil::setColor(10);
    cuadroRelle3(xG, yG, 60);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(xG + 90, yG + 3); cout << "INSERTAR UN NUEVO MEDICAMENTO" << endl;
    rlutil::setBackgroundColor(0);

    listSimInsertOp("Id: ", xG + 75, yG + 8);
    listSimInsertOp("Nombre: ", xG + 75, yG + 11);
    listSimInsertOp("Descripcion: ", xG + 75, yG + 14);
    listSimInsertOp("Precio Q: ", xG + 75, yG + 17);
    listSimInsertOp("Ano de Vecimiento : ", xG + 75, yG + 20);
    listSimInsertOp("Cantidad Ingresados : ", xG + 75, yG + 23);

    rlutil::setColor(2);
    rlutil::locate(xG + 100, yG + 8); cin >> nuevoNodo->id;
    cin.ignore();
    rlutil::locate(xG + 100, yG + 11); getline(cin, nuevoNodo->nombre);
    rlutil::locate(xG + 100, yG + 14); getline(cin, nuevoNodo->descripcion);
    rlutil::locate(xG + 100, yG + 17); cin >> nuevoNodo->precio;
    rlutil::locate(xG + 100, yG + 20); cin >> nuevoNodo->añoVenci;
    rlutil::locate(xG + 100, yG + 23); cin >> nuevoNodo->cantidad;


    nuevoNodo->siguiente = NULL;
    nuevoNodo->anterior = NULL;


    //logica
    if (primero == NULL)
    {
        primero = nuevoNodo;
        system("cls");
        return;
    }

    Producto2* actual = primero;
    Producto2* anterior = NULL;
    while ((actual != NULL) && (actual->id < nuevoNodo->id))
    {
        anterior = actual;
        actual = actual->siguiente;
    }

    if ( actual == primero )///cuando el nodo se ingresa al frente
    {
        nuevoNodo->siguiente = primero;
        primero->anterior = nuevoNodo;
        primero = nuevoNodo;

    }
    else
    {
        anterior->siguiente = nuevoNodo;
        nuevoNodo->anterior = anterior;

        nuevoNodo->siguiente = actual;
        if (actual != NULL)
        {
            actual->anterior = nuevoNodo;
        }
    }


    mostrarListDoble(primero);
    system("cls");
}

void mostrarListDoble( Producto2*primero ) {
    system("cls");

    if ( primero != NULL)
    {

        Producto2* actual = new Producto2();
        actual = primero;
        int xG = 0; int yG = 3;
        int e = 0;


        rlutil::setColor(4);
        cuadroRelle3(xG, yG, 60);
        rlutil::setColor(0);
        rlutil::setBackgroundColor(4);
        rlutil::locate(xG + 83, yG + 3); cout << "INFORMACION DE LOS MEDICAMENTOS DISPONIBLES";
        rlutil::setBackgroundColor(0);

        while (actual != NULL)
        {

            rlutil::setColor(7);
            rlutil::locate(5 + e, yG + 15); cout << "Id";
            rlutil::locate(5 + e, yG + 16); cout << "Nombre";
            rlutil::locate(5 + e, yG + 17); cout << "Descripcion";
            rlutil::locate(5 + e, yG + 18); cout << "Precio Q";
            rlutil::locate(5 + e, yG + 19); cout << "Ano Vecimi";
            rlutil::locate(5 + e, yG + 20); cout << "Cantidad";
            rlutil::locate(5 + e, yG + 21); cout << "Dire sig";
            rlutil::locate(5 + e, yG + 22); cout << "Dire Ante";


            rlutil::setColor(2);
            rlutil::locate(22 + e, yG + 15); cout << actual->id;
            rlutil::locate(22 + e, yG + 16); cout << actual->nombre;
            rlutil::locate(22 + e, yG + 17); cout << actual->descripcion;
            rlutil::locate(22 + e, yG + 18); cout << actual->precio;
            rlutil::locate(22 + e, yG + 19); cout << actual->añoVenci;
            rlutil::locate(22 + e, yG + 20); cout << actual->cantidad;
            rlutil::locate(22 + e, yG + 21); cout << actual->siguiente;
            rlutil::locate(22 + e, yG + 22); cout << actual->anterior;

            rlutil::setColor(13);
            rlutil::locate(17 + e, yG + 13); cout << actual;

            rlutil::setColor(3);
            cuadrolinea(3 + e, yG + 14, 45 + e, 26);



            actual = actual->siguiente;

            if (actual != NULL)
            {
                rlutil::setColor(6);
                rlutil::locate(46 + e, yG + 17); cout << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << ">";
            }
            if (actual != NULL)
            {
                rlutil::setColor(5);
                rlutil::locate(46 + e, yG + 20); cout <<  "<" <<(char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196;
            }
            e = e + 53;
        }
    }
    else 
    {

        NoHayDatos();
        Sleep(1000);
    }
    rlutil::setColor(8);
    cout << endl; cout << endl; cout << endl;
    system("pause");
    system("cls");
}

void eliminarListDoble(Producto2*&primero ) {
    system("cls");
    if (primero == NULL)
    {
        NoHayDatos();
        rlutil::msleep(1000);
        rlutil::cls();
        return;
    }

    //se elimina el unicos nodo
    if (primero->siguiente == NULL)
    {
        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL MEDICAMENTO CON EL NOMBRE : ";
        rlutil::setColor(2);
        gotoxy(120, 16); cout << primero->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);

        delete primero;
        primero = NULL;

        rlutil::msleep(1300);
        system("cls");
    }
    else //se elimina el primero nodo de la listas
    {

        Producto2* aux = primero;

        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL MEDICAMENTO CON EL NOMBRE : ";
        rlutil::setColor(2);
        gotoxy(120, 16); cout << primero->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);

        primero = primero->siguiente;
        delete aux; 
        aux = NULL;
        primero->anterior = NULL; 

        rlutil::msleep(1300);
        system("cls");
    }
    mostrarListDoble(primero);
}

void vaciarListDoble( Producto2*&primero ) {
    system("cls");
    if ( primero == NULL )
    {
        NoHayDatos();
        rlutil::msleep(1000);
        rlutil::cls();
        return;
    }
    Producto2* aux = primero->siguiente;
    while (aux != NULL)
    {
        rlutil::setColor(14);
        gotoxy(70, 16); cout << "HEMOS ELIMINADO EL USUARIO CON EL NOMBRE: ";
        rlutil::setColor(2);
        gotoxy(115, 16); cout << aux->nombre;
        rlutil::setColor(3);
        cuadro(65, 13, 150, 19);


        delete primero;
        primero = aux;
        primero->anterior = NULL;
        aux = primero->siguiente;

        rlutil::msleep(1000);
        system("cls");
    }

    delete primero;
    primero = NULL;
}





//ARBOL ABB

void menuArbolABBOp(int yM) {

    rlutil::hidecursor();
    rlutil::setColor(10);
    int x = 65; int y = 7;


    //cuandrp del titulo
    for (size_t i = 0; i < 60; i++)
    {
        gotoxy(x + i, y); cout << (char)219;
        gotoxy(x + i, y + 1); cout << (char)219;
        gotoxy(x + i, y + 2); cout << (char)219;
        gotoxy(x + i, y + 3); cout << (char)219;
    }


    //titilo
    rlutil::setBackgroundColor(10);
    rlutil::setColor(0);
    gotoxy(x + 3, y + 1); cout << "MENU DE EMPLEDOS DE LA FARMACIA LA BENDICION";
    gotoxy(x + 3, y + 2); cout << "ARBOL ABB";
    rlutil::setBackgroundColor(0);

    //cuandro menu
    rlutil::setColor(6);
    cuadro(x, y + 4, 150, 30);


    //opciones
    rlutil::setColor(9);
    showItem("   Ingresar un Nuevo Empleado                ", x + 10, y + 6, yM == 0);
    showItem("   Ver Todos los Empleados                   ", x + 10, y + 8, yM == 2);
    showItem("   Buscar un Empleado                        ", x + 10, y + 10, yM == 4);
    showItem("   Recorrer Arbol PreOrden                   ", x + 10, y + 12, yM == 6);
    showItem("   Recorrer Arbol PostOrden                  ", x + 10, y + 14, yM == 8);
    showItem("   Recorrer Arbol InOrden                    ", x + 10, y + 16, yM == 10);
    showItem("   Eliminar Todos Los Empleados              ", x + 10, y + 18, yM == 12);
    showItem("   Regresar                                  ", x + 10, y + 20, yM == 14);
};

void insertArbolABB(Empleado*&arbol ) {
    rlutil::cls(); rlutil::showcursor();
    int xG = 0; int yG = 5;

    int id = NULL;
    string nombre;
    string Apellido;
    string role;
    string direccion;
    int numTelefono =0;
    string  genero;
    int salario = 0;

    rlutil::setColor(4);
    cuadroRelle3(xG, yG, 60);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(4);
    rlutil::locate(xG + 85, yG + 3); cout << "INSERTAR empleado EN EL ARBOL ABB" << endl;
    rlutil::setBackgroundColor(0);

    listSimInsertOp("id: ",              xG + 75, yG + 8);
    listSimInsertOp("Nombre: ",          xG + 75, yG + 11);
    listSimInsertOp("Apellido: ",        xG + 75, yG + 14);
    listSimInsertOp("Cargo o role: ",    xG + 75, yG + 17);
    listSimInsertOp("Direccion: ",       xG + 75, yG + 20);
    listSimInsertOp("genero: ",          xG + 75, yG + 23);
    listSimInsertOp("Numero Telefono: ", xG + 75, yG + 26);
    listSimInsertOp("Salario: ",         xG + 75, yG + 29);


    do
    {
        //verificacion si existe el id
        if ( id != NULL &&  busquedaArbol(  arbol, id )  )
        {
            rlutil::setColor(14);
            rlutil::locate(xG + 77, yG + 35); cout << "ERROR, EL ID: " << id << " QUE INGRESO YA ESTA EN USO, INGRESE OTRO";
        }
        else
        {
            rlutil::locate(xG + 77, yG + 35); cout << "                                                                    ";
        }


        rlutil::setColor(2);//limpia el input del id
        rlutil::locate(xG + 105, yG + 8); cout << "                ";
        rlutil::locate(xG + 105, yG + 8); cin >> id;

    } while ( busquedaArbol(arbol, id ) );

    //elimar texto en la consola
    rlutil::locate(xG + 77, yG + 35); cout << "                                                                                ";



    rlutil::setColor(2);
    //guardamos los datos  en las variables
    cin.ignore();
    rlutil::locate(xG + 105, yG + 11); getline(cin,nombre);
    rlutil::locate(xG + 105, yG + 14); getline(cin, Apellido);
    rlutil::locate(xG + 105, yG + 17); getline(cin, role);
    rlutil::locate(xG + 105, yG + 20); getline(cin, direccion);
    rlutil::locate(xG + 105, yG + 23); getline(cin, genero);
    rlutil::locate(xG + 105, yG + 26); cin >> numTelefono;
    rlutil::locate(xG + 105, yG + 29); cin >> salario;;


    //Fc para crear un nodo y budcar en donde se pociona
    insertarNodoOrdenA(arbol, id, nombre, Apellido, role, direccion, genero, numTelefono, salario,NULL);
    system("cls");
};


void mostrarArbolBB(Empleado*&arbol)  {
    system("cls");
    int opc = 0;

    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1,1,211,49);


    //se imprimira el arbol completo
    imprimirArbolBBA(arbol);

    rlutil::setColor(11);
    rlutil::locate(187, 4); cout << "VER NODO";

    rlutil::setColor(6);
    rlutil::locate(174, 7); cout << "Queres ver un nodo con mas detalle?";
    rlutil::setColor(5);
    rlutil::locate(174, 8); cout << "SI = 1, NO = 0: ";
    rlutil::showcursor();
    rlutil::setColor(2);
    rlutil::locate(195, 8); cin >> opc;
    rlutil::hidecursor();



    //"Si" quiere ver un nodo.
    if ( opc == 1 )
    {
        int id = 0;
        rlutil::showcursor();
        rlutil::setColor(4);
        verArbolDetaNodo("INGRESE EL ID: ", 175, 12);
        rlutil::setColor(2);
        rlutil::locate(197, 12); cin >> id;
        rlutil::hidecursor();

        //cuando no se encuntra el id
        if ( !busquedaArbol(arbol,  id )  )
        {
            //borrar txt parte de la pantalla
            for (size_t i = 2; i < 45; i++)
            {
                for (size_t j =2; j < 170; j++)
                {
                    rlutil::locate(j, i); cout << " ";
                }
            }
            rlutil::setColor(14);
            rlutil::locate(70, 18); cout << "EL ID QUE INGRESO NO ES LA CORRECTA";
            rlutil::locate(1, 50);rlutil::setColor(9);  system("pause");
            system("cls");
            return ;
        }

        //cuando si se econtro
        busquedaNodoImpriAni(arbol, id);

        rlutil::locate(1, 50); rlutil::setColor(9);  system("pause");
        system("cls");
    }

    system("cls");
}
 
void buscarArbolABB(Empleado* arbol ) {
    system("cls");

    rlutil::cls(); rlutil::showcursor();
    int xG = 0; int yG = 5;
    int id;


    rlutil::setColor(5);
    cuadroRelle3(xG, yG, 60);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(5);
    rlutil::locate(xG + 89, yG + 3); cout << "¿QUE EMPLEADO QUIERE BUSCAR?" << endl;
    rlutil::setBackgroundColor(0);


    listSimInsertOp("Ingrese el id: ", xG + 75, yG + 8);


    rlutil::setColor(2);
    rlutil::locate(xG + 105, yG + 8); cin >> id;
    rlutil::setColor(13);
    if (busquedaArbol(arbol, id))
    {
        rlutil::locate(xG + 78, yG+ 11); cout << "Hemos encontrado el empleado con el id " << id << " en el arbol";
        busquedaABBImpriNodo(arbol, id);
    }
    else
    {
        rlutil::locate(xG + 78, yG+ 11); cout << "NO hemos encontrado el empleado con el id " << id << "  en el arbol";
    }

    rlutil::locate(1, 50); rlutil::setColor(9);
    system("pause");
    system("cls");
};

void RecorrerPreOrden(Empleado*& arbol ) {
    system("cls");


    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolBBA(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 2, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(183, 5); cout << "RECORRIDO PREORNDE" << endl;
    rlutil::setBackgroundColor(0);


    rlutil::locate(175, 9);
    PreOrden(arbol);


    rlutil::locate(1, 50); rlutil::setColor(8); system("pause");
    system("cls");
};

void RecorrerPostOrden(Empleado*& arbol) {
    system("cls");

    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolBBA(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 2, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(183, 5); cout << "RECORRIDO POSTORDEN" << endl;
    rlutil::setBackgroundColor(0);


    rlutil::locate(175, 9);
    PostOrden(arbol);

    rlutil::locate(1, 50); rlutil::setColor(8); system("pause");
    system("cls");
};

void RecorrerInOrden(Empleado*& arbol) {
    system("cls");

    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolBBA(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 2, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(183, 5); cout << "RECORRIDO INORDEN" << endl;
    rlutil::setBackgroundColor(0);


    rlutil::locate(175, 9);
    InOrden(arbol);


    rlutil::locate(1, 50); rlutil::setColor(8); system("pause");
    system("cls");
};


void EliminarNodoArbol(Empleado*& arbol) {
    system("cls");
    int id = 0;;


    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolBBA(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 2, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(178, 5); cout << "Que registro quiere eliminar?" << endl;
    rlutil::setBackgroundColor(0);



    rlutil::showcursor();
    verArbolDetaNodo("Ingrese el id : ", 175, 9);
    rlutil::setColor(2);
    rlutil::locate(203, 9); cin >> id;
    rlutil::hidecursor();
    

    //buscar el nodo del arbol que queremos eliminar o lo retorna
    Empleado*Nodoborrar = BuscarNodo(arbol, id);


    for (size_t i = 2; i < 45; i++)
    {
        for (size_t j = 2; j < 170; j++)
        {
            rlutil::locate(j, i); cout << " ";
        }
    }


    if (Nodoborrar == NULL)
    {
        rlutil::locate(60, 15); cout << "NO se encontro el empleado con el id : "<< id << " , se salva";
        rlutil::msleep(2000);
        system("cls");
        return;
    }
    else
    {
        BorrarNodo(Nodoborrar, arbol);
        rlutil::locate(60, 15); cout << "Se ha Eliminado del registro del empleado con el id : " << id << ", f";
        rlutil::msleep(2000);
        rlutil::locate(60, 15); cout << "                                                                          ";

        imprimirArbolBBA(arbol);
        auxX = 0;

        rlutil::locate(1, 50); rlutil::setColor(8); system("pause");
        system("cls");
    }
};



//funciones aux arboles abb
void insertarNodoOrdenA(Empleado*& arbol,int  id, string nombre,string Apellido, string role, string direccion, string genero,int numTelefono, int salario, Empleado* padre) {
    if (arbol == NULL)
    {
        //crear el nuevo nodo y lo insertar a arbol
        Empleado* nuevoNodo = new Empleado();
        nuevoNodo->id = id;
        nuevoNodo->nombre = nombre;
        nuevoNodo->Apellido = Apellido;
        nuevoNodo->role = role;
        nuevoNodo->direccion = direccion;
        nuevoNodo->genero = genero;
        nuevoNodo->numTelefono = numTelefono;
        nuevoNodo->salario = salario;

        nuevoNodo->derecha = NULL;
        nuevoNodo->Izquierda = NULL;
        nuevoNodo->padre = padre;
        nuevoNodo->PosiX = 0;
        nuevoNodo->PosiY = 0;
        arbol = nuevoNodo;
    }
    else
    {
        if ( id < arbol->id)
        {
            insertarNodoOrdenA(arbol->Izquierda, id, nombre, Apellido, role, direccion, genero, numTelefono, salario, arbol );
        }
        else
        {
            insertarNodoOrdenA(arbol->derecha,  id, nombre, Apellido, role, direccion, genero, numTelefono, salario, arbol);
        }
    }
}

void imprimirArbolBBA(Empleado*&arbol) {
    int auxY = 5;
    //solo se imprime los nodos, circulos
    imprimirArbolBBNodo(arbol, auxY);
    auxX = 0;
    raiz = 0;
    //imprime las ramas que se conectan
    dibujarRamasArbolBB(arbol);
}

void imprimirArbolBBNodo(Empleado*&arbol, int auxY ) {
     if (arbol == NULL)
    {
        auxX += 10;
        return; 
    }
 
     if (raiz ==NULL){raiz = arbol->id;}

     imprimirArbolBBNodo(arbol->Izquierda,  auxY + 10   );

    //se imprime el circuolo 
    rlutil::setColor(2);
    gotoxy(auxX -1, auxY - 2);  cout << "*  *" << endl;
    gotoxy(auxX  - 4, auxY - 1); cout << "*        *" << endl;
    gotoxy(auxX  - 5, auxY + 0); cout << "*          *" << endl;
    gotoxy(auxX  - 5, auxY + 1); cout << "*          *" << endl;
    gotoxy(auxX  - 4, auxY + 2); cout << "*        *" << endl;
    gotoxy(auxX  -1, auxY + 3); cout << "*  *" << endl;

    rlutil::setColor(11);
    //imprimir el id 
    gotoxy(auxX, auxY); cout << arbol->id << endl;
    //guardamos las direciones (x,y) en el arbol estrcu
    arbol->PosiX = auxX;
    arbol->PosiY = auxY;

    if (arbol->id == raiz)
    {
        if (arbol->Izquierda != NULL)
        {
            auxX  += (arbol->PosiX - arbol->Izquierda->PosiX ) -10; 
        }
    }
    imprimirArbolBBNodo(arbol->derecha, auxY + 10 );
}

bool busquedaArbol(Empleado* arbol, int n) {
    if (  arbol == NULL)
    {
        return false;
    }
    else if ( arbol->id == n)
    {
        return true;
    }

    else if (n < arbol->id) {
        return busquedaArbol(arbol->Izquierda , n);
    }
    else
    {
        return busquedaArbol(arbol->derecha, n);
    }
}

bool busquedaNodoImpriAni(Empleado* arbol, int n) {


    if (arbol != NULL)
    {
        rlutil::setColor(3);
        //visualizacion animation
        rlutil::locate(arbol->PosiX - 8, arbol->PosiY - 1); cout << n;
        rlutil::setColor(13);
        rlutil::locate(arbol->PosiX - 6, arbol->PosiY - 1); cout << "==";
        rlutil::msleep(1500);
        rlutil::locate(arbol->PosiX - 8, arbol->PosiY - 1); cout << "  ";
        rlutil::locate(arbol->PosiX - 6, arbol->PosiY - 1); cout << "  ";
    }

    if (arbol == NULL)
    {
        return false;
    }

    //enconrtamos el id que buscasmos
    else if (arbol->id == n)
    {
        //borrar txt parte de la pantalla
        for (size_t i = 2; i < 45; i++)
        {
            for (size_t j = 2; j < 170; j++)
            {
                rlutil::locate(j, i); cout << " ";
            }
        }

        rlutil::setColor(8);
        rlutil::locate(20, 7); cout << R"( 
                                                                          ********                            
                                                                    ******        ******                      
                                                                ****                    ****                  
                                                            ****                            ****              
                                                          **                                    **           
                                                        **                                        **          
                                                      **                                            **        
                                                    **                                                **      
                                                    **                                                **      
                                                  **                                                    **    
                                                  **                                                    **    
                                                **                                                        **  
                                                **                                                        **  
                                                **                                                        **  
                                              **                                                            **
                                              **                                                            **
                                              **                                                            **
                                              **                                                            **
                                                **                                                        **  
                                                **                                                        **  
                                                **                                                        **  
                                                  **                                                    **    
                                                  **                                                    **    
                                                    **                                                **      
                                                    **                                                **      
                                                      **                                            **        
                                                        **                                        **          
                                                          **                                    **            
                                                            ****                            ****              
                                                                ****                    ****                  
                                                                    ******        ******                      
                                                                          ********                                                                        
          )" << '\n';



        
        //cuadradov de la panatalla
        rlutil::setColor(4);
        cuadro(171, 1, 211, 49);
        cuadro(1, 1, 211, 49);


        rlutil::setColor(6);
        rlutil::locate(62, 13); cout << "ID: "; 
        rlutil::setColor(2);
        rlutil::locate(62, 14); cout << arbol->id << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 16); cout << "NOMBRE DEL EMPLADO: "; 
        rlutil::setColor(2);
        rlutil::locate(62, 17); cout << arbol->nombre << endl;

        rlutil::setColor(6);
        rlutil::locate(62,19); cout << "APELLIDO: "; 
        rlutil::setColor(2);
        rlutil::locate(62, 20); cout << arbol->Apellido << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 22); cout << "CARGO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 23); cout << arbol->role << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 25); cout << "DIRECCION: "; 
        rlutil::setColor(2);
        rlutil::locate(62, 26); cout << arbol->direccion << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 28); cout << "NUMERO DE TELEFONO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 29); cout << arbol->numTelefono << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 31); cout << "GENERO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 32); cout << arbol->genero << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 34); cout << "SALARIO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 35); cout << arbol->salario << endl;
        return true;
    }


    else if (n < arbol->id) {
        return busquedaNodoImpriAni(arbol->Izquierda, n);
    }
    else
    {
        return busquedaNodoImpriAni(arbol->derecha, n);
    }
}

bool busquedaABBImpriNodo(Empleado* arbol, int n) {
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->id == n)
    {
        rlutil::setColor(9);
        rlutil::locate(75, 20); cout << "ID: ";
        rlutil::setColor(2);
        rlutil::locate(75, 21); cout << arbol->id << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 23); cout << "NOMBRE DEL EMPLEADO: ";
        rlutil::setColor(2);
        rlutil::locate(75, 24); cout << arbol->nombre << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 26); cout << "Apellido: ";
        rlutil::setColor(2);
        rlutil::locate(75, 27); cout << arbol->Apellido << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 29); cout << "Cargo: ";
        rlutil::setColor(2);
        rlutil::locate(75, 30); cout << arbol->role << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 32); cout << "Direccion: ";
        rlutil::setColor(2);
        rlutil::locate(75, 33); cout << arbol->direccion << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 35); cout << "Numero Telefono: ";
        rlutil::setColor(2);
        rlutil::locate(75, 36); cout << arbol->numTelefono << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 38); cout << "Genero: ";
        rlutil::setColor(2);
        rlutil::locate(75, 39); cout << arbol->genero << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 41); cout << "Salario: ";
        rlutil::setColor(2);
        rlutil::locate(75, 42); cout << arbol->salario << endl;
        return true;
    }

    else if (n < arbol->id) {
        return busquedaABBImpriNodo(arbol->Izquierda, n);
    }
    else
    {
        return busquedaABBImpriNodo(arbol->derecha, n);
    }


}

void PreOrden(Empleado*arbol ) {
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        rlutil::setColor(2);
        cout << arbol->id;
        rlutil::setColor(13);
        cout << " - ";
        PreOrden(arbol->Izquierda );
        PreOrden(arbol->derecha);
    }
}

void PostOrden(Empleado* arbol) {
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        PostOrden(arbol->Izquierda);
        PostOrden(arbol->derecha);

        rlutil::setColor(2);
        cout << arbol->id;
        rlutil::setColor(13);
        cout << " - ";

    }
};

void InOrden(Empleado* arbol) {
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        InOrden(arbol->Izquierda);
        rlutil::setColor(2);
        cout << arbol->id;
        rlutil::setColor(13);
        cout << " - ";

        InOrden(arbol->derecha);
    }
};

void BorrarNodo(Empleado* &suprimido, Empleado* &raiz) {

    if (suprimido->derecha == NULL and suprimido->Izquierda == NULL) {//si tiene ningun hijo
        Borrado_SinHijos(suprimido, raiz);
    }

    else if (suprimido->derecha != NULL and suprimido->Izquierda != NULL) {//si tiene dos hijos
        Borrado_DosHijos(suprimido, raiz);
    }

    else if (suprimido->derecha != NULL) {//si tiene solo el hijo derecho
        Borrado_UnHijo(suprimido, suprimido->derecha, raiz);
    }

    else if (suprimido->Izquierda != NULL) {//si tiene solo el hijo izquierdo
        Borrado_UnHijo(suprimido, suprimido->Izquierda, raiz);
    }
}

void Borrado_SinHijos(Empleado*& suprimido, Empleado*& raiz) {

    if (suprimido->padre != NULL) {//si el nodo a borrar tiene padre

        if (EsHijoDerecho(suprimido)) {//si es un hijo derecho
            suprimido->padre->derecha = NULL;
        }
        else {//si en cambio es un hijo izquierdo
            suprimido->padre->Izquierda = NULL;
        }

    }
    else if (raiz == suprimido) {//si el nodo a borrar es la raiz
        raiz = NULL;//anulamos a raiz en el caso de que sea el nodo a borrar
    }

    Suprimir(suprimido);

}

void Borrado_DosHijos(Empleado*& suprimido, Empleado*& raiz) {

    Empleado* min = minimo(suprimido->derecha);
    suprimido->id = min->id;
    suprimido->nombre = min->nombre;
    suprimido->Apellido = min->Apellido;
    suprimido->role = min->role;
    suprimido->direccion = min->direccion;
    suprimido->numTelefono = min->numTelefono;
    suprimido->genero = min->genero;
    suprimido->salario = min->salario;

    BorrarNodo(min, raiz);//borramos minimo
}

void Borrado_UnHijo(Empleado*& suprimido, Empleado*& hijo, Empleado*& raiz) {

    if (suprimido->padre != NULL) {//si el nodo a borrar tiene padre

        hijo->padre = suprimido->padre;//al nodo hijo le asignamos como nuevo padre a su "abuelo"

        if (EsHijoDerecho(suprimido)) {//si es hijo derecho
            suprimido->padre->derecha = hijo;//al nodo padre le asignamos como nuevo hijo a su "nieto" 
        }
        else {//si es hijo izquierdo
            suprimido->padre->Izquierda = hijo;//al nodo padre le asignamos como nuevo hijo a su "nieto"
        }
    }
    else if (raiz == suprimido) {//si el nodo a borrar es la raiz
        raiz = hijo;//intercambiamos lugares entre raiz/suprimido con hijo
        raiz->padre = NULL;//le ponemos null apadre para convertirlo un una raiz completa(recordemos que estas no tienen padre)
    }

    Suprimir(suprimido);

}

void Suprimir(Empleado*& suprimido) {

    suprimido->derecha = NULL;
    suprimido->Izquierda = NULL;
    suprimido->padre = NULL;
    delete suprimido;
    suprimido = NULL;
}

Empleado* BuscarNodo(Empleado*& arbol, int id) {

    if (arbol != NULL)
    {
        //visualizacion animation
        rlutil::locate(arbol->PosiX - 8, arbol->PosiY - 1); cout << id;
        rlutil::locate(arbol->PosiX - 6, arbol->PosiY - 1); cout << "==";
        rlutil::msleep(1500);
        rlutil::locate(arbol->PosiX - 8, arbol->PosiY - 1); cout << "  ";
        rlutil::locate(arbol->PosiX - 6, arbol->PosiY - 1); cout << "  ";
    }

    if (arbol == NULL or arbol->id == id) {
        return arbol;
    }
    if (id < arbol->id) {
        //cout << "Izquierda ->";
        BuscarNodo(arbol->Izquierda, id);
    }
    else {
        //cout << "Derecha -> ";
        BuscarNodo(arbol->derecha, id);
    }

}

//busca el nodo que tiene el id minimo en derecho
Empleado* minimo(Empleado* arbol) {
    Empleado* aux = arbol;

    while (aux->Izquierda != NULL) {
        aux = aux->Izquierda;
    }
    return aux;
}

bool EsHijoDerecho(Empleado*& hijo) {
    if (hijo->padre->derecha == hijo) {
        return true;
    }
    return false;
}











//arbol AVL


void menuArbolAVLOp(int yM) {




    rlutil::hidecursor();
    rlutil::setColor(10);
    int x = 65; int y = 7;


    //cuandrp del titulo
    for (size_t i = 0; i < 60; i++)
    {
        gotoxy(x + i, y); cout << (char)219;
        gotoxy(x + i, y + 1); cout << (char)219;
        gotoxy(x + i, y + 2); cout << (char)219;
        gotoxy(x + i, y + 3); cout << (char)219;
    }


    //titilo
    rlutil::setBackgroundColor(10);
    rlutil::setColor(0);
    gotoxy(x + 3, y + 1); cout << "MENU DE EMPLEDOS DE LA FARMACIA LA BENDICION";
    gotoxy(x + 3, y + 2); cout << "ARBOL AVL";
    rlutil::setBackgroundColor(0);

    //cuandro menu
    rlutil::setColor(6);
    cuadro(x, y + 4, 150, 30);


    //opciones
    rlutil::setColor(9);
    showItem("   Ingresar un Nuevo Empleado                ", x + 10, y + 6, yM == 0);
    showItem("   Ver Todos los Empleados                   ", x + 10, y + 8, yM == 2);
    showItem("   Buscar un Empleado                        ", x + 10, y + 10, yM == 4);
    showItem("   Recorrer Arbol PreOrden                   ", x + 10, y + 12, yM == 6);
    showItem("   Recorrer Arbol PostOrden                  ", x + 10, y + 14, yM == 8);
    showItem("   Recorrer Arbol InOrden                    ", x + 10, y + 16, yM == 10);
    showItem("   Eliminar Un Empleado                      ", x + 10, y + 18, yM == 12);
    showItem("   Regresar                                  ", x + 10, y + 20, yM == 14);
};

void insertAAVL(Empleado2*& arbol) {



    rlutil::cls(); rlutil::showcursor();
    int xG = 0; int yG = 5;

    int id = NULL;
    string nombre;
    string Apellido;
    string role;
    string direccion;
    int numTelefono = 0;
    string  genero;
    int salario = 0;

    rlutil::setColor(4);
    cuadroRelle3(xG, yG, 60);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(4);
    rlutil::locate(xG + 85, yG + 3); cout << "INGRESAR NUEVO EMPLEADO" << endl;
    rlutil::setBackgroundColor(0);

    listSimInsertOp("id: ", xG + 75, yG + 8);
    listSimInsertOp("Nombre: ", xG + 75, yG + 11);
    listSimInsertOp("Apellido: ", xG + 75, yG + 14);
    listSimInsertOp("Cargo o role: ", xG + 75, yG + 17);
    listSimInsertOp("Direccion: ", xG + 75, yG + 20);
    listSimInsertOp("genero: ", xG + 75, yG + 23);
    listSimInsertOp("Numero Telefono: ", xG + 75, yG + 26);
    listSimInsertOp("Salario: ", xG + 75, yG + 29);







    do
    {
        //verificacion si existe el id
        if (id != NULL && busquedaArbolAVL(arbol, id))
        {
            rlutil::setColor(14);
            rlutil::locate(xG + 77, yG + 35); cout << "ERROR, EL ID: " << id << " QUE INGRESO YA ESTA EN USO, INGRESE OTRO";
        }
        else
        {
            rlutil::locate(xG + 77, yG + 35); cout << "                                                                    ";
        }


        rlutil::setColor(2);//limpia el input del id
        rlutil::locate(xG + 105, yG + 8); cout << "                ";
        rlutil::locate(xG + 105, yG + 8); cin >> id;

    } while (busquedaArbolAVL(arbol, id));

    //elimar texto en la consola
    rlutil::locate(xG + 77, yG + 35); cout << "                                                                                ";



    rlutil::setColor(2);
    //guardamos los datos  en las variables
    cin.ignore();
    rlutil::locate(xG + 105, yG + 11); getline(cin, nombre);
    rlutil::locate(xG + 105, yG + 14); getline(cin, Apellido);
    rlutil::locate(xG + 105, yG + 17); getline(cin, role);
    rlutil::locate(xG + 105, yG + 20); getline(cin, direccion);
    rlutil::locate(xG + 105, yG + 23); getline(cin, genero);
    rlutil::locate(xG + 105, yG + 26); cin >> numTelefono;
    rlutil::locate(xG + 105, yG + 29); cin >> salario;;




    //Fc para crear un nodo y budcar en donde se pociona
    arbol = insertarNodoOrdenAAVL(arbol, id, nombre, Apellido, role, direccion, genero, numTelefono, salario );
    system("cls");

}

void mostrarArbolAVL(Empleado2*& arbol) {
    system("cls");
    int opc = 0;

    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);


    //se imprimira el arbol completo
    imprimirArbolAVL(arbol);

    rlutil::setColor(11);
    rlutil::locate(187, 4); cout << "VER NODO";

    rlutil::setColor(6);
    rlutil::locate(174, 7); cout << "Queres ver un nodo con mas detalle?";
    rlutil::setColor(5);
    rlutil::locate(174, 8); cout << "SI = 1, NO = 0: ";
    rlutil::showcursor();
    rlutil::setColor(2);
    rlutil::locate(195, 8); cin >> opc;
    rlutil::hidecursor();



    //"Si" quiere ver un nodo.
    if (opc == 1)
    {
        int id = 0;
        rlutil::showcursor();
        rlutil::setColor(4);
        verArbolDetaNodo("INGRESE EL ID: ", 175, 12);
        rlutil::setColor(2);
        rlutil::locate(197, 12); cin >> id;
        rlutil::hidecursor();

        //cuando no se encuntra el id
        if (!busquedaArbolAVL(arbol, id))
        {
            //borrar txt parte de la pantalla
            for (size_t i = 2; i < 45; i++)
            {
                for (size_t j = 2; j < 170; j++)
                {
                    rlutil::locate(j, i); cout << " ";
                }
            }
            rlutil::setColor(14);
            rlutil::locate(70, 18); cout << "EL ID QUE INGRESO NO ES LA CORRECTA";
            rlutil::locate(1, 50); rlutil::setColor(9);  system("pause");
            system("cls");
            return;
        }

        //cuando si se econtro
        busquedaNodoImpriAniAVL(arbol, id);

        rlutil::locate(1, 50); rlutil::setColor(9);  system("pause");
        system("cls");
    }

    system("cls");
};


void buscarArbolAVL(Empleado2* arbol) {
    system("cls");

    rlutil::cls(); rlutil::showcursor();
    int xG = 0; int yG = 5;
    int id;


    rlutil::setColor(5);
    cuadroRelle3(xG, yG, 60);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(5);
    rlutil::locate(xG + 89, yG + 3); cout << "¿QUE EMPLEADO QUIERE BUSCAR?" << endl;
    rlutil::setBackgroundColor(0);


    listSimInsertOp("Ingrese el id: ", xG + 75, yG + 8);


    rlutil::setColor(2);
    rlutil::locate(xG + 105, yG + 8); cin >> id;
    rlutil::setColor(13);
    if (busquedaArbolAVL(arbol, id))
    {
        rlutil::locate(xG + 78, yG + 11); cout << "Hemos encontrado el empleado con el id " << id << " en el arbol";
        busquedaAVLImpriNodo(arbol, id);
    }
    else
    {
        rlutil::locate(xG + 78, yG + 11); cout << "NO hemos encontrado el empleado con el id " << id << "  en el arbol";
    }

    rlutil::locate(1, 50); rlutil::setColor(9);
    system("pause");
    system("cls");
};


void RecorrerPreOrdenAVL(Empleado2*& arbol) {
    system("cls");


    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolAVL(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 2, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(183, 5); cout << "RECORRIDO PREORNDE" << endl;
    rlutil::setBackgroundColor(0);


    rlutil::locate(175, 9);
    PreOrdenAVL(arbol);


    rlutil::locate(1, 50); rlutil::setColor(8); system("pause");
    system("cls");
};

void RecorrerPostOrdenAVL(Empleado2*& arbol) {
    system("cls");

    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolAVL(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 2, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(183, 5); cout << "RECORRIDO POSTORDEN" << endl;
    rlutil::setBackgroundColor(0);


    rlutil::locate(175, 9);
    PostOrdenAVL(arbol);

    rlutil::locate(1, 50); rlutil::setColor(8); system("pause");
    system("cls");
};

void RecorrerInOrdenAVL(Empleado2*& arbol) {
    system("cls");

    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolAVL(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 2, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(183, 5); cout << "RECORRIDO INORDEN" << endl;
    rlutil::setBackgroundColor(0);


    rlutil::locate(175, 9);
    InOrdenAVL(arbol);


    rlutil::locate(1, 50); rlutil::setColor(8); system("pause");
    system("cls");
};




void EliminarNodoArbolAVL(Empleado2*&arbol) {
    system("cls");
    int id = 0;;

    //cuadradov de la panatalla
    rlutil::setColor(4);
    cuadro(171, 1, 211, 49);
    cuadro(1, 1, 211, 49);

    //imprime todo el arabol
    imprimirArbolAVL(arbol);
    // es un variable global que nos ayuda a posicionar los nodos
    auxX = 0;



    rlutil::setColor(10);
    cuadroRelle3_1(177, 3, 30);
    cuadroRelle3_1(177, 4, 30);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(10);
    rlutil::locate(181, 6); cout << "Quieres Eliminar Todos" << endl;
    rlutil::locate(184, 7); cout << "los registros?" << endl;
    rlutil::setBackgroundColor(0);

    rlutil::showcursor();
    verArbolDetaNodo("Si = 1: ", 175, 11);
    rlutil::setColor(2);
    rlutil::locate(200, 11); cin >> id;
    rlutil::hidecursor();

    //borrar txt parte de la pantalla
    for (size_t i = 2; i < 45; i++)
    {
        for (size_t j = 2; j < 170; j++)
        {
            rlutil::locate(j, i); cout << " ";
        }
    }

    deleteTree(arbol);
    rlutil::setColor(14);
    rlutil::locate(70, 18); cout << "SE HA ELIMINADO TODOS LO REGISTOS DE LOS EMPLEADOS";
    rlutil::msleep(2000);

    
    system("cls");
};


// delete nodes in the AVL tree and free memory
void deleteTree(Empleado2*& root) {
    if (root == NULL) return;
    else {
        deleteTree(root->Izquierda);
        deleteTree(root->derecha);
        if (root->Izquierda == NULL && root->derecha == NULL) {
            delete root;
            root = NULL;
            return;
        }
    }
}


//aurx arbol avl

void InOrdenAVL(Empleado2* arbol) {
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        InOrdenAVL(arbol->Izquierda);
        rlutil::setColor(2);
        cout << arbol->id;
        rlutil::setColor(13);
        cout << " - ";

        InOrdenAVL(arbol->derecha);
    }
};


void PostOrdenAVL(Empleado2* arbol) {
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        PostOrdenAVL(arbol->Izquierda);
        PostOrdenAVL(arbol->derecha);

        rlutil::setColor(2);
        cout << arbol->id;
        rlutil::setColor(13);
        cout << " - ";

    }
};


void PreOrdenAVL(Empleado2* arbol) {
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        rlutil::setColor(2);
        cout << arbol->id;
        rlutil::setColor(13);
        cout << " - ";
        PreOrdenAVL(arbol->Izquierda);
        PreOrdenAVL(arbol->derecha);
    }
}

bool busquedaNodoImpriAniAVL(Empleado2* arbol, int n) {


    if (arbol != NULL)
    {
        rlutil::setColor(3);
        //visualizacion animation
        rlutil::locate(arbol->PosiX - 8, arbol->PosiY - 1); cout << n;
        rlutil::setColor(13);
        rlutil::locate(arbol->PosiX - 6, arbol->PosiY - 1); cout << "==";
        rlutil::msleep(1500);
        rlutil::locate(arbol->PosiX - 8, arbol->PosiY - 1); cout << "  ";
        rlutil::locate(arbol->PosiX - 6, arbol->PosiY - 1); cout << "  ";
    }

    if (arbol == NULL)
    {
        return false;
    }

    //enconrtamos el id que buscasmos
    else if (arbol->id == n)
    {
        //borrar txt parte de la pantalla
        for (size_t i = 2; i < 45; i++)
        {
            for (size_t j = 2; j < 170; j++)
            {
                rlutil::locate(j, i); cout << " ";
            }
        }

        rlutil::setColor(8);
        rlutil::locate(20, 7); cout << R"( 
                                                                          ********                            
                                                                    ******        ******                      
                                                                ****                    ****                  
                                                            ****                            ****              
                                                          **                                    **           
                                                        **                                        **          
                                                      **                                            **        
                                                    **                                                **      
                                                    **                                                **      
                                                  **                                                    **    
                                                  **                                                    **    
                                                **                                                        **  
                                                **                                                        **  
                                                **                                                        **  
                                              **                                                            **
                                              **                                                            **
                                              **                                                            **
                                              **                                                            **
                                                **                                                        **  
                                                **                                                        **  
                                                **                                                        **  
                                                  **                                                    **    
                                                  **                                                    **    
                                                    **                                                **      
                                                    **                                                **      
                                                      **                                            **        
                                                        **                                        **          
                                                          **                                    **            
                                                            ****                            ****              
                                                                ****                    ****                  
                                                                    ******        ******                      
                                                                          ********                                                                        
          )" << '\n';




        //cuadradov de la panatalla
        rlutil::setColor(4);
        cuadro(171, 1, 211, 49);
        cuadro(1, 1, 211, 49);


        rlutil::setColor(6);
        rlutil::locate(62, 13); cout << "ID: ";
        rlutil::setColor(2);
        rlutil::locate(62, 14); cout << arbol->id << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 16); cout << "NOMBRE DEL EMPLADO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 17); cout << arbol->nombre << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 19); cout << "APELLIDO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 20); cout << arbol->Apellido << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 22); cout << "CARGO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 23); cout << arbol->role << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 25); cout << "DIRECCION: ";
        rlutil::setColor(2);
        rlutil::locate(62, 26); cout << arbol->direccion << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 28); cout << "NUMERO DE TELEFONO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 29); cout << arbol->numTelefono << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 31); cout << "GENERO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 32); cout << arbol->genero << endl;

        rlutil::setColor(6);
        rlutil::locate(62, 34); cout << "SALARIO: ";
        rlutil::setColor(2);
        rlutil::locate(62, 35); cout << arbol->salario << endl;
        return true;
    }


    else if (n < arbol->id) {
        return busquedaNodoImpriAniAVL(arbol->Izquierda, n);
    }
    else
    {
        return busquedaNodoImpriAniAVL(arbol->derecha, n);
    }
}


bool busquedaArbolAVL(Empleado2* arbol, int n) {
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->id == n)
    {
        return true;
    }

    else if (n < arbol->id) {
        return busquedaArbolAVL(arbol->Izquierda, n);
    }
    else
    {
        return busquedaArbolAVL(arbol->derecha, n);
    }
}

void imprimirArbolAVL(Empleado2*& arbol) {
    int auxY = 5;
    //solo se imprime los nodos, circulos
    imprimirArbolAVLNodo(arbol, auxY);
    auxX = 0;
    raiz = 0;
    //imprime las ramas que se conectan
    dibujarRamasArbolAVL(arbol);
}

void imprimirArbolAVLNodo(Empleado2*& arbol, int auxY) {
    if (arbol == NULL)
    {
        auxX += 10;
        return;
    }

    if (raiz == NULL) { raiz = arbol->id; }

    imprimirArbolAVLNodo(arbol->Izquierda, auxY + 10);

    //se imprime el circuolo 
    rlutil::setColor(2);
    gotoxy(auxX - 1, auxY - 2);  cout << "*  *" << endl;
    gotoxy(auxX - 4, auxY - 1); cout << "*        *" << endl;
    gotoxy(auxX - 5, auxY + 0); cout << "*          *" << endl;
    gotoxy(auxX - 5, auxY + 1); cout << "*          *" << endl;
    gotoxy(auxX - 4, auxY + 2); cout << "*        *" << endl;
    gotoxy(auxX - 1, auxY + 3); cout << "*  *" << endl;

    rlutil::setColor(11);
    //imprimir el id 
    gotoxy(auxX, auxY); cout << arbol->id << endl;
    //guardamos las direciones (x,y) en el arbol estrcu
    arbol->PosiX = auxX;
    arbol->PosiY = auxY;

    if (arbol->id == raiz)
    {
        if (arbol->Izquierda != NULL)
        {
            auxX += (arbol->PosiX - arbol->Izquierda->PosiX) - 10;
        }
    }
    imprimirArbolAVLNodo(arbol->derecha, auxY + 10);
}


bool busquedaAVLImpriNodo(Empleado2* arbol, int n) {
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->id == n)
    {
        rlutil::setColor(9);
        rlutil::locate(75, 20); cout << "ID: ";
        rlutil::setColor(2);
        rlutil::locate(75, 21); cout << arbol->id << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 23); cout << "NOMBRE DEL EMPLEADO: ";
        rlutil::setColor(2);
        rlutil::locate(75, 24); cout << arbol->nombre << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 26); cout << "Apellido: ";
        rlutil::setColor(2);
        rlutil::locate(75, 27); cout << arbol->Apellido << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 29); cout << "Cargo: ";
        rlutil::setColor(2);
        rlutil::locate(75, 30); cout << arbol->role << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 32); cout << "Direccion: ";
        rlutil::setColor(2);
        rlutil::locate(75, 33); cout << arbol->direccion << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 35); cout << "Numero Telefono: ";
        rlutil::setColor(2);
        rlutil::locate(75, 36); cout << arbol->numTelefono << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 38); cout << "Genero: ";
        rlutil::setColor(2);
        rlutil::locate(75, 39); cout << arbol->genero << endl;

        rlutil::setColor(9);
        rlutil::locate(75, 41); cout << "Salario: ";
        rlutil::setColor(2);
        rlutil::locate(75, 42); cout << arbol->salario << endl;
        return true;
    }

    else if (n < arbol->id) {
        return busquedaAVLImpriNodo(arbol->Izquierda, n);
    }
    else
    {
        return busquedaAVLImpriNodo(arbol->derecha, n);
    }


}
 

void dibujarRamasArbolAVL(Empleado2* arbol) {

    if (arbol == NULL)
    {
        return;
    }
    dibujarRamasArbolAVL(arbol->Izquierda);

    if (arbol->Izquierda != NULL) {
        izquierdaArbolBBR(arbol->PosiX, arbol->PosiY, arbol->Izquierda->PosiX, arbol->Izquierda->PosiY);
    }
    if (arbol->derecha != NULL) {
        DerechoArbolBBR(arbol->PosiX, arbol->PosiY, arbol->derecha->PosiX, arbol->derecha->PosiY);
    }

    dibujarRamasArbolAVL(arbol->derecha);

}




Empleado2* insertarNodoOrdenAAVL(Empleado2*& arbol,int id, string nombre, string Apellido, string role,string direccion, string genero, int numTelefono,int salario) {
    if (arbol == NULL)
    {
        Empleado2* NuevoNodo = new Empleado2();
        NuevoNodo->id = id;
        NuevoNodo->nombre = nombre;
        NuevoNodo->Apellido = Apellido;
        NuevoNodo->role = role;
        NuevoNodo->direccion = direccion;
        NuevoNodo->genero = genero;
        NuevoNodo->numTelefono = numTelefono;
        NuevoNodo->salario = salario;

        NuevoNodo->derecha = NULL;
        NuevoNodo->Izquierda = NULL;
        NuevoNodo->PosiX = 0;
        NuevoNodo->PosiY = 0;
        NuevoNodo->altura = 1;
        return NuevoNodo;
    }
    if (id < arbol->id)
        arbol->Izquierda = insertarNodoOrdenAAVL(arbol->Izquierda,  id, nombre, Apellido, role, direccion, genero, numTelefono, salario);
    else
        arbol->derecha = insertarNodoOrdenAAVL(arbol->derecha,  id, nombre, Apellido, role, direccion, genero, numTelefono, salario);

    arbol->altura = setHeight(arbol);
    int balance = height(arbol->Izquierda) - height(arbol->derecha);

    if (balance > 1)
    {
        if (height(arbol->Izquierda->Izquierda) >= height(arbol->Izquierda->derecha))
        {
            return rotateRight(arbol);
        }
        else
        {
            arbol->Izquierda = rotateLeft(arbol->Izquierda);
            return rotateRight(arbol);
        }
    }
    if (balance < -1)
    {
        if (height(arbol->derecha->derecha) >= height(arbol->derecha->Izquierda))
        {
            return rotateLeft(arbol);
        }
        else
        {
            arbol->derecha = rotateRight(arbol->derecha);
            return rotateLeft(arbol);
        }
    }

    return arbol;
}

int height(Empleado2* root)
{

    if (root == NULL)
        return 0;
    return root->altura;

}

int setHeight(Empleado2* root)
{

    if (root == NULL)
        return 0;
    int left = root->Izquierda != NULL ? root->Izquierda->altura : 0;
    int right = root->derecha != NULL ? root->derecha->altura : 0;

    return 1 + (left > right ? left : right);

}

Empleado2* rotateRight(Empleado2* root)
{

    Empleado2* tmp = root->Izquierda;
    root->Izquierda = root->Izquierda->derecha;
    tmp->derecha = root;
    root->altura = setHeight(root);
    tmp->altura = setHeight(tmp);

    return tmp;

}

Empleado2* rotateLeft(Empleado2* root)
{

    Empleado2* tmp = root->derecha;
    root->derecha = root->derecha->Izquierda;
    tmp->Izquierda = root;
    root->altura = setHeight(root);
    tmp->altura = setHeight(tmp);

    return tmp;

}





//other


void mensajeDatoNoEnco() {
    system("cls");
    rlutil::setColor(3);
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(70+i, 15);  cout << (char)254;
    }
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(70 + i, 25);  cout << (char)254;
    }

    for (size_t i = 0; i < 9; i++)
    {
        rlutil::locate(70, 16+i);  cout << (char)219;
    }
    for (size_t i = 0; i < 9; i++)
    {
        rlutil::locate(139 , 16+i);  cout << (char)219;
    }

    rlutil::setColor(14);
    rlutil::locate(80, 20); cout << "LOS DATOS QUE QUIERE VISUALIZAR NO SE ENCONTRO";
    rlutil::msleep(1700);

    system("cls");
}

void mensajeNoHayDatosParaEli() {
    system("cls");
    rlutil::setColor(3);
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(70 + i, 15);  cout << (char)254;
    }
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::locate(70 + i, 25);  cout << (char)254;
    }

    for (size_t i = 0; i < 9; i++)
    {
        rlutil::locate(70, 16 + i);  cout << (char)219;
    }
    for (size_t i = 0; i < 9; i++)
    {
        rlutil::locate(139, 16 + i);  cout << (char)219;
    }

    rlutil::setColor(14);
    rlutil::locate(80, 20); cout << "NO SE ENCONTRO NINGUN DATO PARA ELIMINAR, SORRY";
    rlutil::msleep(1700);

    system("cls");
}


void showItem(const char* text, int posx, int posy, bool selected) {
    if (selected)
    {
        rlutil::setBackgroundColor(3);
        rlutil::setColor(0);
    }
    else
    {
        rlutil::setBackgroundColor(0);
        rlutil::setColor(9);
    }
    rlutil::locate(posx, posy); cout << text << endl;
    rlutil::setBackgroundColor(0);
    rlutil::setColor(9);
};

void cuadro(int x1, int y1, int x2, int y2) {
    int i;

    for (i = x1; i < x2; i++) {
        gotoxy(i, y1); cout << (char)205; //linea horizontal superior
        gotoxy(i, y2); cout << (char)205; //linea horizontal inferior
    }

    for (i = y1; i < y2; i++) {
        gotoxy(x1, i); cout << (char)186; //linea vertical izquierda
        gotoxy(x2, i); cout << (char)186; //linea vertical derecha
    }
    gotoxy(x1, y1); cout << (char)201;
    gotoxy(x1, y2); cout << (char)200;
    gotoxy(x2, y1); cout << (char)187;
    gotoxy(x2, y2); cout << (char)188;
}

void listSimInsertOp(const char* text, int posx, int posy){
    rlutil::setBackgroundColor(0);
    rlutil::setColor(9);
    rlutil::locate(posx-5, posy); cout << text;
    for (size_t i = 0; i < 70; i++)
    {
        rlutil::setColor(10);
        rlutil::locate(posx+i-5, posy + 1); cout << (char)254;
    }
}

void verArbolDetaNodo(const char* text, int posx, int posy) {
    rlutil::setBackgroundColor(0);
    rlutil::setColor(5);
    rlutil::locate(posx, posy); cout << text;
    for (size_t i = 0; i < 34; i++)
    {
        rlutil::setColor(13);
        rlutil::locate(posx + i, posy + 1); cout << (char)254;
    }
}

void cuadroRelle3(int xG, int yG, int num){
    for (size_t i = 0; i < num; i++)
    {
        rlutil::locate( xG+ 75 + i, yG+ 2); cout << (char)219;
        rlutil::locate( xG+ 75 + i, yG+ 3); cout << (char)219;
        rlutil::locate( xG+ 75 + i, yG+ 4); cout << (char)219;
    }
}

void cuadroRelle3_1(int xG, int yG, int num) {
    for (size_t i = 0; i < num; i++)
    {
        rlutil::locate(xG  + i, yG + 2); cout << (char)219;
        rlutil::locate(xG  + i, yG + 3); cout << (char)219;
        rlutil::locate(xG+ i, yG + 4); cout << (char)219;
    }
}

void NoHayDatos() {
    rlutil::setColor(13);
    cuadroRelle3( 0, 15, 60);
    rlutil::setColor(0);
    rlutil::setBackgroundColor(13);
    rlutil::locate(92,18); cout << "LA LISTA SE ENCUENTRA VACIA";
    rlutil::setBackgroundColor(0);
    cout << endl; cout << endl;
}

void cuadrolinea(int x1, int y1, int x2, int y2) {
    int i;

    for (i = x1; i < x2; i++) { 
        gotoxy(i, y1); cout << (char)196; //linea horizontal superior
        gotoxy(i, y2); cout << (char)196; //linea horizontal inferior
    }

    for (i = y1; i < y2; i++) {
        gotoxy(x1, i); cout << (char)179; //linea vertical izquierda
        gotoxy(x2, i); cout << (char)179; //linea vertical derecha
    }
    rlutil::setColor(rlutil::LIGHTCYAN);
    gotoxy(x1, y1); cout << (char)218;
    gotoxy(x1, y2); cout << (char)192;
    gotoxy(x2, y1); cout << (char)191;
    gotoxy(x2, y2); cout << (char)217;
}


void dibujarRamasArbolBB(Empleado* arbol) {

    if (arbol == NULL)
    {
        return;
    }
    dibujarRamasArbolBB(arbol->Izquierda);

    if (arbol->Izquierda != NULL) {
        izquierdaArbolBBR(arbol->PosiX, arbol->PosiY, arbol->Izquierda->PosiX, arbol->Izquierda->PosiY);
    }
    if (arbol->derecha != NULL) {
        DerechoArbolBBR(arbol->PosiX, arbol->PosiY, arbol->derecha->PosiX, arbol->derecha->PosiY);
    }

    dibujarRamasArbolBB(arbol->derecha);

}

void izquierdaArbolBBR(int x, int y, int x2, int y2) {

    rlutil::setColor(5);
    int i =0;

    for (i = 0; i < (x-x2)-6; i++) {
        //x-6 para que empieze depues de los circulos
        gotoxy((x-6)-i, y); cout << (char)196; //linea horizontal superior
    }
    gotoxy((x-6)-i, y); cout << (char)218;

    for ( int e = 0; e < 7; e++) {
        gotoxy((x-6)-i, (y+e)+1); cout << (char)179; //linea vertical izquierda
    }
}

void DerechoArbolBBR(int x, int y, int x2, int y2) {

    rlutil::setColor(5);
    int i = 0;

    for (i = 0; i < (x2 - x)-6; i++) {
        gotoxy((x + 7) + i, y); cout << (char)196; //linea horizontal superior
    }
    gotoxy((x + 7) + i, y); cout << (char)191;

    for (int e = 0; e < 7; e++) {
        gotoxy( (x + 7) + i, (y + e) + 1); cout << (char)179; //linea vertical izquierda
    }
}









//
//
//
//

