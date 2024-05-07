//
// Created by lrfri on 06.05.2024.
//

#ifndef RAYLIBSTARTER_OPTIONEN_H
#define RAYLIBSTARTER_OPTIONEN_H

#include "raylib.h"
#include "globalstates.h"

class optionen {
public:
    int cursor = 0;

    void update(globalstates &globalstates);

    void draw();

    Rectangle hitbox_flagDE = {100, 350, 150, 90};
    Rectangle hitbox_flagDE_marked = {90, 340, 170, 110};

    Rectangle hitbox_flagENG = {400, 350, 150, 90};
    Rectangle hitbox_flagENG_marked = {390, 340, 170, 110};

    Rectangle hitbox_close = {700, 350, 150, 90};
    Rectangle hitbox_close_marked = {690, 340, 170, 110};


    Texture2D flagDE = LoadTexture("assets/graphics/flag_DE_5.png");
    Texture2D flagENG = LoadTexture("assets/graphics/flag_ENG_2.png");
    Texture2D closeButton = LoadTexture("assets/graphics/button_close.png");
};


#endif //RAYLIBSTARTER_OPTIONEN_H





