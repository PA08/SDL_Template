/*
** get_color.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs/utils
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:21:32 2016 alexis papadimitriou
** Last update Wed Nov  2 20:21:33 2016 alexis papadimitriou
*/

#include "utils.h"

t_color		get_color(int start, int end, int current, t_color *colors)
{
  t_color	ret;
  float		t;

  t = (current - start) / (float)(end - start);
  ret.argb[R] = colors[0].argb[R] * (1 - t) + t * colors[1].argb[R];
  ret.argb[G] = colors[0].argb[G] * (1 - t) + t * colors[1].argb[G];
  ret.argb[B] = colors[0].argb[B] * (1 - t) + t * colors[1].argb[B];
  return (ret);
}
