#include "../turtlec.h"

void fractalTree(Turtle *turtle, float length, int depth){ 
	if(depth == 0 || length < 5) return;
	
	if(depth > 5)
		turtleSetColor(turtle, 120, 70, 20);
       	else
	       	turtleSetColor(turtle, 0, 200, 0);

	turtleForward(turtle, length);

	turtleLeft(turtle, 30);
	fractalTree(turtle, length * 0.7f, depth - 1);

	turtleRight(turtle, 60);
	fractalTree(turtle, length * 0.7f, depth - 1);

	turtleLeft(turtle, 30);
	turtleBackward(turtle, length);
}

void draw(Turtle *turtle){
	turtlePenUp(turtle);
	turtleGoTo(turtle, 400.0f, 800.0f);
	turtleRight(turtle, -90);
	turtlePenDown(turtle);
       	fractalTree(turtle, 80.0f, 9);
}

int main(void){
	turtleRun(draw, 800, 800, "Fractal Tree");
	return 0;
}
