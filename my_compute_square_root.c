/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** CPool Day05 Task05
*/

int my_compute_square_root(int nb)
{
    int res;
    int n;
    int i;

    if (nb >= 10)
        n = (nb / 10) * 10;
    for (i = !n ? n : 1; res < nb; i++)
        res = i * i;
    i -= 1;
    if (i * i != nb)
        return (0);
    return (i);
}