/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** Task 03
*/

int my_compute_power_it(int nb, int p)
{
    int value = nb;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        value = 0;
    } else {
        for (int i = 0; i < p; i++) {
            value = value * nb;
        }
    }
    return (value);
}
