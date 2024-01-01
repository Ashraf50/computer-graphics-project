///            team
///            اشرف عصام احمد عطاالله
///         عبدالغني ممدوح العظيني
///  ابراهيم كمال عبدالفتاح النجار
///        احمد محمد الشحات القزاز
///             حامد خالد حامد رجب
///              اسلام ايمن علي ودن

#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
using namespace std;
float mouseX,mouseY ;

bool mButtonPressed= false,startGame=false,gameOver=false;		//boolean values to check state of the game
bool startScreen = true,nextScreen=false,previousScreen=false;
///Elkzaz
//display text
void renderBitmapString(float x,float y,float z,char *stringToDisplay)
{
    int length;
    glRasterPos3f(x, y, z);
    length = strlen(stringToDisplay);

    for(int i=0 ; i<length ; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,stringToDisplay[i]);
    }
}

void initRendering()
{
    glEnable(GL_DEPTH_TEST); //enable 3d
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
}

void update(int value)
{
    glutPostRedisplay();
    glutTimerFunc(15, update, 0);
}
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.01f;

void update2(int value)
{
    if(position2 > 1.7)
        position2 = -1.1f;

    position2 += speed2;

    glutPostRedisplay();
    glutTimerFunc(100,update2,0);
}

void Building1()
{
    glColor3f(0.38f,0.19f,0.0f);
    glBegin(GL_POLYGON);    //roof
    glVertex2f(0.90,0.36);
    glVertex2f(0.89,0.44);
    glVertex2f(0.70,0.44);
    glVertex2f(0.69,0.36);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 1
    glVertex2f(0.87,0.25);
    glVertex2f(0.87,0.15);
    glVertex2f(0.81,0.15);
    glVertex2f(0.81,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 2
    glVertex2f(0.78,0.25);
    glVertex2f(0.78,0.15);
    glVertex2f(0.72,0.15);
    glVertex2f(0.72,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 3
    glVertex2f(0.85,0.40);
    glVertex2f(0.85,0.30);
    glVertex2f(0.74,0.30);
    glVertex2f(0.74,0.40);
    glEnd();

    glColor3f(.19,0.61,0.22);
    glBegin(GL_QUADS);    // shape
    glVertex2f(0.89,0.10);
    glVertex2f(0.89,0.45);
    glVertex2f(0.70,0.45);
    glVertex2f(0.70,0.10);
    glEnd();
}

void Building2()
{
    glColor3f(0.38f,0.19f,0.0f);
    glBegin(GL_POLYGON);    //roof
    glVertex2f(0.60,0.36);
    glVertex2f(0.59,0.44);
    glVertex2f(0.40,0.44);
    glVertex2f(0.39,0.36);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 1
    glVertex2f(0.57,0.25);
    glVertex2f(0.57,0.15);
    glVertex2f(0.51,0.15);
    glVertex2f(0.51,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 2
    glVertex2f(0.47,0.25);
    glVertex2f(0.47,0.15);
    glVertex2f(0.41,0.15);
    glVertex2f(0.41,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 3
    glVertex2f(0.55,0.40);
    glVertex2f(0.55,0.30);
    glVertex2f(0.44,0.30);
    glVertex2f(0.44,0.40);
    glEnd();

    glColor3f(.19,0.61,0.22);
    glBegin(GL_QUADS);       //shape
    glVertex2f(0.59,0.10);
    glVertex2f(0.59,0.45);
    glVertex2f(0.40,0.45);
    glVertex2f(0.40,0.10);
    glEnd();
}

void Building3()
{
    glColor3f(0.38f,0.19f,0.0f);
    glBegin(GL_POLYGON);    //roof
    glVertex2f(0.30,0.36);
    glVertex2f(0.29,0.44);
    glVertex2f(0.10,0.44);
    glVertex2f(0.09,0.36);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 1
    glVertex2f(0.27,0.25);
    glVertex2f(0.27,0.15);
    glVertex2f(0.21,0.15);
    glVertex2f(0.21,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 2
    glVertex2f(0.18,0.25);
    glVertex2f(0.18,0.15);
    glVertex2f(0.12,0.15);
    glVertex2f(0.12,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);      // Window 3
    glVertex2f(0.25,0.40);
    glVertex2f(0.25,0.30);
    glVertex2f(0.14,0.30);
    glVertex2f(0.14,0.40);
    glEnd();

    glColor3f(.19,0.61,0.22);
    glBegin(GL_QUADS);       //shape
    glVertex2f(0.29,0.10);
    glVertex2f(0.29,0.45);
    glVertex2f(0.10,0.45);
    glVertex2f(0.10,0.10);
    glEnd();
}
///Abdelguny
void Tree1(float xOffset)
{
    glColor3f(0.38f, 0.19f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.93 + xOffset, 0.10);
    glVertex2f(-0.93 + xOffset, 0.20);
    glVertex2f(-0.89 + xOffset, 0.20);
    glVertex2f(-0.89 + xOffset, 0.10);
    glEnd();

    glColor3f(0.0, 0.43, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.97 + xOffset, 0.20);
    glVertex2f(-0.85 + xOffset, 0.20);
    glVertex2f(-0.90 + xOffset, 0.31);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.98 + xOffset, 0.24);
    glVertex2f(-0.84 + xOffset, 0.24);
    glVertex2f(-0.91 + xOffset, 0.38);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.99 + xOffset, 0.31);
    glVertex2f(-0.83 + xOffset, 0.30);
    glVertex2f(-0.91 + xOffset, 0.42);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.99 + xOffset, 0.36);
    glVertex2f(-0.83 + xOffset, 0.36);
    glVertex2f(-0.91 + xOffset, 0.48);
    glEnd();
}

void Cloud1()
{
    ///Cloud
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    GLfloat theta;
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(-0.5+0.1*cos(theta),0.7+0.1*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(-0.5+0.06*cos(theta),0.6+0.06*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(-0.4+0.06*cos(theta),0.6+0.06*sin(theta));
    }
    glEnd();
}

void Cloud2()
{
    ///Cloud2
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    GLfloat theta;
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(-0.2+0.06*cos(theta),0.85+0.06*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(-0.2+0.06*cos(theta),0.78+0.06*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(-0.29+0.06*cos(theta),0.79+0.06*sin(theta));
    }
    glLoadIdentity();
    glEnd();
    glPopMatrix();
}
///Ashraf
void Sky()
{
    glColor3f(0.73, 0.73, 1);
    glBegin(GL_QUADS);
    glVertex2f(-1.0,.10);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glVertex2f(1.0,0.10);
    glEnd();
}

void Car()
{
    glLineWidth(1);//border
    glColor3ub(125,227,184);
    glBegin(GL_QUADS);
    glVertex2f(0.15f,-0.2f);
    glVertex2f(0.35f,-0.2f);
    glVertex2f(0.35f,-0.1f);
    glVertex2f(0.15f,-0.1f);
    glEnd();
    glColor3ub(78, 83, 78);
    glBegin(GL_QUADS);
    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.2f,-0.0f);
    glVertex2f(0.3f,-0.0f);
    glVertex2f(0.32f,-0.1f);
    glEnd();
    ///tyre
    GLfloat theta;
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.2+0.03*cos(theta),-0.2+0.03*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.3+0.03*cos(theta),-0.2+0.03*sin(theta));
    }
    glEnd();
}

void Car1()
{
    glLineWidth(1);//border
    glColor3ub(125,227,184);
    glBegin(GL_QUADS);
    glVertex2f(0.15f,-0.2f);
    glVertex2f(0.35f,-0.2f);
    glVertex2f(0.35f,-0.1f);
    glVertex2f(0.15f,-0.1f);
    glEnd();
    glColor3ub(78, 83, 78);
    glBegin(GL_QUADS);
    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.2f,-0.0f);
    glVertex2f(0.3f,-0.0f);
    glVertex2f(0.32f,-0.1f);
    glEnd();
    ///tyre
    GLfloat theta;
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.2+0.03*cos(theta),-0.2+0.03*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.3+0.03*cos(theta),-0.2+0.03*sin(theta));
    }
    glEnd();
}

