#pragma once
#include "raylib.h"


class Cup
{
private:
    Texture2D texture;
    Rectangle source;
    Rectangle dest;
    Vector2 origin;
public:
    Cup();
    ~Cup() = default;

    void DrawCup(Vector2 pos);
    // void ShakeCup(Vector2 pos);
};


