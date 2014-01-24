// SDL Learning from Lazy Foo Productions SDL 2
// Geoff Wild

#include <stdio.h>
#include <SDL2/SDL.h>

//Constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main( int argc, char* args[] )
{
	//Window to be rendering to
	SDL_Window* window = NULL;

	//Surface contained by window
	SDL_Surface* screenSurface = NULL;

	//Initialize SDL
	if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
	}

	printf( "Completed successfully" );
	return 0;
}
