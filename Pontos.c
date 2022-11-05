#include <SDL2/SDL.h>

int main(int argc, char* args[])
{
/*INICIALIZAÇÃO*/
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Window* win = SDL_CreateWindow("Linhas pontos e retangulos!",
                      SDL_WINDOWPOS_UNDEFINED,
                      SDL_WINDOWPOS_UNDEFINED,
                      400, 400, SDL_WINDOW_SHOWN
                      );
SDL_Renderer* ren = SDL_CreateRenderer(win, -1,0);

/*EXECUÇÃO*/
SDL_SetRenderDrawColor(ren, 0xFF,0xFF,0xFF,0x00);
SDL_RenderClear(ren);

for (i=0; i<400;i++){
  for (j=0; j<400; j++)
  {
    if (map.at(i).at(j) == 1)
    {
      SDL_SetRenderDrawColor(renderer, 50,255,90,255);
      SDL_RenderDrawPoint(renderer,j,i);
    }
    else
    {
      SDL_SetRenderDrawColor(renderer, 255,255,255,255);
      SDL_RenderDrawPoint(renderer,j,i);
    }
  }
}
     
/*ponto*/
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0x00,0x00); 
SDL_RenderDrawPoint(ren, 100,50);
SDL_SetRenderDrawColor(ren, 0xFF,0x00,0xFF,0x00); 
SDL_RenderDrawPoint(ren,300,150);
SDL_SetRenderDrawColor(ren, 0x00,0xFF,0x00,0x00); 
SDL_RenderDrawPoint(ren, 100,250);
SDL_SetRenderDrawColor(ren, 0x00,0x00,0xFF,0x00); 
SDL_RenderDrawPoint(ren, 200,50);
SDL_SetRenderDrawColor(ren, 0x00,0xFF,0xFF,0x00); 
SDL_RenderDrawPoint(ren, 250,300);
SDL_SetRenderDrawColor(ren, 0xFF,0xFF,0x00,0x00); 
SDL_RenderDrawPoint(ren, 200,50);  
SDL_SetRenderDrawColor(ren, 0xFF,0xFF,0xFF,0x00); 
//SDL_RenderDrawPoint(ren, 200,200);
for(int i=0; i<400; i +=4)
{
  SDL_RenderDrawPoint(ren, 200, i);
}
  
SDL_RenderPresent(ren);
SDL_Delay(9000);

/*FINALIZAÇÃO*/
SDL_DestroyRenderer(ren);
SDL_DestroyWindow(win);
SDL_Quit();
}
