//
// Created by lrfri on 07.05.2024.
//

#ifndef RAYLIBSTARTER_JOURNAL_H
#define RAYLIBSTARTER_JOURNAL_H

#include "raylib.h"
#include "globalstates.h"
#include "languagesettings.h"
#include "soundsettings.h"
#include "controlsettings.h"

class journal {
public:
    int cursor = 0;

    void update(globalstates &globalstates, languagestates &languagestates, soundstates &soundstates, controlmodes &controlmodes);

    void draw(languagestates &languagestates, soundstates &soundstates, controlmodes &controlmodes);

    Rectangle hitbox_close = {800, 440, 120, 80};
    Rectangle hitbox_close_marked = {790, 430, 140, 100};
    Texture2D closeButton = LoadTexture("assets/graphics/button_close.png");

    Rectangle journalpage1 = {45, 70, 320, 350};
    Rectangle journalpage1_marked = {35, 60, 340, 370};

    Rectangle journalpage2 = {570, 70, 320, 350};
    Rectangle journalpage2_marked = {560, 60, 340, 370};

    Texture2D journalbackground = LoadTexture("assets/graphics/journal_background.png");

};


#endif //RAYLIBSTARTER_JOURNAL_H
