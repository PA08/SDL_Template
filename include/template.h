/*
** template.h for template in /home/papadi_a/work/perso/graphics/SDL_Template
**
** Made by alexis papadimitriou
** Login   <papadi_a@epitech.net>
**
** Started on  Wed Nov  2 21:09:02 2016 alexis papadimitriou
** Last update Wed Nov  2 21:34:03 2016 alexis papadimitriou
*/

#ifndef DEMO_H_
# define DEMO_H_
# include "utils.h"

# define WIDTH	(640)
# define HEIGHT	(480)
# define FLAGS	(0)
# define FPS	(60)

typedef struct	s_template
{
  SDL_Surface	*screen;
  SDL_Event	*event;
  bool		running;
}		t_template;

t_template	*init_template();
void		free_template(t_template *template);

#endif /* !DEMO_H_ */
