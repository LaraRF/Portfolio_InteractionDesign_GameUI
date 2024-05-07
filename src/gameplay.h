//
// Created by lrfri on 06.05.2024.
//

#ifndef RAYLIBSTARTER_GAMEPLAY_H
#define RAYLIBSTARTER_GAMEPLAY_H

#include "raylib.h"
#include "globalstates.h"
#include "languagesettings.h"

class gameplay {
public:
    void update(globalstates &globalstates, languagestates &languagestates);

    void draw(languagestates &languagestates);
    Texture2D heart = LoadTexture("assets/graphics/heart.png");
    Texture2D modeRobo = LoadTexture("assets/graphics/robot_anuki_3.png");
    Texture2D modeSoul = LoadTexture("assets/graphics/soul_destiny_3.png");

};


#endif //RAYLIBSTARTER_GAMEPLAY_H