void Car2()
{
    glLineWidth(1);//border
    glColor3ub(125,227,184);
    glBegin(GL_QUADS);
    glVertex2f(0.15f,-0.4f);
    glVertex2f(0.35f,-0.4f);
    glVertex2f(0.35f,-0.3f);
    glVertex2f(0.15f,-0.3f);
    glEnd();

    glColor3ub(78, 83, 78);
    glBegin(GL_QUADS);
    glVertex2f(0.18f,-0.3f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.3f,-0.2f);
    glVertex2f(0.32f,-0.3f);
    glEnd();
    ///tyre
    GLfloat theta;
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.2+0.03*cos(theta),-0.4+0.03*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.3+0.03*cos(theta),-0.4+0.03*sin(theta));
    }
    glEnd();
}

void Car3()
{
    glLineWidth(1);
    glColor3ub(125,227,184);
    glBegin(GL_QUADS);
    glVertex2f(0.15f,-0.4f);
    glVertex2f(0.35f,-0.4f);
    glVertex2f(0.35f,-0.3f);
    glVertex2f(0.15f,-0.3f);
    glEnd();
    glColor3ub(78, 83, 78);
    glBegin(GL_QUADS);
    glVertex2f(0.18f,-0.3f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.3f,-0.2f);
    glVertex2f(0.32f,-0.3f);
    glEnd();
    ///tyre
    GLfloat theta;
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.2+0.03*cos(theta),-0.4+0.03*sin(theta));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(83,83,78);
    for(int i=0; i<360; i++)
    {
        theta=i*3.14/180;
        glVertex2f(0.3+0.03*cos(theta),-0.4+0.03*sin(theta));
    }
    glEnd();
}

