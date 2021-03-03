#include <SDL.h>
#include "SDL_opengl.h"
int main(int argc, char* args[]){
    SDL_Window *window;
    //start game
    SDL_Init(SDL_INIT_EVERYTHING);

    //predefined values
    //memory of colors
    SDL_GL_SetAttribute(SDL_GL_RED_SIZE,8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE,8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE,8);

     //memory of alpha and buffer
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE,8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE,32);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE,16);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    //window and name, icon to show on window

    window = SDL_CreateWindow("This will surely be overwritten", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 400, SDL_WINDOW_OPENGL);

    // video size, 32 bits per pixel, window mode
    //SDL_SetVideoMode(600, 400, 32, SDL_OPENGL);


    //initial color
    //black color, last number is alpha
    glClearColor(1,1,1,1);

    //show view with 600 - 400 size
    glViewport(0,0,600,400);

    //shadow
    glShadeModel(GL_SMOOTH);

    //2D
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity(); //geometry design

    //3D
    glDisable(GL_DEPTH_TEST);

    //game logic


    //render (image...
    glClear(GL_COLOR_BUFFER_BIT); //clean the buffer

    //animation
    //SDL_GL_SwapBuffers();

    //Quit app
    SDL_Quit();

return 0;
}
