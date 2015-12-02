#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <SDL2/SDL.H>

class Engine {
public:

    Engine();
    ~Engine();


private:
    SDL_Window* window;

    /*Initializes the engine, returns true upon successful initialization.*/
    bool init();
    /*The loop in which all of our engines operations will take place after initialization.*/
    void mainLoop();
    /*Function used to render all of our graphics to the screen and present it to the user.*/
    void renderFrame();
    /*Checks for user input and acts accordingly if there is any.*/
    void processInput();
    /*Updates Engine Internals*/
    void update();
};


#endif // ENGINE_H_INCLUDED
