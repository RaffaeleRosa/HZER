/*******************************************************************************************
*
*   HZER v0.0.2
*
*   Horror Zombie Escape Room
*
*   This game has been created using
*   raylib
*   and raylib [core] example - Basic 3d example.
*   This has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

#include "./src/player.h"


//----------------------------------------------------------------------------------
// Local Variables Definition (local to this module)
//----------------------------------------------------------------------------------
static const int SCREENWIDTH = 1920;
static const int SCREENHEIGHT = 1080;

Music music = {0};

Camera2D camera = { 0 };

//----------------------------------------------------------------------------------
// Local Functions Declaration
//----------------------------------------------------------------------------------
static void UpdateDrawFrame(void);          // Update and draw one frame

//----------------------------------------------------------------------------------
// Main entry point
//----------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(SCREENWIDTH, SCREENHEIGHT, "HZER V0.0.2");

    InitAudioDevice();

    camera.offset = (Vector2){0.0f, 0.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
    camera.target = (Vector2){0.0f, 0.0f};

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        UpdateDrawFrame();
    }

    // De-Initialization
    // Close window and OpenGL context
    CloseWindow();                  

    return 0;
}

// Update and draw game frame
static void UpdateDrawFrame(void)
{
    // Update
    //----------------------------------------------------------------------------------
    // UpdateCamera(&camera, CAMERA_ORBITAL);
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(DARKGRAY);

        BeginMode2D(camera);

        EndMode2D();

        DrawText("HORROR ZOMBIE ESCAPE ROOM", 10, 25, 20, BLACK);

        DrawFPS(SCREENWIDTH - 100, SCREENHEIGHT - 25);

    EndDrawing();
    //----------------------------------------------------------------------------------
}