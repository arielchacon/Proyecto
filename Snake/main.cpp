#include<curses.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
#define ESC 27

int key;
int puntuacion=0,X=35,Y=12,nx=15,ny=10,i,j=0,x[50],y[50];

 int main()
{

initscr();
mvprintw(10,30,"Bienvenido al Snake" );
mvprintw(11,20,"Presione cualquier tecla para comenzar a jugar");
keypad(stdscr, 1);
cbreak();
do{
initscr();
key=getch();
clear();
srand (time(NULL));
move(22,5);printw("Puntuacion: %d",puntuacion );
mvprintw(2,77, "|");
mvprintw(3,77, "|");
mvprintw(4,77, "|");
mvprintw(5,77, "|");
mvprintw(6,77, "|");
mvprintw(7,77, "|");
mvprintw(8,77, "|");
mvprintw(9,77, "|");
mvprintw(10,77, "|");
mvprintw(11,77, "|");
mvprintw(12,77, "|");
mvprintw(13,77, "|");
mvprintw(14,77, "|");
mvprintw(15,77, "|");
mvprintw(16,77, "|");
mvprintw(17,77, "|");
mvprintw(18,77, "|");
mvprintw(19,77, "|");
mvprintw(20,77, "|");
mvprintw(20,3, "===========================================================================");
mvprintw(2,3, "|");
mvprintw(3,3, "|");
mvprintw(4,3, "|");
mvprintw(5,3, "|");
mvprintw(6,3, "|");
mvprintw(7,3, "|");
mvprintw(8,3, "|");
mvprintw(9,3, "|");
mvprintw(10,3, "|");
mvprintw(11,3, "|");
mvprintw(12,3, "|");
mvprintw(13,3, "|");
mvprintw(14,3, "|");
mvprintw(15,3, "|");
mvprintw(16,3, "|");
mvprintw(17,3, "|");
mvprintw(18,3, "|");
mvprintw(19,3, "|");
mvprintw(20,3, "|");
mvprintw(1,3, "===========================================================================");
if(nx==3)
{nx=77;}
else if(nx==77)
{nx=3;}
else if(ny==2)
{ny=19;}
else if(ny==20)
{ny=1;}

mvprintw(Y,X,"@");
if(nx==X){
if(ny==Y){
j=j+1;
puntuacion=puntuacion+10;
Y=rand()%19;
X=rand()%74;
}}
y[0]=ny;
x[0]=nx;
i=j-1;
while(i>=0){
mvprintw(ny,nx,"X");
Y=y[i-1];
X=x[i-1];
i--;
}
if(key==KEY_UP)   { ny--; }
if(key==KEY_LEFT) {	nx--; }
if(key==KEY_DOWN) {	ny++; }
if(key==KEY_RIGHT){	nx++; }
mvprintw(ny,nx,"O" );

}while(key!=27);
endwin();
}
