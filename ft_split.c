/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:37:36 by TheTerror         #+#    #+#             */
/*   Updated: 2022/12/15 18:49:53 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include "libft.h"

unsigned int	ft_count_row(const char *s, char c)
{
	unsigned int	i;
	unsigned int	nbrow;

	i = 0;
	nbrow = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] != 0 && s[i] != c)
				i++;
			nbrow++;
		}
	}
	return (nbrow);
}

unsigned int	ft_count_col(const char *s, char c)
{
	unsigned int	i;

	i = 0;
	while ((s[i] != 0) && (s[i] != c))
		i++;
	return (i);
}

void	ft_free(char **arr, unsigned int ix)
{
	while (ix > 0)
	{
		free(arr[ix]);
		ix--;
	}
	free(arr[ix]);
	free(arr);
}

int	ft_fill(char const *s, char **sstr, char c)
{
	unsigned int	i;
	unsigned int	ix;
	unsigned int	len;

	i = 0;
	ix = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = ft_count_col(&s[i], c);
		if (s[i])
		{
			sstr[ix] = ft_substr(s, i, len);
			if (!sstr[ix])
			{
				ft_free(sstr, ix);
				return (0);
			}	
			ix++;
		}
		i = len + i;
	}
	sstr[ix] = 0;
	return (55);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	len;
	char			**sstr;

	len = ft_count_row(s, c);
	sstr = malloc(sizeof(char *) * (len + 1));
	if (!sstr)
		return (NULL);
	if (!ft_fill(s, sstr, c))
		return (0);
	return (sstr);
}

/*
****NB

_ Null dans un tableau a pour adresse 00000...
_ Dans le sizeof dans malloc, il n'y a pas besoin de 
mettre des étoiles aprés le type
(sstr = malloc(sizeof(char) * (nbrow + 1));)

****Methode

Cette fonction n'était pas du tout facile à débugger. 
La conception est venu facilement mais la mise au point était un peu compliqué.
J'ai penser procéder ainsi au fait:
_ puisque pour malloc mon tableau à deux dimensions je dois d'abord malloc les
 lignes et seulement aprés les colonnes,
j'ai chercher à avoir le nombre de sous chaines que j'obtiens en fonction du 
caratére délimiteur 
sachant qu'on ne peut pas avoir de sous chaine vide. C'est ce que fait ma 
fonction ft_count_row. 
Cela me permet malloc le nombre de lignes de mon tableau.
_ ensuite il faut malloc chacune des sous chaines que devraient contenir 
les lignes allouées précédemment.
Pour ça, j'ai besoin de connaitre la longueur de chaque sous chaine et 
ensuite j'alloue la mémoire qu'il faut à la 
ligne correspondante de mon tableau à deux dimensions. Là j'ai appris que 
sstr[ix] correspond soit à la sous chaine 
ayant son adresse à cet index soit au contenu de la ligne. Par exemple la 
derniere case de la ligne contenant le 
caaractere Null contient la valeur d'adresse 00000000. Bref, une fois que les 
adresses de toutes les sous chaines 
sont allouées, il ne reste plus qu'à remplir nos colonnes avec les sous chaines.
_ La fonction ft_relay se charge de remplir les lignes les unes aprés les autres
 à l'aide de la fonction ft_fill.
ft_fill prend bien le soin de mettre le caractére de fin de chaine à chaque 
fois.

****Difficultés

La fonction ft_count_row m'a beaucoup posé des soucis. Comment la concevoir de
 telle sorte qu'elle me renvoit dans
tous les cas possibles (en fonction de la position 'c', les répétions de 'c') 
le bon nombre de sous chaines 
si on découpe 's' en fonction de 'c'. La solution fut de parcourir à chaque 
entrée dans la fonction 's' du début 
à la fin selon le cheminement suivant: tout au début, on skip tant qu'on 
retrouve 'c'; ensuite on skip tant qu'on
retrouve pas 'c'; et seulement aprés on incrémente notre compteur de sous 
chaines "si et seulement si le parcours
sans le caractére 'c' n'est pas vide (cf 'ii = i', 'ii - i' La solution 
ultime)".
*/