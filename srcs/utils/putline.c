/*
** putline.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs/utils
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:22:55 2016 alexis papadimitriou
** Last update Wed Nov  2 20:23:09 2016 alexis papadimitriou
*/

#include "utils.h"

void		putline(SDL_Surface *pix, t_pos *pos, t_color *colors)
{
  float		dir;
  t_color	col;
  t_pos		p;
  int		add;

  dir = (float)(pos[1].y - pos[0].y) / (pos[1].x - pos[0].x);
  if (dir <= 1 && dir >= -1)
    {
      p.x = pos[0].x;
      add = (pos[0].x > pos[1].x) ? (-1) : (1);
      while (p.x != pos[1].x)
        {
          p.y = pos[0].y + dir * (p.x - pos[0].x);
          col = get_color(pos[0].x, pos[1].x, p.x, colors);
          putpixel(pix, &p, col);
          p.x += add;
        }
    }
  else
    {
      dir = 1 / dir;
      p.y = pos[0].y;
      add = (pos[0].y > pos[1].y) ? (-1) : (1);
      while (p.y != pos[1].y)
        {
          p.x = pos[0].x + dir * (p.y - pos[0].y);
          col = get_color(pos[0].y, pos[1].y, p.y, colors);
          putpixel(pix, &p, col);
          p.y += add;
        }
    }
}