void Footpath()
{
    glLineWidth(2);
    glColor3ub(202, 47, 42);
    glBegin(GL_LINES);
    glVertex2f(-1.0,.02);
    glVertex2f(1.0,.02);
    glEnd();

    glColor3ub(194, 202, 34);
    glBegin(GL_QUADS);
    glVertex2f(-1.0,.02);
    glVertex2f(-1.0,0.40);
    glVertex2f(1.0,0.40);
    glVertex2f(1.0,0.02);
    glEnd();
}


///eslam
void Man()
{
    glColor3ub(129, 114, 66);
    glBegin(GL_QUADS);
    glVertex2f(-0.0,-.90);
    glVertex2f(-0.0,-.88);
    glVertex2f(0.02,-.88);
    glVertex2f(0.02,-.90);
    glEnd();

    glColor3f(0.0,0.6,0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.01,-.97);
    glVertex2f(-0.01,-.90);
    glVertex2f(0.03,-.90);
    glVertex2f(0.03,-.97);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.02,-.93);
    glVertex2f(-0.02,-.90);
    glVertex2f(0.01,-.90);
    glVertex2f(0.01,-.93);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
    glVertex2f(-0.02,-.93);
    glVertex2f(-0.02,-.90);
    glVertex2f(0.04,-.90);
    glVertex2f(0.04,-.93);
    glEnd();

    glColor3ub(42, 105, 79);
    glBegin(GL_QUADS);
    glVertex2f(0.00,-1.0);
    glVertex2f(0.00,-.96);
    glVertex2f(0.01,-.96);
    glVertex2f(0.01,-1.0);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.01,-1.0);
    glVertex2f(0.01,-.96);
    glVertex2f(0.02,-.96);
    glVertex2f(0.02,-1.0);
    glEnd();
}

void Road_line()
{
    glLineWidth(6);
    glColor3f(1.000, 0.843, 0.000);
    glBegin(GL_LINES);
    glVertex2f(-1.0,-.60);
    glVertex2f(1.0,-.60);
    glEnd();
}

void Road_line1()
{
    glLineWidth(6);
    glColor3f(1.000, 0.843, 0.000);
    glBegin(GL_LINES);
    glVertex2f(-1.0,-.25);
    glVertex2f(1.0,-.25);
    glEnd();
}
///hamed
void DrawPlane()
{
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    glColor3ub(42, 105, 79);
    glBegin(GL_POLYGON);
    glVertex2f(.3f,.8f);
    glVertex2f(.0f,.8f);
    glVertex2f(.0f,.78f);
    glVertex2f(.05f,.7f);
    glVertex2f(.3f,.7f);
    glVertex2f(.34f,.75f);
    glEnd();
    ///tail  wing
    glBegin(GL_QUADS);
    glColor3ub(42, 105, 79);
    glVertex2f(.0f, .90f);
    glVertex2f( .03f, 0.80f);
    glVertex2f( .10f,  0.80f);
    glVertex2f(.02f,  .920f);
    glEnd();
    glPopMatrix();
}

