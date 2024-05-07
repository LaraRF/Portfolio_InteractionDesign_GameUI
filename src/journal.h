//
// Created by lrfri on 07.05.2024.
//

#ifndef RAYLIBSTARTER_JOURNAL_H
#define RAYLIBSTARTER_JOURNAL_H

#include "raylib.h"
#include "globalstates.h"
#include "languagesettings.h"

class journal {
public:
    int cursor = 0;

    void update(globalstates &globalstates, languagestates &languagestates);

    void draw(languagestates &languagestates);

    Rectangle hitbox_close = {700, 350, 150, 90};
    Rectangle hitbox_close_marked = {690, 340, 170, 110};
    Texture2D closeButton = LoadTexture("assets/graphics/button_close.png");

    Rectangle journalpage1 = {100, 350, 150, 90};
    Rectangle journalpage1_marked = {90, 340, 170, 110};

    Rectangle journalpage2 = {400, 350, 150, 90};
    Rectangle journalpage2_marked = {390, 340, 170, 110};
};


#endif //RAYLIBSTARTER_JOURNAL_H
