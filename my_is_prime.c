/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** Task 06
*/

int my_is_prime(int nb)
{    
    for (int i=2; i < nb; i++) {
        if (nb % i == 0) { 
            return (0);
        }            
    }
    return (1);
}
