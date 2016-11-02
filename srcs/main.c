/*
** main.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:08:15 2016 alexis papadimitriou
** Last update Wed Nov  2 21:09:58 2016 alexis papadimitriou
*/

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "utils.h"
#include "template.h"

void		event_manager(SDL_Event *event, char *running)
{
  if (SDL_PollEvent(event) && event->type == SDL_KEYDOWN &&
      event->key.keysym.sym == SDLK_ESCAPE)
    *running = 0;
}

int		main(void)
{
  SDL_Surface	*screen;
  SDL_Event	event;
  char		running;
  uint		next;
  uint		now;

  screen = SDL_SetVideoMode(640, 480, 0, 0);
  running = 1;
  srand(time(0) * getpid());
  next = SDL_GetTicks() + FPS;
  while (running)
    {
      event_manager(&event, &running);
      fill_c(screen, rand() | BLACK);
      SDL_UpdateRect(screen, 0, 0, 0, 0);
      now = SDL_GetTicks();
      SDL_Delay((next <= now) ? (0) : (next - now));
    }
  SDL_FreeSurface(screen);
  SDL_Quit();
  return (0);
}
