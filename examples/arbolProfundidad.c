#include "../turtlec.h"

void colorDepth(Turtle *turtle, int depth){
    switch(depth % 7){
        case 0: turtleSetColor(turtle, 120,  70,  20); break;
        case 1: turtleSetColor(turtle, 180, 100,  30); break;
        case 2: turtleSetColor(turtle, 220, 140,  40); break;
        case 3: turtleSetColor(turtle, 180, 180,  60); break;
        case 4: turtleSetColor(turtle, 120, 200,  60); break;
        case 5: turtleSetColor(turtle,  60, 180,  60); break;
        case 6: turtleSetColor(turtle,  20, 120,  20); break;
    }
}

void fractalTree(Turtle *turtle, float length, int depth){ 
	if(depth == 0 || length < 5) return;

	colorDepth(turtle, depth);
	turtleForward(turtle, length);

	turtleLeft(turtle, 30);
	fractalTree(turtle, length * 0.7f, depth - 1);

	turtleRight(turtle, 60);
	fractalTree(turtle, length * 0.7f, depth - 1);

	turtleLeft(turtle, 30);
	colorDepth(turtle, depth);
	turtleBackward(turtle, length);
}

void draw(Turtle *turtle){
	turtlePenUp(turtle);
	turtleGoTo(turtle, 400.0f, 800.0f);
	turtleRight(turtle, -90);
	turtlePenDown(turtle);
    fractalTree(turtle, 150.0f, 9);
}

int main(void){
	turtleRun(draw, 800, 800, "Fractal Tree Profundidad");
	return 0;
}
