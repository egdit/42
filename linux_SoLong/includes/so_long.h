#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"
# include "../get_next_line/get_next_line.h"
# include <stdio.h>
# include <fcntl.h>

# define IMG_P "./assets/img/steve.xpm"
# define IMG_C "./assets/img/diamond.xpm"
# define IMG_E "./assets/img/exit.xpm"
# define IMG_S "./assets/img/sand.xpm"
# define IMG_W "./assets/img/wall.xpm"

# define KEY_W 'w'
# define KEY_A 'a'
# define KEY_S 's'
# define KEY_D 'd'
# define KEY_ESC 0xff1b

typedef struct s_img
{
	void	*i_diamond;
	void	*i_player;
	void	*i_sand;
	void	*i_wall;
	void	*i_exit;
	int		height;
	int		width;
}	t_img;

typedef struct s_game
{
	t_img	img;
	void	*mlx_ptr;
	void	*win_ptr;
	char	**map;
	int		row;
	int		col;
	int		exit;
	int		score;
	int		player;
	int		p_y;
	int		p_x;
	int		end_game;
	int		move;
}	t_game;

void	open_map(char *argv, t_game *game);
void	valid_map(t_game *game);
void	valid_matrix(t_game *game);
void	start_img(t_game *game);
int		render_img(t_game *game);
int		which_key(int pressed_key, t_game *game);
void	free_matrix(t_game *game);
int		free_img(t_game *game);
void	message_exit(char *s, t_game *game);

#endif