///Logic
double car_move = -1.1;
double car1_move = -1.9;
double car2_move=-2.9;
double car3_move=-1.6;
double Man_movex=0.01;
double Man_movey=0.0;
int counter =0;


void specialKeys(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_UP:
        Man_movey+=0.1;// jumping distance
        break;
    case GLUT_KEY_DOWN:
        Man_movey-=0.1;

        break;
    case GLUT_KEY_RIGHT:
        Man_movex+=0.05;
        break;
    case GLUT_KEY_LEFT:
        Man_movex-=0.05;
        break;

    }
}
GLfloat xpos=-0.9f,ypos=0.8f;
void drawText(char ch[],int xpos,int ypos)
{
    glColor3f(0.5,0,1);
    int numofchar=strlen(ch);
    glLoadIdentity();
    glRasterPos2i(xpos,ypos);
    for(int i=0; i<=numofchar-1; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,ch[i]);
    }
}
///Ebrahim
void Display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    Building1();
    Building2();
    Building3();
    Tree1(0.1);
    Tree1(0.4);
    DrawPlane();
    Cloud1();
    Cloud2();

    /// Man and others move
    glPushMatrix();
    glTranslatef(Man_movex,Man_movey, 0.0);
    Man();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(car_move, 0.0f, 0.0f);
    Car();
    glPopMatrix();

    car_move += .01;
    if(car_move > 1.6)
    {
        car_move =  -1.5;

    }

    /// Collision car0
    if((float)car_move == (float)Man_movex && ((float)Man_movey == 0.8f  || (float)Man_movey == 0.9f) )
    {
        Man_movey=-1.2f;
        drawText("Game Over",-0.9f,0.8f);
        cout<<"Game Over BUDDY Your Score is "<<counter<<endl;
        exit(0);
    }

    glPushMatrix();
    glTranslatef(car1_move, 0.0f, 0.0f);
    Car1();
    glPopMatrix();

    car1_move += .009;
    if(car1_move > 1.6)
    {
        car1_move =  -1.5;

    }
    /// Collision car2
    if((float)car1_move == (float)Man_movex && ((float)Man_movey == 0.8f  || (float)Man_movey == 0.9f) )
    {
        Man_movey=-1.2f;

        drawText("Game Over",-0.9f,0.8f);
        cout<<"Game Over Your Score is "<<counter<<endl;
        exit(0);
    }

    glPushMatrix();
    glTranslatef(car2_move, 0.0f, 0.0f);
    Car2();
    glPopMatrix();

    car2_move += .01;
    if(car2_move >1.6)
    {
        car2_move =  -1.5;

    }

    /// Collision car2
    else if((float)car2_move == (float)Man_movex && ((float)Man_movey == 0.6f  || (float)Man_movey == 0.8f) )
    {
        Man_movey=-1.2f;
        drawText("Game Over",-0.9f,0.8f);
        cout<<"Game Over Your Score is "<<counter<<endl;
        exit(0);
    }

    glPushMatrix();
    glTranslatef(car3_move, 0.0f, 0.0f);
    Car3();
    glPopMatrix();

    car3_move += .01;
    if(car3_move >1.6)
    {
        car3_move =  -1.5;

    }

    ///  Collision car3
    else if((float)car3_move == (float)Man_movex && ((float)Man_movey == 0.6f  || (float)Man_movey == 0.8f) )
    {
        Man_movey=-1.2f;
        drawText("Game Over",-0.9f,0.8f);
        cout<<"Game Over Your Score is "<<counter<<endl;
        exit(0);
    }

    ///moving Man
    else if((float)Man_movey == 1.0f)
    {
        counter++;
        Man_movey=0.0;

    }
    else
    {

        char buffer[10]= {'\0'};
        sprintf(buffer, "%d", counter);
        renderBitmapString(-1.0f,0.8f,0.0f,"SCORE :");
        renderBitmapString(-0.75f,0.8f,0.0f,buffer);
    }
    Sky();
    Footpath();
    Road_line();
    Road_line1();
    glutSwapBuffers();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1200,800);

    glutCreateWindow("Cross Road Game");
    initRendering();
    glutDisplayFunc(Display);
    glutSpecialFunc(specialKeys);
    glutTimerFunc(15, update, 0); //Add a timer
    glutTimerFunc(15, update2, 0);
    glutMainLoop();
    return 0;
}
