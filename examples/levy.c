#include <math.h>
#include "../turtlec.h"

void colorLevel(Turtle *turtle, int depth){
	switch(depth % 6){
		case 0: turtleSetColor(turtle, 255, 0, 0);
			break;
		case 1: turtleSetColor(turtle, 255, 164, 0);
                        break;
		case 2: turtleSetColor(turtle, 255, 255, 0);
                        break;
		case 3: turtleSetColor(turtle, 0, 255, 0);
                        break;
		case 4: turtleSetColor(turtle, 0, 0, 255);
                        break;
		case 5: turtleSetColor(turtle, 127, 0, 127);
                        break;
	}
}

void levy(Turtle *turtle, float length, int depth){
	colorLevel(turtle, depth);

	if(depth == 0){
		turtleForward(turtle, length);
		return;
	}

	turtleLeft(turtle, 45);
	levy(turtle, length / sqrt(2) , depth - 1);

	turtleRight(turtle, 90);
	levy(turtle, length / sqrt(2) , depth - 1);

	turtleLeft(turtle, 45);
}

void draw(Turtle *turtle){
	levy(turtle, 80.0f, 9);
}

int main(void){
	turtleRun(draw, 800, 800, "Levy C");
	return 0;
}
