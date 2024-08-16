#include "funciones.h"

//interfaces principales
void Pila();
void Cola();
void ListaSimple();
void ListaSimpleCircu();
void ListaDobleEnla();
void ArbolABB();
void ArbolAVL();


int main()
{
    rlutil::setBackgroundColor(0);
    introPortada();
    rlutil::msleep(3000);
    system("cls");

    int opcion = 1; int y = 0;
    do
    {
        rlutil::hidecursor();
        menuPrincipal(y);
        rlutil::setColor(2);
        rlutil::locate(76, 13 + y); cout << (char)175 << endl;
        int key = rlutil::getkey();
        rlutil::locate(76, 13 + y);
        cout << " " << endl;

        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 14; break;
        case 15:
            y = y + 2;
            if (y > 14)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                Pila(); break;
            case 2:
                Cola(); break;
            case 4:
                ListaSimple(); break;
            case 6:
                ListaSimpleCircu(); break;
            case 8:
                ListaDobleEnla(); break;
            case 10:
                ArbolABB(); break;
            case 12:
                ArbolAVL(); break;
            case 14:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }

    } while (opcion != 0);
    cout << endl; cout << endl;
    return 0;
}

void Pila() {
    system("cls");
    Persona* pila = NULL;
    int opcion = 1; int y = 0;
    do
    {
        menuPilaOp(y);
        rlutil::setColor(2);
        rlutil::locate(71, 13 + y); cout << (char)219 << endl;
        int key = rlutil::getkey();
        rlutil::locate(71, 13 + y); cout << " " << endl;
        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 8; break;
        case 15:
            y = y + 2;
            if (y > 8)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                ingresarDaPila(pila); break;
            case 2:
                verDaPila(pila); break;
            case 4:
                VaciarPila(pila); break;
            case 6:
                eliminarDaPila(pila); break;
            case 8:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }
    } while (opcion != 0);
    system("cls");
}

void Cola() {
    rlutil::cls();
    //pila
    Persona* frente = NULL;
    Persona* fin = NULL;

    //varibles de menu
    int opcion = 1; int y = 0;

    do
    {
        menuColaOp(y);
        rlutil::setColor(2);
        rlutil::locate(71, 13 + y); cout << (char)219 << endl;
        int key = rlutil::getkey();
        rlutil::locate(71, 13 + y); cout << " " << endl;

        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 8; break;
        case 15:
            y = y + 2;
            if (y > 8)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                ingresarDaCola(frente, fin); break;
            case 2:
                verDaCola(frente, fin); break;
            case 4:
                vaciarCola(frente, fin); break;
            case 6:
                eliminarDaCola(frente, fin); break;
            case 8:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }
    } while (opcion != 0);
    system("cls");
}

void ListaSimple() {
    system("cls");
    Producto* lista = NULL;
    int opcion = 1; int y = 0;
    do
    {
        menuListaSimpleOp( y );
        rlutil::setColor(2);
        rlutil::locate(71, 13 + y); cout << (char)219 << endl;
        int key = rlutil::getkey();
        rlutil::locate(71, 13 + y); cout << " " << endl;
        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 8; break;
        case 15:
            y = y + 2;
            if (y > 8)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                insertListSimple(lista); break;
            case 2:
                mostrarListaSimple(lista); break;
            case 4:
                elimnarListSimple(lista); break;
            case 6:
                vaciarListaSimple(lista); break;
            case 8:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }
    } while (opcion != 0);
    system("cls");
}

void ListaSimpleCircu() {
    system("cls");

    Producto* cabeza = NULL;
    Producto* ultimo = NULL;

    int opcion = 1; int y = 0;
    do
    {
        menuListaCircularOp(y);
        rlutil::locate(79, 14 + y); cout << (char)175 << endl;
        int key = rlutil::getkey();
        rlutil::locate(79, 14 + y); cout << " " << endl;
        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 8; break;
        case 15:
            y = y + 2;
            if (y > 8)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                insertListCircu( cabeza, ultimo ); break;
            case 2:
                mostrarListCircu(cabeza); break;
            case 4:
                eliminarListCircu(cabeza, ultimo ); break;
            case 6:
                vaciarListCircu(cabeza, ultimo ); break;
            case 8:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }
    } while (opcion != 0);
    system("cls");
}


void ListaDobleEnla() {
    system("cls");


    Producto2* primero = NULL;
    Producto2* ultimo = NULL;


    int opcion = 1; int y = 0;
    do
    {
        menuListaDobleOp(y);
        rlutil::locate(79, 14 + y); cout << (char)175 << endl;
        int key = rlutil::getkey();
        rlutil::locate(79, 14 + y); cout << " " << endl;
        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 8; break;
        case 15:
            y = y + 2;
            if (y > 8)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                insertListDoble(primero,  ultimo ); break;
            case 2:
                mostrarListDoble(primero ); break;
            case 4:
                eliminarListDoble(primero ); break;
            case 6:
                vaciarListDoble(primero ); break;
            case 8:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }
    } while (opcion != 0);
    system("cls");
}

void ArbolABB(){
    system("cls");
    Empleado* arbol = NULL;

    int opcion = 1; int y = 0;
    do
    {
        menuArbolABBOp(y);
        rlutil::setColor(2);
        rlutil::locate(71, 13 + y); cout << (char)219 << endl;
        int key = rlutil::getkey();
        rlutil::locate(71, 13 + y); cout << " " << endl;
        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 14; break;
        case 15:
            y = y + 2;
            if (y > 14)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                insertArbolABB(arbol); break;
            case 2:
                mostrarArbolBB( arbol); break;
            case 4:
                buscarArbolABB(arbol); break;
            case 6:
                RecorrerPreOrden(arbol); break;
            case 8:
                RecorrerPostOrden(arbol); break;
            case 10:
                RecorrerInOrden(arbol); break;
            case 12:
                EliminarNodoArbol(arbol ); break;
            case 14:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }
    } while (opcion != 0);
    system("cls");
}


void ArbolAVL() {
    system("cls");
    Empleado2* arbol = NULL;

    int opcion = 1; int y = 0;
    do
    {
        menuArbolAVLOp(y);
        rlutil::setColor(2);
        rlutil::locate(71, 13 + y); cout << (char)219 << endl;
        int key = rlutil::getkey();
        rlutil::locate(71, 13 + y); cout << " " << endl;
        switch (key)
        {
        case 14:
            y = y - 2;
            if (y < 0)y = 14; break;
        case 15:
            y = y + 2;
            if (y > 14)y = 0; break;
        case 1:
            switch (y)
            {
            case 0:
                insertAAVL(arbol); break;
            case 2:
                mostrarArbolAVL(arbol); break;
            case 4:
                buscarArbolAVL(arbol); break;
            case 6:
                RecorrerPreOrdenAVL(arbol); break;
            case 8:
                RecorrerPostOrdenAVL(arbol); break;
            case 10:
                RecorrerInOrdenAVL(arbol); break;
            case 12:
                EliminarNodoArbolAVL(arbol); break;
            case 14:
                opcion = 0; break;
            default:break;
            }
        default:break;
        }
    } while (opcion != 0);
    system("cls");
}