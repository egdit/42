#include "../includes/so_long.h"

int	free_img(t_game *game)
{
	mlx_clear_window(game->mlx_ptr, game->win_ptr);
	mlx_destroy_image(game->mlx_ptr, game->img.i_diamond);
	mlx_destroy_image(game->mlx_ptr, game->img.i_exit);
	mlx_destroy_image(game->mlx_ptr, game->img.i_sand);
	mlx_destroy_image(game->mlx_ptr, game->img.i_player);
	mlx_destroy_image(game->mlx_ptr, game->img.i_wall);
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	free_matrix(game);
	free(game->mlx_ptr);
	exit(3);
	return (0);
}

void	start_img(t_game *game)
{
	game->img.i_wall = mlx_xpm_file_to_image(game->mlx_ptr, IMG_W,
			&game->img.height, &game->img.width);
	game->img.i_player = mlx_xpm_file_to_image(game->mlx_ptr, IMG_P,
			&game->img.height, &game->img.width);
	game->img.i_sand = mlx_xpm_file_to_image(game->mlx_ptr, IMG_S,
			&game->img.height, &game->img.width);
	game->img.i_exit = mlx_xpm_file_to_image(game->mlx_ptr, IMG_E,
			&game->img.height, &game->img.width);
	game->img.i_diamond = mlx_xpm_file_to_image(game->mlx_ptr, IMG_C,
			&game->img.height, &game->img.width);
}

static int	verify_char(int line, int col, char c, t_game *game)
{
	if (c == '1')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->img.i_wall, col * 32, line * 32);
	if (c == '0')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->img.i_sand, col * 32, line * 32);
	if (c == 'P')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->img.i_player, col * 32, line * 32);
	if (c == 'E')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->img.i_exit, col * 32, line * 32);
	if (c == 'C')
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
			game->img.i_diamond, col * 32, line * 32);
	return (0);
}

int	render_img(t_game *game)
{
	int	line;
	int	col;

	line = 0;
	while (game->map[line])
	{
		col = 0;
		while (game->map[line][col])
		{
			verify_char(line, col, game->map[line][col], game);
			col++;
		}
		line++;
	}
	return (0);
}
