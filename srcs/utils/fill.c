/*
** fill.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs/utils
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:10:39 2016 alexis papadimitriou
** Last update Wed Nov  2 20:13:18 2016 alexis papadimitriou
*/

#include "utils.h"

void		fill(SDL_Surface *pix, t_color color)
{
  t_color	*buffer;
  uint		size;
  uint		index;

  buffer = pix->pixels;
  size = pix->w * pix->h;
  index = -1;
  while (++index < size)
    buffer[index] = color;
}

void		fill_c(SDL_Surface *pix, uint color)
{
  uint		*buffer;
  uint		size;
  uint		index;

  buffer = pix->pixels;
  size = pix->w * pix->h;
  index = -1;
  while (++index < size)
    buffer[index] = color;
}

void		fill_a(SDL_Surface *pix, t_color color)
{
  t_pos		pos;

  pos.y = -1;
  while (++pos.y < pix->h)
    {
      pos.x = -1;
      while (++pos.x < pix->w)
        putpixel_a(pix, &pos, color);
    }
}
