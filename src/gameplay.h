//
// Created by lrfri on 06.05.2024.
//

#ifndef RAYLIBSTARTER_GAMEPLAY_H
#define RAYLIBSTARTER_GAMEPLAY_H

#include "raylib.h"
#include "globalstates.h"

class gameplay {
public:
    void update(globalstates &globalstates);

    void draw();
};


#endif //RAYLIBSTARTER_GAMEPLAY_H
