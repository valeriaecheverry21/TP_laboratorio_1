
#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
typedef struct{
int idMovie;
char titulo[50];
char genero[50];
int duracion;
char description[200];
int points;
char linkImagen[400];
int isEmpty;
}eMovie;


void listarPeliculas(eMovie*,int );
int buscarPrimero(eMovie*,int,int );
int buscarPorID(eMovie*,int,int );
int iniciarArray(eMovie*,int );
int opternerDatosPelicula(eMovie*,int );
int esSoloLetras(char*);
int esNumerico(char*);
void getString(char*,char*);
int getStringLetras(char*,char*);
int getStringNumeros(char*,char*);
void getValidString(char*,char*,char*);
int getValidInt(char*,char*,int,int );
int getIntRango(int,int,int );
int menuPrincipal();
int menuModificar();
int asignarDatosPelicula(eMovie*,int,char*,char*,char*,int,int,char*,int );
int eliminarPelicula(eMovie*,int );
int modificarPelicula(eMovie*,int );
int cargarBinario(eMovie*,int );
void guardarBinario(eMovie*,int );
void generarHtml(eMovie*,int );

#endif // LIB_H_INCLUDED
