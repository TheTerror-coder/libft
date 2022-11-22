/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: TheTerror <jfaye@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:37:36 by TheTerror         #+#    #+#             */
/*   Updated: 2022/11/21 22:37:36 by TheTerror        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_count_row(const char *s, char c)
{
	int	i;
	int	nbrow;
	int	ii;

	i = 0;
	ii = 0;
	nbrow = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			ii = i;
		}
		while (s[i] != 0 && s[i] != c)
		{
			ii = i;
			i++;
		}
		if ((ii - i) != 0)
			nbrow++;
	}
	return (nbrow);
}

void	ft_count_col(const char *s, char c, int *nbcol, int *i)
{
	*nbcol = 0;
	while (s[*i] == c)
		*i = *i + 1;
	while (s[*i] && (s[*i] != c))
	{
		*nbcol = *nbcol + 1;
		*i = *i + 1;
	}
}

int	ft_fill(char *str, const char *s, char c, int *i)
{
	int	ix;

	ix = 0;
	while (s[*i] == c)
		*i = *i + 1;
	while (s[*i])
	{
		if (s[*i] == c)
		{
			str[ix] = 0;
			return (ix);
		}
		str[ix] = s[*i];
		ix++;
		*i = *i + 1;
	}
	str[ix] = 0;
	return (ix);
}

void	ft_relay(char **sstr, const char *s, char c)
{
	int	ix;
	int	i;
	int	trash;

	i = 0;
	ix = 0;
	while (sstr[ix])
	{
		trash = ft_fill(sstr[ix], s, c, &i);
		ix++;
	}
	(void) trash;
}

char	**ft_split(char const *s, char c)
{
	int		nbrow;
	int		nbcol;
	int		ix;
	int		i;
	char	**sstr;

	ix = 0;
	i = 0;
	nbrow = 0;
	nbrow = ft_count_row(s, c);
	sstr = malloc(sizeof(char) * (nbrow + 1));
	if (!sstr)
		return (0);
	while (ix < nbrow)
	{
		ft_count_col(s, c, &nbcol, &i);
		sstr[ix] = malloc(sizeof(char) * (nbcol + 1));
		if (!sstr[ix])
			return (0);
		ix++;
	}
	sstr[ix] = 0;
	ft_relay(sstr, s, c);
	return (sstr);
}

/*

****NB

_ Null dans un tableau a pour adresse 00000...
_ Dans le sizeof dans malloc, il n'y a pas besoin de mettre des étoiles aprés le type
(sstr = malloc(sizeof(char) * (nbrow + 1));)

****Methode

Cette fonction n'était pas du tout facile à débugger. 
La conception est venu facilement mais la mise au point était un peu compliqué.
J'ai penser procéder ainsi au fait:
_ puisque pour malloc mon tableau à deux dimensions je dois d'abord malloc les lignes et seulement aprés les colonnes,
j'ai chercher à avoir le nombre de sous chaines que j'obtiens en fonction du caratére délimiteur 
sachant qu'on ne peut pas avoir de sous chaine vide. C'est ce que fait ma fonction ft_count_row. 
Cela me permet malloc le nombre de lignes de mon tableau.
_ ensuite il faut malloc chacune des sous chaines que devraient contenir les lignes allouées précédemment.
Pour ça, j'ai besoin de connaitre la longueur de chaque sous chaine et ensuite j'alloue la mémoire qu'il faut à la 
ligne correspondante de mon tableau à deux dimensions. Là j'ai appris que sstr[ix] correspond soit à la sous chaine 
ayant son adresse à cet index soit au contenu de la ligne. Par exemple la derniere case de la ligne contenant le 
caaractere Null contient la valeur d'adresse 00000000. Bref, une fois que les adresses de toutes les sous chaines 
sont allouées, il ne reste plus qu'à remplir nos colonnes avec les sous chaines.
_ La fonction ft_relay se charge de remplir les lignes les unes aprés les autres à l'aide de la fonction ft_fill.
ft_fill prend bien le soin de mettre le caractére de fin de chaine à chaque fois.

****Difficultés

La fonction ft_count_row m'a beaucoup posé des soucis. Comment la concevoir de telle sorte qu'elle me renvoit dans
tous les cas possibles (en fonction de la position 'c', les répétions de 'c') le bon nombre de sous chaines 
si on découpe 's' en fonction de 'c'. La solution fut de parcourir à chaque entrée dans la fonction 's' du début 
à la fin selon le cheminement suivant: tout au début, on skip tant qu'on retrouve 'c'; ensuite on skip tant qu'on
retrouve pas 'c'; et seulement aprés on incrémente notre compteur de sous chaines "si et seulement si le parcours
sans le caractére 'c' n'est pas vide (cf 'ii = i', 'ii - i' La solution ultime)".
*/