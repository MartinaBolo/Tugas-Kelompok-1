// Tugas-Kelompok1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// Tugas 6_PembuatanBentuk3D.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <glut.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>


/*
void axis(double length)
{ 
	glPushMatrix();
	glBegin(GL_LINES);
	   glVertex3d(0, 0, 0); glVertex3d(0,0,length); 
	glEnd();
	glTranslated(0, 0,length -0.2); 
	glutWireCone(0.04, 0.2, 12, 9);
	glPopMatrix();
}	

void displayWire(void)
{
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();
	glOrtho(-2.0*64/48.0, 2.0*64/48.0, -2.0, 2.0, 0.1, 100);
	glMatrixMode(GL_MODELVIEW); 
	glLoadIdentity();
	gluLookAt(2.0, 2.0, 8.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
	glClear(GL_COLOR_BUFFER_BIT); 
    glColor3d(0,0,0);			

	glPushMatrix();
	//glTranslated(0.5, 0.5, 0.5); 
	glutWireCube(2.0);
	glPopMatrix();

	glPushMatrix();	
	//glTranslated(1.0,1.0,0);	
	glutWireSphere(0.25, 10, 8);
	glPopMatrix();	

	glPushMatrix();
	glTranslated(0, 2 ,2);
	GLUquadricObj * qobj;
	qobj = gluNewQuadric();
	gluQuadricDrawStyle(qobj,GLU_LINE);
	gluCylinder(qobj, 0.2, 0.8, 2, 8, 10);
	glPopMatrix();

	glFlush();
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
	glutInitWindowSize(640,480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Objek 3D");
	glutDisplayFunc(displayWire);
	glClearColor(1.0f, 1.0f, 1.0f,0.0f);  
	glViewport(0, 0, 640, 480);
	glutMainLoop();
}
*/
 
/* 
* Program transformasi.cpp 
* Pengenalan OpenGL 
*/ 

 //BALOK// 
