#include "engine.h"

#include "stdio.h"

#include <SDL2/SDL.h>

Engine::Engine()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    if( !this->init() )
    {
        printf("Couldn't Initialize Game Engine.\n");
    }

    this->mainLoop();
}

Engine::~Engine() {}

bool Engine::init()
{
    window = SDL_CreateWindow("Resource Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, 0);

    if(!window)
        return false;

    return true;
}

void Engine::renderFrame()
{

}

void Engine::processInput()
{
    SDL_Event e;
    while(SDL_PollEvent(&e))
    {
        if(e.type == SDL_QUIT)
        {
            SDL_DestroyWindow(window);
            this->window = nullptr;
        }
    }
}

void Engine::update()
{

}

void Engine::mainLoop()
{

    while(this->window)
    {
        processInput(); //Process input for frame
        update();       //Update variables for frame
        renderFrame();  //Render the completed frame
    }
}

