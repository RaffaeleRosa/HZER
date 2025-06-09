#ifndef SCREENS_H
#define SCREENS_H

typedef enum GameScreen 
{
    title = 0,
    game
} GameScreen;

extern GameScreen currentScreen;

//----------------------------------------------------------------------------------
// Title Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitTitleScreen(void);
void UpdateTitleScreen(void);
void DrawTitleScreen(void);
void UnloadTitleScreen(void);
int FinishTitleScreen(void);

#endif