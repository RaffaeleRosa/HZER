#ifndef PLAYER_H
#define PLAYER_H

//----------------------------------------------------------------------------------
// Types and Structures Definition
//----------------------------------------------------------------------------------

typedef struct Player
{
    Vector2 pos;
    Rectangle bbox;
    Texture2D texture;
    Color color;

    // Game
    int health;
    bool isDead;

    // Animation
    Rectangle frame;
    int currentFrame;
    int currentSequence;

} Player;

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
extern Player player;

void InitPlayer(void);
void UpdatePlayer(void);
void DrawPlayer(void);
void UnloadPlayer(void);
void ResetPlayer(void);

#endif