#include "raylib.h"
#include "RE4Inventory.h"

int main(void)
{
    // START
    const int screenWidth = 800;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Resident Evil Inventory Systems");
    SetTargetFPS(60);

	// Create inventory object here.
    RE4Inventory* re4Inventory = new RE4Inventory();

	re4Inventory->SetPosition(100, 200);

    while (!WindowShouldClose())
    {
        // UPDATE

        // RENDER
        BeginDrawing();
        ClearBackground(GRAY);

		re4Inventory->Render();

        EndDrawing();
    }
    CloseWindow();

	delete re4Inventory;

    return 0;
}