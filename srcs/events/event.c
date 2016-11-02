/*
** event.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 21:36:18 2016 alexis papadimitriou
** Last update Wed Nov  2 21:38:11 2016 alexis papadimitriou
*/

#include "events.h"

void	event_manager(t_template *template)
{
  if (SDL_PollEvent(template->event) &&
      template->event->type == SDL_KEYDOWN &&
      template->event->key.keysym.sym == SDLK_ESCAPE)
    template->running = false;
}
