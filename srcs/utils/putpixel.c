/*
** putpixel.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs/utils
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:23:19 2016 alexis papadimitriou
** Last update Wed Nov  2 20:24:29 2016 alexis papadimitriou
*/

#include "utils.h"

void		putpixel(SDL_Surface *pix, t_pos *pos, t_color color)
{
  if (pos->x > -1 && pos->x < pix->w && pos->y > -1 && pos->y < pix->h)
    ((t_color *)pix->pixels)[pos->x + pos->y * pix->w] = color;
}

void		putpixel_i(SDL_Surface *pix, int x, int y, t_color color)
{
  if (x > -1 && x < pix->w && y > -1 && y < pix->h)
    ((t_color *)pix->pixels)[x + y * pix->w] = color;
}

void		putpixel_c(SDL_Surface *pix, t_pos *pos, uint color)
{
  if (pos->x > -1 && pos->x < pix->w && pos->y > -1 && pos->y < pix->h)
    ((uint *)pix->pixels)[pos->x + pos->y * pix->w] = color;
}

void		putpixel_ic(SDL_Surface *pix, int x, int y, uint color)
{
  if (x > -1 && x < pix->w && y > -1 && y < pix->h)
    ((uint *)pix->pixels)[x + y * pix->w] = color;
}
void		putpixel_a(SDL_Surface *pix, t_pos *pos, t_color color)
{
  t_color	get;
  t_color	col;
  float		factor;

  if (pos->x > -1 && pos->x < pix->w && pos->y > -1 && pos->y < pix->h)
    {
      get = getpixel(pix, pos);
      factor = color.argb[A] / 255.;
      col.argb[R] = get.argb[R] * (1 - factor) + color.argb[R] * factor;
      col.argb[G] = get.argb[G] * (1 - factor) + color.argb[G] * factor;
      col.argb[B] = get.argb[B] * (1 - factor) + color.argb[B] * factor;
      ((t_color *)pix->pixels)[pos->x + pos->y * pix->w] = col;
    }
}

void		putpixel_ai(SDL_Surface *pix, int x, int y, t_color color)
{
  t_color	get;
  t_color	col;
  float		factor;

  if (x > -1 && x < pix->w && y > -1 && y < pix->h)
    {
      get = getpixel_i(pix, x, y);
      factor = color.argb[A] / 255.;
      col.argb[R] = color.argb[R] * factor + get.argb[R] * (1 - factor);
      col.argb[G] = color.argb[G] * factor + get.argb[G] * (1 - factor);
      col.argb[B] = color.argb[B] * factor + get.argb[B] * (1 - factor);
      ((t_color *)pix->pixels)[x + y * pix->w] = col;
    }
}
