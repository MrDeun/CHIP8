#include "SDL3/SDL_error.h"
#include "SDL3/SDL_init.h"
#include "SDL3/SDL_oldnames.h"
#include "imgui.h"
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"
#include <iostream>
#include <cstdlib>
#include <SDL3/SDL.h>

#ifdef __EMSCRIPTEN__
#include "../libs/emscripten/emscripten_mainloop_stub.h"
#endif

void init_sdl(void) {
    if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS) != 0) {
        std::cerr << "Error: Failed to initialize SDL! " << SDL_GetError() << '\n';
        exit(EXIT_FAILURE);
    }
}

void kill_program(void){
    SDL_Quit();
}


// Main code
int main(){
    init_sdl();



    kill_program();
    exit(EXIT_SUCCESS);
}