//
// Created by lrfri on 07.05.2024.
//

#ifndef RAYLIBSTARTER_PAUSESCREEN_H
#define RAYLIBSTARTER_PAUSESCREEN_H
#include "raylib.h"
#include "globalstates.h"
#include "languagesettings.h"
#include "controlsettings.h"
#include "soundsettings.h"
#include <iostream>

class pausescreen {
public:
    void update(globalstates &globalstates, languagestates &languagestates, soundstates &soundstates, controlmodes &controlmodes);

    void draw(languagestates &languagestates, soundstates &soundstates, controlmodes &controlmodes);

    Texture2D pausebutton = LoadTexture("assets/graphics/button_pause.png");
    Texture2D title = LoadTexture("assets/graphics/title_3.png");
    Rectangle boxforpausebutton = {400,400,122,122};
};



#endif //RAYLIBSTARTER_PAUSESCREEN_H
