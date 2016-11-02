/*
** putcircle.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs/utils
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:22:25 2016 alexis papadimitriou
** Last update Wed Nov  2 20:22:40 2016 alexis papadimitriou
*/

#include "utils.h"

void	putcircle_part(SDL_Surface *pix, t_pos *center, t_pos *pos, t_color color)
{
  putpixel_i(pix, center->x + pos->x, center->y + pos->y, color);
  putpixel_i(pix, center->x + pos->y, center->y + pos->x, color);
  putpixel_i(pix, center->x - pos->x, center->y + pos->y, color);
  putpixel_i(pix, center->x - pos->y, center->y + pos->x, color);
  putpixel_i(pix, center->x + pos->x, center->y - pos->y, color);
  putpixel_i(pix, center->x + pos->y, center->y - pos->x, color);
  putpixel_i(pix, center->x - pos->x, center->y - pos->y, color);
  putpixel_i(pix, center->x - pos->y, center->y - pos->x, color);
}

void	putcircle(SDL_Surface *pix, t_pos *center, int radius, t_color color)
{
  t_pos	pos;
  int	d;

  pos.x = 0;
  pos.y = radius;
  d = radius - 1;

  while (pos.y >= pos.x)
    {
      putcircle_part(pix, center, &pos, color);
      if (d >= 2 * pos.x)
        {
          d -= 2 * pos.x + 1;
          pos.x += 1;
        }
      else if (d < 2 * (radius - pos.y))
        {
          d += 2 * pos.y - 1;
          pos.y -= 1;
        }
      else
        {
          d += 2 * (pos.y - pos.x - 1);
          pos.y -= 1;
          pos.x += 1;
        }
    }
}
