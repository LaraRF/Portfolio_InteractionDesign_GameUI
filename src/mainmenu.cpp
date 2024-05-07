//
// Created by lrfri on 06.05.2024.
//

#include "mainmenu.h"

void mainmenu::update(globalstates &globalstates, languagestates &languagestates) {
    if(IsKeyPressed(KEY_RIGHT)){
        if(cursor == 2){
            cursor = 2; //makes it, so you can't go "more to the right" than last box
        }else{
            cursor++;
        }
    }

    if(IsKeyPressed(KEY_LEFT)){
        if(cursor == 0){
            cursor = 0; //same here, but for other side of screen
        }else{
            cursor--;
        }
    }

    if(IsKeyPressed(KEY_ENTER)) {
        switch(cursor){
            case 0:
                globalstates = gameplayscreen;
                break;
            case 1:
                globalstates = hauptoptionen;
                break;
            case 2:
                CloseWindow();
        }
    }
}

void mainmenu::draw(languagestates &languagestates) {
    DrawTexture(title, 10, 50, WHITE);


    switch(cursor){ //shows which box is selected by giving it a white outline
        case 0:
            DrawRectangleRec(hitbox_play_marked, WHITE);
            break;
        case 1:
            DrawRectangleRec(hitbox_settings_marked, WHITE);
            break;
        case 2:
            DrawRectangleRec(hitbox_close_marked, WHITE);
            break;
        default:
            break;
    }

    DrawRectangleRec(hitbox_play, GRAY);
    DrawRectangleRec(hitbox_settings, GRAY);
    DrawRectangleRec(hitbox_close, GRAY);


    DrawTexture(button1play, 140, 365, WHITE);
    DrawTexture(button1settings, 415, 340, WHITE);
    DrawTexture(button1close, 740, 360, WHITE);
}
