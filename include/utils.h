/*
** utils.h for template in /home/papadi_a/work/perso/graphics/SDL_Template
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 20:06:24 2016 alexis papadimitriou
** Last update Wed Nov  2 20:07:51 2016 alexis papadimitriou
*/

#ifndef UTILS_H_
# define UTILS_H_
# include <SDL/SDL.h>

# define R	(2)
# define G	(1)
# define B	(0)
# define A	(3)

# define BLACK	(0xFF000000)
# define RED	(0xFFFF0000)
# define GREEN	(0xFF00FF00)
# define BLUE	(0xFF0000FF)
# define PURPLE	(0xFFFF00FF)
# define TEAL	(0xFF00FFFF)
# define YELLOW	(0xFFFFFF00)
# define WHITE	(0xFFFFFFFF)
# define PINK	(0xFFFF7777)
# define PINK2	(0xFFFF69B4)

typedef unsigned int uint;

typedef union	u_color
{
  unsigned int	full;
  unsigned char	argb[4];
}		t_color;

typedef struct	s_pos
{
  int		x;
  int		y;
}		t_pos;

void	putpixel(SDL_Surface *pix, t_pos *pos, t_color color);
void	putpixel_i(SDL_Surface *pix, int x, int y, t_color color);
void	putpixel_c(SDL_Surface *pix, t_pos *pos, uint color);
void	putpixel_ic(SDL_Surface *pix, int x, int y, uint color);
void	putpixel_a(SDL_Surface *pix, t_pos *pos, t_color color);
void	putpixel_ai(SDL_Surface *pix, int x, int y, t_color color);

t_color	getpixel(SDL_Surface *pix, t_pos *pos);
t_color	getpixel_i(SDL_Surface *pix, int x, int y);
uint	getpixel_c(SDL_Surface *pix, t_pos *pos);
uint	getpixel_ic(SDL_Surface *pix, int x, int y);

t_color	get_color(int start, int end, int current, t_color *colors);

void	putline(SDL_Surface *pix, t_pos *pos, t_color *colors);

void	putcircle(SDL_Surface *pix, t_pos *center, int radius, t_color color);

void	fill(SDL_Surface *pix, t_color color);
void	fill_c(SDL_Surface *pix, uint color);
void	fill_a(SDL_Surface *pix, t_color color);

#endif /* !UTILS_H_ */
