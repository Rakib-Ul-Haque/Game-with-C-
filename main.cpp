#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<time.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

float xr=0,yr=0,inc=0,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0, c=0,co=0,t=0,i=1,sec;
char ss[100],ss1[100],ss2[100];
//clock_t start =clock();
time_t start,endi;
void output(void *font,float x,float y,char *str)
{

    char *ch;
    glRasterPos2f(x,y);

    for(ch=str; *ch; ch++)
    {
        glutBitmapCharacter(font,(int)*ch);
    }
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    //r11
    if(((-0.1+xr>=-1 && -0.1+xr<=1) && (-0.9+yr<=1 && -0.9+yr>=-0.85 )))
    {
        if(r11==0)
        {
            c=c+1;
        }
        r11=1;

    }
    if(r11==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r11==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1,1); //|
    glVertex2f(-1,-0.85);//|
    glVertex2f(1,-0.85); //|_
    glVertex2f(1,1);  //|_|
    glEnd();
    // rq-1
    if((-0.1+xr<=-0.85 && -0.9+yr<=-0.85) || (-0.1+xr<=-0.85 && -1+yr<=-0.85)  )
    {
        if(r1==0)
        {
            c=c+1;
        }
        r1=1;
    }
    if(r1==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r1==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1,-0.9); //|
    glVertex2f(-1,-1);//|
    glVertex2f(-0.9,-1); //|_
    glVertex2f(-0.9,-0.9);  //|_|
    glEnd();
    //rq2
    if((-0.1+xr>=0.85 && -0.9+yr<=-0.85) || (-0.1+xr>=0.85 && -1+yr<=-0.85))
    {
        if(r2==0)
        {
            c=c+1;
        }
        r2=1;
    }
    if(r2==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r2==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }

    glBegin(GL_POLYGON);
    glVertex2f(0.9,-0.9); //|
    glVertex2f(0.9,-1);//|
    glVertex2f(1,-1); //|_
    glVertex2f(1,-0.9);  //|_|
    glEnd();
    //rq3
    if((0+xr>=0.85 && -1+yr>=0.85) || (0+xr>=0.85 && -0.9+yr>=0.85))
    {
        if(r3==0)
        {
            c=c+1;
        }
        r3=1;
    }
    if(r3==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r3==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }

    glBegin(GL_POLYGON);
    glVertex2f(0.9,0.9); //|
    glVertex2f(0.9,1);//|
    glVertex2f(1,1); //|_
    glVertex2f(1,0.9);  //|_|
    glEnd();
    //rq4
    if((-0.1+xr<=-0.85 && -0.9+yr>=0.85) || (-0.1+xr<=-0.85 && -1+yr>=0.85))
    {
        if(r4==0)
        {
            c=c+1;
        }
        r4=1;
    }
    if(r4==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r4==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-0.9,0.9); //|
    glVertex2f(-0.9,1);//|
    glVertex2f(-1,1); //|_
    glVertex2f(-1,0.9);  //|_|
    glEnd();
    //===========================================
    //rp5
    if(((-0.1+xr>=-0.3 && -0.1+xr<=0.3) && (-0.9+yr>=-0.1 && -0.9+yr<=0.1)) || ((0+xr>=-0.30 && 0+xr<=0.30) && (-0.9+yr>=-0.1 && -0.9+yr<=0.1)) || ((0+xr>=-0.30 && 0+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) || ((-0.1+xr>=-0.30 && -0.1+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) )//
    {
        if(r5==0)
        {
            c=c+1;
        }
        r5=1;
    }
    if(r5==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r5==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-0.3,0.1); //|
    glVertex2f(-0.3,-0.1);//|
    glVertex2f(0.3,-0.1); //|_
    glVertex2f(0.3,0.1);  //|_|
    glEnd();
    //rp6
    if(((-0.1+xr>=-0.3 && -0.1+xr<=0.3) && (-0.9+yr>=0.9)) || ((0+xr>=-0.30 && 0+xr<=0.30) && (-0.9+yr>=0.9)) )//|| ((0+xr>=-0.30 && 0+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) || ((-0.1+xr>=-0.30 && -0.1+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) )//
    {
        if(r6==0)
        {
            c=c+1;
        }
        r6=1;
    }
    if(r6==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r6==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-0.3,1); //|
    glVertex2f(-0.3,0.9);//|
    glVertex2f(0.3,0.9); //|_
    glVertex2f(0.3,1);  //|_|
    glEnd();
    //rp7
    if(((-0.1+xr<=-0.9) && (-0.9+yr>=-0.3 && -0.9+yr<=0.3 )) || ((-0.1+xr<=-0.9) && (-1+yr>=-0.3 && -1+yr<=0.3 ))) //((0+xr>=-0.30 && 0+xr<=0.30) && (-0.9+yr>=0.9)) || ((0+xr>=-0.30 && 0+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) || ((-0.1+xr>=-0.30 && -0.1+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) )//
    {
        if(r7==0)
        {
            c=c+1;
        }
        r7=1;
    }
    if(r7==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r7==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1,0.3); //|
    glVertex2f(-1,-0.3);//|
    glVertex2f(-0.9,-0.3); //|_
    glVertex2f(-0.9,0.3);  //|_|
    glEnd();
    //rq8
    if(((0+xr>=0.9) && (-0.9+yr>=-0.3 && -0.9+yr<=0.3 )) || ((0+xr>=0.9) && (-1+yr>=-0.3 && -1+yr<=0.3 ))) //((0+xr>=-0.30 && 0+xr<=0.30) && (-0.9+yr>=0.9)) || ((0+xr>=-0.30 && 0+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) || ((-0.1+xr>=-0.30 && -0.1+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) )//
    {
        if(r8==0)
        {
            c=c+1;
        }
        r8=1;
    }
    if(r8==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r8==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(1,0.3); //|
    glVertex2f(1,-0.3);//|
    glVertex2f(0.9,-0.3); //|_
    glVertex2f(0.9,0.3);  //|_|
    glEnd();
    //rq9
    if(((-0.1+xr>=-1 && -0.1+xr<=1) && (-0.9+yr>=-0.8 && -0.9+yr<=-0.4 ))) //|| ((0+xr>=0.9) && (-1+yr>=-0.3 && -1+yr<=0.3 ))) //((0+xr>=-0.30 && 0+xr<=0.30) && (-0.9+yr>=0.9)) || ((0+xr>=-0.30 && 0+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) || ((-0.1+xr>=-0.30 && -0.1+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) )//
    {
        if(r9==0)
        {
            c=c+1;
        }
        r9=1;
    }
    if(r9==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r9==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1,-0.4); //|
    glVertex2f(-1,-0.8);//|
    glVertex2f(1,-0.8); //|_
    glVertex2f(1,-0.4);  //|_|
    glEnd();
    //r10
    if(((-0.1+xr>=-1 && -0.1+xr<=1) && (-0.9+yr<=0.8 && -0.9+yr>=0.4 ))) //|| ((0+xr>=0.9) && (-1+yr>=-0.3 && -1+yr<=0.3 ))) //((0+xr>=-0.30 && 0+xr<=0.30) && (-0.9+yr>=0.9)) || ((0+xr>=-0.30 && 0+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) || ((-0.1+xr>=-0.30 && -0.1+xr<=0.30) && (-1+yr>=-0.1 && -1+yr<=0.1)) )//
    {
        if(r10==0)
        {
            c=c+1;
        }
        r10=1;
    }
    if(r10==0)
    {
        glColor3f(1.0, 1.0, 1.0);
    }
    else if(r10==1)
    {
        glColor3f(0.0, 0.0, 0.0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1,0.4); //|
    glVertex2f(-1,0.8);//|
    glVertex2f(1,0.8); //|_
    glVertex2f(1,0.4);  //|_|
    glEnd();

    if(c==11)
    {

        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,-0.5,0.0,"Total Block Smashed: ");
        itoa(c,ss,10);
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,0.0,0,ss);
        glColor3f(1.0, 0.0, 0.0);
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,0.1,0.0,"Blocks");

        output(GLUT_BITMAP_HELVETICA_10,-0.5,-0.1,"Total Moves: ");
        itoa(co,ss1,10);
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,0.0,-0.1,ss1);
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,0.1,-0.1," Moves");

        time(&endi);
        sec=difftime(endi,start);
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,-0.5,-0.2,"Total time is: ");
        itoa(sec,ss2,10);
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,0.0,-0.2,ss2);
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,0.1,-0.2,"sec");
        glColor3f(1.0, 0.0, 0.0);
        output(GLUT_BITMAP_HELVETICA_10,-0.5,-0.3,"Press Q to quit");
    }

    //===========================================

    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,-0.5,0.0,"Total Block Smashed: ");
    itoa(c,ss,10);
    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,0.0,0,ss);
    glColor3f(1.0, 0.0, 0.0);
    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,0.1,0.0,"Blocks");

    output(GLUT_BITMAP_HELVETICA_10,-0.5,-0.1,"Total Moves: ");
    itoa(co,ss1,10);
    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,0.0,-0.1,ss1);
    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,0.1,-0.1," Moves");

    time(&endi);
    sec=difftime(endi,start);
    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,-0.5,-0.2,"Total time is: ");
    itoa(sec,ss2,10);
    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,0.0,-0.2,ss2);
    glColor3f(1.0, 0.0, 0.0);
    output(GLUT_BITMAP_HELVETICA_10,0.1,-0.2,"sec");
    //rq-main
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1+xr,-0.9+yr);
    glVertex2f(-0.1+xr,-1+yr);
    glVertex2f(0+xr,-1+yr);
    glVertex2f(0+xr,-0.9+yr);
    cout<<"\n"<<c<<"values \n";
    glEnd();
    glutSwapBuffers();

}
void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
    case 'u':
        yr=yr+0.05;
        co++;
        glutPostRedisplay();
        break;


    case 'd':
        yr=yr-0.05;
        co++;
        glutPostRedisplay();
        break;

    case 'l':
        xr=xr-0.05;
        co++;
        glutPostRedisplay();
        break;

    case 'r':
        xr=xr+0.05;
        co++;
        glutPostRedisplay();
        break;
    case 'q':
        glutDestroyWindow(1);
    }
}

int main(int argc, char** argv)
{
    time(&start);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(500,500);
    glutCreateWindow("Day4");
    glClearColor(0,0,0,0);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
