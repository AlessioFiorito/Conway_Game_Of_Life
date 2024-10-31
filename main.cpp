#include <raylib.h>
#include <cstdlib>

int main() {
    const int window_width = 750;
    const int window_height = 750;
    const int fps = 12;
    Color grey = {29, 29, 29, 255};

    InitWindow(window_width, window_height, "Game of Life");
    SetTargetFPS(fps);

    //Simulation loop
    while(WindowShouldClose() == false) {
        //1. Event handling

        //2. Updating state

        //3. Drawing
        BeginDrawing();
        ClearBackground(grey);
        EndDrawing();

    }

    CloseWindow();

    return EXIT_SUCCESS;
}