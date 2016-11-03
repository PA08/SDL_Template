/*
** main.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:08:15 2016 alexis papadimitriou
** Last update Thu Nov  3 10:35:35 2016 alexis papadimitriou
*/

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "events.h"

void		mainloop(t_template *template)
{
  uint		next;
  uint		now;

  next = SDL_GetTicks() + FPS;
  while (template->running)
    {
      event_manager(template);
      fill_c(template->screen, rand() | BLACK);
      SDL_UpdateRect(template->screen, 0, 0, 0, 0);
      now = SDL_GetTicks();
      SDL_Delay((next <= now) ? (0) : (next - now));
      next += FPS;
    }
  SDL_FreeSurface(template->screen);
}

int		main(void)
{
  t_template	*template;

  if (SDL_Init(INIT_FLAGS) ||
      (template = init_template()) == NULL)
    return (-1);
  srand(time(0) * getpid());
  mainloop(template);
  free_template(template);
  SDL_Quit();
  return (0);
}
