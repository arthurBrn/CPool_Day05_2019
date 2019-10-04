/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** Task 01
*/

int my_compute_factorial_it(int nb)
{
    int value = nb;
    
    if (nb >= 0 && nb < 13) {
        for (int i=1;i < nb; i++) {
            value = value * (nb -i);
        }
    } else {
        value = 0;
    }
    return value;
}
