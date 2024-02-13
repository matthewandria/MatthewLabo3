#include "entrypoint.h"

#include "raylib.h"

void raylib_start(void){
    InitWindow(690,420,"wus good mf !");
    SetTargetFPS(60);
    float x = 0; 
    float y = 0; 
    while(!WindowShouldClose()){
        float dt = GetFrameTime();
        if(IsKeyDown(KEY_RIGHT)){
            x += 200 * dt;
        }
        if(IsKeyDown(KEY_LEFT)){
            x -= 200 * dt;
        }
        if(IsKeyDown(KEY_DOWN)){
            y += 200 * dt;
        }
        if(IsKeyDown(KEY_UP)){
            y -= 200 * dt;
        }
        BeginDrawing();
        ClearBackground(PURPLE);

        DrawRectangle(x,y,200,200,(Color){255,255,255,255});

        if(x>690){
            x = -5;
        }
        if(y>420){
            y = -5;
        }
         if(x>690){
            x = +5;
        }
         if(y>420){
            y = +5;
        }    
        EndDrawing();
    }
    CloseWindow();
}