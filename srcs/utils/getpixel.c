/*
** getpixel.c for template in /home/papadi_a/work/perso/graphics/SDL_Template/srcs/utils
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:21:57 2016 alexis papadimitriou
** Last update Wed Nov  2 20:22:12 2016 alexis papadimitriou
*/

#include "utils.h"

t_color	getpixel(SDL_Surface *pix, t_pos *pos)
{
  if (pos->x > -1 && pos->x < pix->w && pos->y > -1 && pos->y < pix->h)
    return (((t_color *)pix->pixels)[pos->x + pos->y * pix->w]);
  return ((t_color)(BLACK));
}

t_color	getpixel_i(SDL_Surface *pix, int x, int y)
{
  if (x > -1 && x < pix->w && y > -1 && y < pix->h)
    return (((t_color *)pix->pixels)[x + y * pix->w]);
  return ((t_color)(BLACK));
}

uint	getpixel_c(SDL_Surface *pix, t_pos *pos)
{
  if (pos->x > -1 && pos->x < pix->w && pos->y > -1 && pos->y < pix->h)
    return (((uint *)pix->pixels)[pos->x + pos->y * pix->w]);
  return (BLACK);
}

uint	getpixel_ic(SDL_Surface *pix, int x, int y)
{
  if (x > -1 && x < pix->w && y > -1 && y < pix->h)
    return (((uint *)pix->pixels)[x + y * pix->w]);
  return (BLACK);
}
