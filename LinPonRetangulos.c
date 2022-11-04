#include <SDL2/SDL.h>

int main(int argc, char* args[])
{
/*INICIALIZAÇÃO*/
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Window* win = SDL_CreateWindow("Tela Retangular!",
                      SDL_WINDOWPOS_UNDEFINED,
                      SDL_WINDOWPOS_UNDEFINED,
                      400, 400, SDL_WINDOW_SHOWN
                      );
SDL_Renderer* ren = SDL_CreateRenderer(win, -1,0);

/*EXECUÇÃO*/
SDL_SetRenderDrawColor(ren, 0xFF,0xFF,0xFF,0x00);
SDL_RenderClear(ren);
/*retangulo*/  
SDL_SetRenderDrawColor(ren, 0x00,0x00,0xFF,0x00);
SDL_Rect r = {40,20, 10,10};
SDL_RenderFillRect(ren, &r);
SDL_SetRenderDrawColor(ren, 0x00,0xFF,0x00,0x00);
SDL_Rect s = {0,0, 40,20};
SDL_RenderFillRect(ren, &s);
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0xFF,0x00);
SDL_Rect u = {0,350, 40,40};
SDL_RenderFillRect(ren, &u);
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0x00,0x00);
SDL_Rect t = {350,350, 40,40};
SDL_RenderFillRect(ren, &t);
/*reta*/
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0xFF,0x00);
SDL_LINE v = {200,200, 250,250};
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0x00,0x00);
SDL_LINE x = {100,100, 150,150};
/*ponto*/
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0x00,0x00); 
SDL_Point q = {100,50};
  
  
  
SDL_RenderPresent(ren);
SDL_Delay(9000);

/*FINALIZAÇÃO*/
SDL_DestroyRenderer(ren);
SDL_DestroyWindow(win);
SDL_Quit();
}
