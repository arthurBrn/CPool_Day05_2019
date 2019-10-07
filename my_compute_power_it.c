/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** Task 03
*/

int my_compute_power_it(int nb, int p)
{
    int value = nb;

    if (p == 0)
        return (1);
    if (p < 0 || nb < 0) {
        return (0);
    }

    for (int i = 1; i < p; i++) {
        value = value * nb;
//        p--;
    }
    return (value);
}
