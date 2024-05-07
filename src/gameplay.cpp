//
// Created by lrfri on 06.05.2024.
//

#include "gameplay.h"

void gameplay::update(globalstates &globalstates) {
    if(IsKeyPressed(KEY_M)){
        globalstates = menu;
    }
}

void gameplay::draw() {
    //to do: add HP
    //to do: add items
    //to do: add text "press m to go back to main menu"
    //to do: add text "press p to pause" -> create pause-screen 
}
