/*
** template.c for template in /home/papadi_a/work/perso/graphics/SDL_Template
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 21:23:30 2016 alexis papadimitriou
** Last update Thu Nov  3 10:33:45 2016 alexis papadimitriou
*/

#include <unistd.h>
#include "template.h"

t_template	*init_template()
{
  t_template	*template;

  if ((template = malloc(sizeof(t_template))) == NULL ||
      (template->screen = SDL_SetVideoMode(WIDTH, HEIGHT, 0, WINDOW_FLAGS))
      == NULL ||
      (template->event = malloc(sizeof(SDL_Event))) == NULL)
    return (NULL);
  SDL_WM_SetCaption(WINDOW_TITLE, NULL);
  template->running = true;
  return (template);
}

void		free_template(t_template *template)
{
  SDL_FreeSurface(template->screen);
  free(template->event);
  free(template);
}
