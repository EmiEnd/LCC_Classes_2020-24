#include <iostream> 
#include <string>
#include <cstdlib>
#include <complex>

using namespace std;

int main()
{
    //COMMENTS//
    // Can be done with /* and '//' 
    // If done with */  it can take up multiple lines of text
    /* ex
         am
           ple
    */


    //  VARIABLES  //
    cout << "// VARIABLES //" << endl;
    string name = "EmiEnd"; //cadena de caracteres 
    char oneLetter = 'A';   //en C++ se declaran las variables de un solo caracter con '' en vez de ""

    //Numeros enteros // you can make them unsigned by adding the "unsigned" prefix
    short age0 = 10;        //16-bits - entero con signo
    int age1 = 20;          //16-bits - entero con signo (No es mas corto que short)
    long age2  = 30;        //32-bits - entero con signo

    //Numeros decimales // long=mas numeros decimales
    float float1 = 2.5;      //single precision floating point
    double double1 = 3.5;      //double-precision floating point 
    long double l_double = 3.5; //extended-precision floating point 

    bool true_or_false;            //1 bit-> falso/verdadero
    true_or_false = true;


    //CONSTANTES//
    cout << "//CONSTANTES //" << endl;
    int const BIRTH_YEAR = 2001;
    /*
    siempre nombrar a las constantes con mayusculas
    se pueden declar de la siguient forma:
    int const BIRTH_YEAR = const int BIRTH_YEAR  / la segunda es mas utilizada
    */
    name = "Andy";
    cout << "Aqui usare la variable 'name' y la constante 'BIRTH_YEAR' en un ejemplo de salida de texto."  << endl;
    cout << "   Your name is " << name << " and you were born in " << BIRTH_YEAR << endl;
    cout << "" << endl;

    //CASTEAR//
    cout << "CASTEAR" << endl;
    // el formato es de (int)3.14 / (double)3 / 2
    //convierte x tipo de variable en otro.
    cout << "Aqui estoy casteando una variable tipo float 3.14 a int." << endl;
    cout << (int)3.14 <<endl;
    cout << "Aqui estoy casteando una variable tipo int 3/2 a double." << endl;
    cout << (double)3 / 2 <<endl;
    cout << "" << endl;

    //PUNTEROS//
    cout << "// PUNTERROS //" << endl;
    /*
    es el punto en la memoria donde se guarda la variable
    &[variable name] arroja el valor del puntero
    este valor se puede guardar
    */
    cout << "Declaramos una variable int num = 10, a la cual usaremos como ejemplo." << endl;
    int num = 10;
    cout << "Aqui uso el puntero de la variable num usando &num: " << &num << endl; //el & se llama operador de direccion y se puede usar antes de cualquier variable

    // el formato es de: [tipo de variable] *[nombre del puntero] = &[variable original]  /la segunda parte se puede omitir ej. desde el =&
    int *pNum = &num;
    cout << "Aqui estoy usando el puntero de forma *pNum: " << pNum << endl;
    cout << "Aqui estoy usando *pNUM para leer a quien apunta el puntero: " << *pNum << endl; //se lee a quien apunta el puntero
    cout << "" << endl;

    //STRINGS//
    cout << "// STRINGS //" << endl;
    string throw_away = "EmiEnd";
    string greeting = "Hello"; // no es un tipo primitivo de lenguaje, es definido por el programador y viene en las librerias estandar
    //      indices =  01234
    cout << "El contenido de la longitud= " << greeting.length() << endl;      //da el contenido de la longitud  ----------------  "el tamaño del contenido"
    cout << "La capacidad real de la cadena= " << greeting.capacity() << endl;    //da el tamaño real de la capacidad de la cadena "el tamaño del contenedor"
    cout << "El caracter en el indice [0]= " << greeting[0] <<endl;             //Arroja el caracter que este en el indice dentro del corchete
    cout << "Encuentra la subcadena 'llo'= " << greeting.find("llo") << endl;   //Encuentar la subcadena "llo" dentro de la cadena original
    cout << "Extrae la subcadena desde el indice (2)= " << greeting.substr(2) <<endl;      //Extrae la subcadena desde el indice especificado dentro de la cadena 
    cout << "Extre la cadena quitando los indices (1,3)= " << greeting.substr(1,3) <<endl;    //Extra la cadena quitando los caracteres en los indices dentro de la cadena
    cout << "Cadena original= " << greeting << endl;
    cout << "Cadena original 2= " << throw_away << endl;
    cout << "Concatenar sin modificar= " << (greeting + throw_away) << endl;      //un operador de concatenar en string, no modifica el contenido de ninguna, solo arroja la cadena resultante.
    cout << "Prueba de que no se modifico= " << throw_away << endl;
    cout << "Concatenar pero modificando= " << (throw_away += greeting) << endl;     //modifica la primera cadena en el += con el contenido de la segunda, se lo pega al final del contenido de la primera
    cout << "Prueba de que se modifico=  " << throw_away << endl;
    //los primitivos son char[], que ya vienen en el lenguaje por default.
    cout << "" << endl;

    //NUMEROS//
    cout << "// NUMEROS //" << endl;
    //Operaciones Basicas
    cout << "2 * 3 = " << 2 * 3 << endl;          // multiplicacion
    cout << "10 % 3 = " << 10 % 3 << endl;         // divison modulo
    cout << "(jerarquia de operaciones) 1 + 2 *3 = " << 1 + 2 * 3 << endl;      // jerarquia de operaciones
    cout << "(division entre tipos de variables) 10 / 3.0 = " << 10 / 3.0 << endl;       // division entre diferentes tipos de variables
    cout << "(numeros imaginarios) ???" << 10-(-10) << endl;      // numeros imaginarios  ----pendiente-----
    //los numeros imaginarios no son primitivos y se añaden con la libreria complex
    cout << "" << endl;
    //Operadores Logicos y Relacionales//
    int x,y;
        x && y;     // x Y y
        x || y;     // x O y
        !x;         // NEGACION 
        x != y;     // x NO ES IGUAL y   
        x == y;      // x ES IGUAL y
        x > y;      // x ES MAYOR QUE y
        x < y;      // x ES MENOR QUE y
        x >= y;     // x ES MAYOR O IGUAL QUE y
        x <= y;     // x ES MENOR O IGUAL QUE y

    int numExample = 10;
    cout << "Usamos la variable numExample para el siguiente ejemplo, numExample= " << numExample << endl;
    numExample += 100; //+=, -=, /=, *=, %= basicamente num=num+100 in pseint
    //se asigna el resultado de la operacion a la variable 
    cout << "Se usa la funcion += para sumarle 100 al valor original de numExample= " << numExample << endl;

    //PREINCREMENTOS Y POSTINCREMENTOS//
    // por si solo no funciona diferente incrementa o decrementa el valor del operando
    ++numExample; //preincremento en +1 
    numExample++; //postincremento en +1 
    --numExample; //predecremento en -1 
    numExample--; //postdrecremnto en -1 al 
    //en ambos casos puede ser durante o al finalizr el ciclo
    cout << "" << endl;

    //ENTRADA DEL USUARIO//
    cout << "// ENTRADA DEL USUARIO //" << endl;

    string name2; 
    char letra; /* por default es uno solo, pero si se usan [] y un numero adentro se le da dimension a la variable.
    Siempre se tiene que tomar en cuenta con un caracter de sobra ya que se toma el caracter de fin de cadena '\0', entonces
    si se tiene 50 caracteres que se desean usar, se define la variable con [51]. 
    */
    cout << "Ingresa tu nombre: "; // cout es console out es para imprimir
    getline(cin, name2); // getline se usa con el formato getline(cin, [cadena]) en strings
    //en cadenas primitivas; char[], se usa como cin.getline([cadena], [tamaño])
    //se usa en ambas cuando se quiere que la cadena se lea con espacios, si no lleva espacios se usa cin >> [cadena];
    cout << "Hola, " << name2 << endl;
    cout << "Ingresa una letra: ";
    cin >> letra;
    cout << "La letra es: " << letra << endl;  
    
    int num1, num2;
    cout << "Primer numero: ";
    cin >> num1;
    cout << "Segundo numero: ";
    cin >> num2;
    cout << "La suma es " << (num1 + num2) << endl;
    // utilizar parentesis para evitar problemas de prioridad de los operadores
    cout << "" << endl;


    //ARREGLOS//
    cout << "ARREGLOS" << endl;

    int arreglo1[]={4,8,15,17,26,44}; //lo mismo que en pseint
    //      indexes:    0 1  2  3  4  5 
    cout << "El arreglo es {4,8,15,17,26,44}" << endl;
    cout << "Dato en el indice [0]= " << arreglo1[0] << endl;
    arreglo1[0]=0;      //se asigna un nuevo valor al indice 0 en el arreglo
    cout << "Se cambia el valor en el indice [0] a 0 con arreglo[0]=0 " << endl;
    cout << "Dato en el indice [0]= " << arreglo1[0] << endl;    //arroja el dato que este en el indice [0]
    cout << "Dato en el indice [1]= " << arreglo1[1] << endl;    //arroja el dato que este en el indice [1] 

    //cuando se declara un arreglo, se pone entre [] el tamaño del arreglo, pero si no se usa esto y solo se declaran los datos, todos los demas espacios se rellenan con 0's
    int ejemplo[10]={1,2,3};
    //tiene diez elementos, pero solo los primeros tres estan inicializados, asi que el arreglo es 1,2,3,0,0,0,0,0,0,0
    cout << "" << endl;


    //CONDICIONES//
    cout << "CONDICIONES" << endl;
    int a1, a2;
    cout << "Ingrese a1 & a2: ";
    cin >> a1 >> a2;
    // if //
    if (a1>a2){
        cout << "a1 es mayor que a2" << endl;
    }else{
        cout << "a1 NO es mayor que a2" << endl;
    }

    //switch//
    cout << "SWITCH" << endl;
    int selector; //el selector puede ser solamente int o char, como codigo de honor de programador usar int, de igual manera se hace una converison implicita, short tmb se promueve a int
    cout << "selector: ";
    cin >> selector;
    switch(selector){      //Dependiendo del valor de la variable adentro de los (), se tomara un caso y se ejecutara el codigo dentro del caso.
        case 1: //los : que se ponen despues de declarar el caso, le indican al programa donde iniciar el case
            cout << "condicional == 1" << endl;
            break; //Si no se agrega el break; en cada caso, se ejecutaran todos los siguientes casos.
        case 2:
            cout << "condicional == 2" << endl;
            break;
        case 3:
            cout << "condicional == 3" << endl;
            break; 
        default:  //El caso default es el "de otro modo" en pseint. Se puede excluir cuando todos los posibles casos ya estan tomados en cuenta en la lista case anterior.
            cout << "condicional != 1,2,3" << endl;
            break;
    }   //se soportan hasta 256 casos
    cout << "" << endl;

    // ENUMERACIONES //
    //Formato general -- en la mayoria de los casos se pone fuera del main
    enum nombre_tipo_enumerado {uno,dos,tres,cuatro} n1;
    //                 indices = 0   1    2     3    -- todos empiezan desde el cero y siguen de manera consecutiva
    n1= uno;
    cout << "Valor de la primera posicion= " << n1 <<endl;
    // en cambio, si se le asigna un valor al momento de declarar, todos lo valores siguen desde el valor asignado
    enum enumeracion2 {uno=1,dos,tres,cuatro} n2;
    //       indices =  1     2    3     4
    cout << "n1= " << n2 <<endl;


    // CICLOS //
    int x3;

    for(x3 = 10; x3<=12; ++x3){  //cuando se sepa de forma contrlada cuantas veces se debe repetir un proceso
        cout << "for // x3 = " << x3 << endl;
    } 

    do{  //si se ejecuta por lo menos una vez la sentencia
        cout << "do while // x3 = " << x3 << endl;
        x3 += 1;
    }while(x3<=13);

    while(x3<=13){   //en todos los demas casos se usa este ciclo
        cout << "lol" <<endl;  
    }
    cout << " " <<endl;

    system("pause");    //Hace que el programa se pause despues de la ultima linea.
    return 0;               
}
