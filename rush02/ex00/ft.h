/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:43:51 by alesanto          #+#    #+#             */
/*   Updated: 2019/09/15 23:25:34 by alesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void		ft_premier_check(char *number, char *dict);
void		ft_search_and_find(unsigned long long nb, char *dict);
void		ft_aff_mille(unsigned long long nb, char **dict_in_tab, int nb_000);
long long	ft_atoi(char *str);
void		ft_dict_error(void);
void		ft_error(void);
int			ft_strlen(char *str);
void		ft_free(char **tab);
char		*ft_format(char *c);
void		ft_putstr(char *str);
char		*ft_recuperation(char *dict);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
void		ft_aff_modulo(unsigned long long nb, char **dict_in_tab);
void		ft_affichage_unite(unsigned long long nb, char **dict_in_tab);
void		ft_affichage_centaines(char **dict_in_tab);
void		ft_affiche_dix(unsigned long long nb, char **dict_in_tab);
void		ft_affiche_teen(unsigned long long nb, char **dict_in_tab);
void		ft_affiche_dix_espace(unsigned long long nb);
void		ft_affichage_espace_centaines(unsigned long long nb);
void		ft_affichage_000(int nb_000, char **dict_in_tab);
void		ft_print_extra_th(int nb_000, char **dict_in_tab);
void		ft_affichage_mille(char **dict_in_tab);
void		ft_affichage_million(char **dict_in_tab);
void		ft_affiche_milliard(char **dict_in_tab);
char		**ft_split(char *str, char *charset);
void		ft_putchar(char c);
int			ft_check_format(char **dict_in_tab);

#endif
