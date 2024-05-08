//
// Created by lrfri on 06.05.2024.
//

#include "optionen.h"
#include "globalstates.h"
#include "raylib.h"
#include "languagesettings.h"

void optionen::update(globalstates &globalstates, languagestates &languagestates) {
    if(IsKeyPressed(KEY_RIGHT)){
        if(cursor == 2){
            cursor = 2; //ends with last box, does not come back on the other side of the screen
        }else{
            cursor++;
        }
    }

    if(IsKeyPressed(KEY_LEFT)){
        if(cursor == 0){
            cursor = 0; //same here: you can't go more the side if you're already on the last box
        }else{
            cursor--;
        }
    }

    if(IsKeyPressed(KEY_ENTER)) {
        switch(cursor){
            case 0:
                languagestates = german;
                break;
            case 1:
                languagestates = english;
                break;
            case 2:
                globalstates = menu;
        }
    }
}

void optionen::draw(languagestates &languagestates) {

    switch(cursor){ //shows which box is selected by giving it a white outline
        case 0:
            DrawRectangleRec(hitbox_flagDE_marked, WHITE);
            break;
        case 1:
            DrawRectangleRec(hitbox_flagENG_marked, WHITE);
            break;
        case 2:
            DrawRectangleRec(hitbox_close_marked, WHITE);
            break;
        default:
            break;
    }

    DrawRectangleRec(hitbox_flagDE, GRAY);
    DrawRectangleRec(hitbox_flagENG, GRAY);
    DrawRectangleRec(hitbox_close, GRAY);

    DrawRectangleRec(hitbox_tastatur, GRAY);
    DrawRectangleRec(hitbox_controller, GRAY);

    DrawRectangleRec(hitbox_soundless, GRAY);
    DrawRectangleRec(hitbox_soundmore, GRAY);

    DrawTexture(flagDE, 225,355,WHITE);
    DrawTexture(flagENG, 625,355,WHITE);
    DrawTexture(closeButton, 810,450,WHITE);
    DrawTexture(tastatur, 225,115,WHITE);
    DrawTexture(controller, 625, 115, WHITE);
    DrawTexture(soundless, 225, 235, WHITE);
    DrawTexture(soundmore, 625,235, WHITE);

    switch(languagestates){
        case german:
            DrawText("Einstellungen", 320, 23, 50, WHITE);
            DrawText("Steuerung", 400, 125, 30, WHITE);
            DrawText("Ton", 400, 235, 30, WHITE);
            DrawText("Sprache", 400, 365, 30, WHITE);
            break;
        case english:
            DrawText("Settings", 380, 23, 50, WHITE);
            DrawText("Control", 400, 125, 30, WHITE);
            DrawText("Sound", 400, 235, 30, WHITE);
            DrawText("Language", 400, 365, 30, WHITE);
            break;
        default:
            break;
    }

}


