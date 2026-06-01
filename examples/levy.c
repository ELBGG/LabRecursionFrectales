#include <math.h>
#include "../turtlec.h"

void colorLevel(Turtle *turtle, int level){
    switch(level % 9){
        case 0: turtleSetColor(turtle, 255, 0, 0);
                break;
        case 1: turtleSetColor(turtle, 255, 128, 0);
                break;
        case 2: turtleSetColor(turtle, 255, 255, 0);
                break;
        case 3: turtleSetColor(turtle, 128, 255, 0);
                break;
        case 4: turtleSetColor(turtle, 0, 255, 0);
                break;
        case 5: turtleSetColor(turtle, 0, 255, 255);
                break;
        case 6: turtleSetColor(turtle, 0, 0, 255);
                break;
        case 7: turtleSetColor(turtle, 127, 0, 255);
                break;
        case 8: turtleSetColor(turtle, 255, 0, 255);
                break;
    }
}

void levy(Turtle *turtle, float length, int depth, int level){
    if(depth == 0){
        colorLevel(turtle, level);
        turtleForward(turtle, length);
        return;
    }

    turtleLeft(turtle, 45);
    levy(turtle, length / sqrt(2), depth - 1, level * 2);
    turtleRight(turtle, 90);
    levy(turtle, length / sqrt(2), depth - 1, level * 2 + 1);
    turtleLeft(turtle, 45);
}

void draw(Turtle *turtle){
    levy(turtle, 150.0f, 9, 0);
}

int main(void){
    turtleRun(draw, 800, 800, "Levy C");
    return 0;
}