/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** Task 02
*/

int my_compute_factorial_rec(int nb)
{
    if (nb >= 0 && nb < 13) {
        return(nb * my_compute_factorial_rec(nb - 1));
    } else {
        return (0);
    }
}