void balok(float x, float y, float z, float a, float b, float c) 
{ 
 //Sisi Bawah 
glBegin(GL_QUADS); 
glVertex2f(10,10); 
glVertex2f(0,0); 
glVertex2f(120,0); 
glVertex2f(110,10); 
glEnd(); 
 //Sisi Belakang 
glBegin(GL_QUADS); 
glVertex2f(10,50); 
glVertex2f(10,10); 
glVertex2f(130,10); 
glVertex2f(130,50); 
glEnd(); 
 //Sisi Samping Kanan 
glBegin(GL_QUADS); 
 glVertex2f(120,40); 
glVertex2f(120,0); 
glVertex2f(130,10); 
glVertex2f(130,50); 
glEnd(); 
 //Sisi Samping Kiri 
glBegin(GL_QUADS); 
glColor3f(x,y,z); 
glVertex2f(0,40); 
glVertex2f(0,0); 
glVertex2f(10,10); 
glVertex2f(10,50); 
glEnd(); 
 //Sisi Depan 
glBegin(GL_QUADS); 
glVertex2f(0,40); 
glVertex2f(0,0); 
glVertex2f(120,0); 
glVertex2f(120,40); 
glEnd(); 
//Sisi Atas 
glBegin(GL_QUADS); 
glColor3f(a,b,c); 
glVertex2f(10,50); 
glVertex2f(0,40); 
glVertex2f(120,40); 
glVertex2f(130,50); 
glEnd(); 
} 
 void balok2(float d, float e, float f, float g, float h, float i) 
{ 
 //Sisi Bawah 
glBegin(GL_QUADS); 
glColor3f(d,f,g); 
glVertex2f(10,10); 
glVertex2f(0,0); 
glVertex2f(120,0); 
glVertex2f(130,10); 
glEnd(); 
 //Sisi Belakang 
glBegin(GL_QUADS); 
glColor3f(f,e,f); 
glVertex2f(10,30); 
glVertex2f(10,10); 
glVertex2f(130,10); 
glVertex2f(130,30); 
glEnd(); 
 //Sisi Samping Kanan 
glBegin(GL_QUADS); 
glColor3f(d,f,f); 
glVertex2f(120,40); 
glVertex2f(120,0); 
glVertex2f(130,10); 
glVertex2f(130,30); 
glEnd(); 
 //Sisi Samping Kiri 
glBegin(GL_QUADS); 
glColor3f(g,h,i); 
glVertex2f(0,40); 
glVertex2f(0,0); 
glVertex2f(10,10); 
glVertex2f(10,30); 
glEnd(); 
//Sisi Atas 
glBegin(GL_QUADS); 
glColor3f(f,g,d); 
glVertex2f(10,30); 
glVertex2f(0,40); 
glVertex2f(120,40); 
glVertex2f(130,40); 
glEnd(); 
 //Sisi Depan 
glBegin(GL_QUADS); 
glColor3f(d,e,f); 
glVertex2f(0,40); 
glVertex2f(0,0); 
glVertex2f(120,0); 
glVertex2f(120,40); 
glEnd(); 
} 
 void display(void) 
 { 
/* Membersihkan semua pixel di buffer(clear all pixels) */ 
glClear (GL_COLOR_BUFFER_BIT); 
 glPushMatrix(); 
glTranslatef(300.0,300.0,0.0); 
balok(1.0,0.0,0.0,0,0,1); 
glPopMatrix(); 
 //Tangan Robot Datar 
glPushMatrix(); 
glColor3f(0.6,0.3,0.8); 
glTranslatef(448.0,312.0,0.0); 
glRotatef(45.0,0.0,0.0,1.0); 
balok2(0.1,0.1,0.4,0.6,0.8,0.3); 
glPopMatrix(); 
 //jari  bawah 
glColor3f(0.6,0.4,0.8); 
glPushMatrix(); 
glTranslatef(532.0,396.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(0.0,0.0,0.0,1.0); 
balok(0.8,0.7,0.3,2.8,0.8,0.8); 
glPopMatrix(); 
 //bawah atas 
glColor3f(0.6,0.4,0.8); 
glPushMatrix(); 
glTranslatef(577.0,400.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(50.0,0.0,0.0,1.0); 
balok2(0.8,0.7,0.3,2.8,0.8,0.8); 
glPopMatrix(); 
 //jari kedua atas 
glColor3f(0.6,0.4,0.8); 
glPushMatrix(); 
glTranslatef(546.0,439.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(15.0,0.0,0.0,1.0); 
balok(0.5,0.6,0.3,0.6,0.8,0.2); 
glPopMatrix(); 
 //jari ketiga atas 
glColor3f(0.6,0.4,0.8); 
glPushMatrix(); 
glTranslatef(535.0,450.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(25.0,0.0,0.0,1.0); 
balok(0.9,0.5,0.3,0.6,0.4,0.2); 
glPopMatrix(); 
 glColor3f(0.6,0.4,0.8); 
glPushMatrix(); 
glTranslatef(515.0,463.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(30.0,0.0,0.0,1.0); 
balok(0.9,0.6,0.8,0.4,0.4,0.3); 
glPopMatrix(); 
 glColor3f(0.6,0.4,0.8); 
glPushMatrix(); 
glTranslatef(516.0,415.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(40.0,0.0,0.0,1.0); 
balok2(0.5,0.6,0.3,0.6,0.8,0.2); 
glPopMatrix(); 
 glColor3f(0.6,0.4,0.8); 
glPushMatrix(); 
glTranslatef(517.0,418.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(60.0,0.0,0.0,1.0); 
balok2(0.9,0.5,0.3,0.6,0.4,0.2); 
glPopMatrix(); 
 glColor3f(1.5,1.7,1.3); 
glPushMatrix(); 
glTranslatef(519.0,425.0,0.0); 
glScalef(0.32,0.30,0.0); 
glRotatef(90.0,0.0,0.0,1.0); 
balok2(0.9,0.6,0.8,0.4,0.4,0.3); 
glPopMatrix(); 
 glFlush (); 
} 
void init (void) 
{ 
// Membuat warna background 
glClearColor (0.0, 0.0, 0.0, 0.0); 
/* inisialisasi nilai tampilan (viewing values) */ 
glMatrixMode(GL_PROJECTION); 
glLoadIdentity(); // memanggil matriks identitas 
glOrtho(0.0, 1024.0, 0.0, 700.0, -1.0, 1.0); 
} 
/* Deklarasi window size, position, dan display mode(single buffer and RGBA). 
* Pemanggilan routin inisialisasi. 
* Memanggil fungsi untuk manampilkan objek di layar 
*/ 
int main(int argc, char** argv) 
{ 
glutInit(&argc, argv); 
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); 
glutInitWindowSize (600,400); 
glutInitWindowPosition (150, 20); 
glutCreateWindow ("Program Transformasi"); 
init (); 
glutDisplayFunc(display); 
glutMainLoop(); 
return 0; 
} 


