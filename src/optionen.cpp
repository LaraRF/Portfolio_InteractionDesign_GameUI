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

    DrawTexture(flagDE, 125,365,WHITE);
    DrawTexture(flagENG, 425,365,WHITE);
    DrawTexture(closeButton, 745,360,WHITE);

    switch(languagestates){
        case german:
            DrawText("Einstellungen", 320, 30, 50, WHITE);
            break;
        case english:
            DrawText("Settings", 380, 30, 50, WHITE);
            break;
        default:
            break;
    }

}


