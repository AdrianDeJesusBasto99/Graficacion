#include <stdio.h>
#include <stdlib.h>
//#include<windows.h> comentar si usas linux
#ifdef WIN32       
#endif
#include<GL/gl.h>
#include<GL/glut.h>

	void animal(void)    
    {
    	glClearColor(1.5,1.0,1.0,1.0);
     	gluOrtho2D(-30.0,100.0,-100.0,300.0);
     	glPointSize(50.0);
		glClear(GL_COLOR_BUFFER_BIT);
	    //PATA 1
	    glColor3f(1.1,1.0,0.0);
	    glLineWidth(2);
	    glBegin(GL_TRIANGLE_STRIP);
		glVertex2i(10,5);
		glVertex2i(20,-10);
		glVertex2i(30,5);
	    glEnd();
	    glFlush();
	    ////pata  2
	    glColor3f(1.1,1.0,0.0);
	    glLineWidth(2);
	    glBegin(GL_TRIANGLE_STRIP);
		glVertex2i(32,5);
		glVertex2i(40,-10);
		glVertex2i(50,5);
	    glEnd();
	    glFlush();
	    //CUERPO
	    glColor3f(0.0,0.0,0.0);
	    glLineWidth(4);
	    glBegin(GL_LINE_STRIP);
		glVertex2i(30,15);
		glVertex2i(0,75);
		glVertex2i(0,120);
		glVertex2i(15,150);
		glVertex2i(15,180);
		glVertex2i(0,195);
		glVertex2i(10,215);
		glVertex2i(22,215);
		glVertex2i(30,180);
		glVertex2i(30,150);
		glVertex2i(20,120);
		glVertex2i(30,120);
		glVertex2i(48,90);
		glVertex2i(70,90);
		glVertex2i(46,15);
		glVertex2i(30,15);
	    glEnd();
	    glFlush();
	    ///BOCA
	    glColor3f(1.1,1.0,0.0);
	    glLineWidth(2);
	    glBegin(GL_TRIANGLE_STRIP);
		glVertex2i(0,195);
		glVertex2i(15,180);
		glVertex2i(-10,180);
	    glEnd();
	    glFlush();
	    //OJOS
	 	glColor3f(0.0,0.0,0.0);
	    glLineWidth(2);
	    glBegin(GL_TRIANGLE_STRIP);
		glVertex2i(10,210);
		glVertex2i(10,195);
		glVertex2i(15,195);
	    glEnd();
	    glFlush();
	    //LINEA 1
	    glBegin(GL_LINE_STRIP);  
		glColor3f(0.0,0.0,0.0);        
		glVertex2i(46,15);
		glVertex2i(50,5);
		glEnd();
		glFlush();    
		//LINEA 2
		glBegin(GL_LINE_STRIP);  
		glColor3f(0.0,0.0,0.0);        
		glVertex2i(30,15);
		glVertex2i(30,5);
		glEnd();
		glFlush(); 
		//ALA
		glBegin(GL_LINE_STRIP);  
		glColor3f(0.0,0.0,0.0);        
		glVertex2i(20,100);
		glVertex2i(20,75);
		glVertex2i(45,30);
		glVertex2i(50,30);
		glEnd();
		glFlush();    
		//nariz
	    glBegin(GL_LINE_STRIP);  
		glColor3f(0.0,0.0,0.0);        
		glVertex2i(-1,190);
		glVertex2i(1,190);
		glEnd();
		glFlush(); 
	}	    
     
	main(int argc,char **argv)
	{
	    glutInit(&argc,argv);
	    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	    glutInitWindowPosition(600,200);
	    glutInitWindowSize(600,800);
	    glutCreateWindow("Animal: pato");
	    glutDisplayFunc(animal);
	    glutMainLoop();
	    return 0;
 	}
