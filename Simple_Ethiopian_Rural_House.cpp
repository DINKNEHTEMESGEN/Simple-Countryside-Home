#include<GL/glut.h>


void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3i(0, 0, 5);
    glVertex3i(0, 5, 5);
    glVertex3i(5, 5, 5);
    glVertex3i(5, 0, 5);
    glEnd();
    glFlush();


 }

void init() {
	glClearColor(0, 0, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-30, 30, -30, 30, -30, 30);
}



int main( int argc ,char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Ethiopian Countryside Home");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

   

}