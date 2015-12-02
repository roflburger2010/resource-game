#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include "sdl.h"

class Engine {
public:

    Engine();
    ~Engine();


private:
    SDL_Window* window;

    /*Initializes the engine, returns true if there was an error.*/
    bool init();
    /*The loop in which all of our engines operations will take place after initialization.*/
    void MainLoop();
    /*Function used to render all of our graphics to the screen and present it to the user.
    void renderFrame();
    /*Checks for user input and acts accordingly if there is any.*/
    void processInput();
    /*Updates Engine Internals*/
    void update();
};


#endif // ENGINE_H_INCLUDED
