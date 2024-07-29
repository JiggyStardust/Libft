/* ************************************************************************** */
/*                                                                            */
/*																			  */
/* 		SOME BASIC LOW LEVEL TESTER I MADE TO CHECK BASIC					  */
/*		FUNCTIONALITY OF MY CUSTOM FUNCTIONS.								  */
/*   	I DIDN'T MAKE MAINS FOR ALL OF THE FUNCTIONS, BUT				 	  */
/*		WHY NOT INCLUDE THIS HERE ANYWAY, AS IT WAS WHAT					  */
/*		I KNEW BACK THEN.													  */
/*   																	      */
/*                                                                            */
/* ************************************************************************** */

/*
// tester for ft_atoi

int	main(void)

{
	char	*nbr;

	nbr = "-9223372036854775809";
	printf("actual atoi: %d\n", atoi(nbr));
	printf("ft_atoi: %d", ft_atoi(nbr));
	return (0);
}*/

/*

// tester for ft_bzero
#include <stdio.h>

int	main()
{
	char str[10] = 	"testbzero";
	printf("%s\n", str);
	ft_bzero(str, 4);
	printf("\n%s", str);

	return (0);
}
*/

/*

// tester fot ft_itoa

int	main(void)
{
	int		nbr;
	char	*str;

	nbr = -1234;
	str = ft_itoa(nbr);
	printf("%s", str);
	return (0);
}*/

/*

// tester for ft_memchr
int	main()
{
	const char s[] = "sesam aukene!";
	unsigned char c = 'a';
	size_t	n = 5;
	char *ret;
	char *mem;

	ret = ft_memchr(s, c, n);
	mem = memchr(s, c, n);
	printf("ft_memchr: string |%s| before |%c|: |%s|\n", s, c, ret);
	printf("actual memchr: string |%s| before |%c|: |%s|", s, c, mem);
	
	return (0);
}*/

/*
// tester for ft_memcmp
int main ()
{
	const char s1[] = "sesam aukene!";
	const char s2[] = "sesan aukene!";
	char *ret;
	char *mem;

	ret = ft_memcmp(s1, s2, 5);
	mem = memcmp(s1, s2, 5);
	
	printf("ft_memcmp: %d\n", ret);
	printf("memcmp: %d", mem);
	return (0);
}*/

/*
// tester for ft_memcpy
int	main(void)
{
	char	src[] = "Waiting for a star to fall";
	char	dst[30];

	printf("dst before memcpy: '%s'\n", dst);
	ft_memcpy(dst, src, 7);
	printf("dst after memcpy: '%s'\n", dst);

	return (0);
}*/
/*

// tester for ft_memmove

int	main(void)
{
	char	src[] = "";
	char	src2[] = "";
	char	dst[20];
	char	dst2[20];

	printf("Src before:\n '%s'\n, dest before:\n '%s'\n", src, dst);
	ft_memmove(dst, src, 9);
	printf("Src  after:\n '%s'\n, dest after:\n '%s'\n\n", src, dst);
	printf("Memmove:\nSrc before:\n '%s'\n, dest before:\n '%s'\n", src2, dst2);
	memmove(dst2, src2, 9);
	printf("src after:\n '%s'\n, dest after:\n '%s'\n", src2, dst2);
	return (0);
}*/

/*
// tester for ft_memset

int	main()
{
	char str[50] = "Is coffee actually healthy or not?";

	printf("Before memset:\n");
	printf("%s", str);
	printf("\nAfter memset:\n");
	ft_memset('\0', 'a', 7*sizeof(char));
	printf("%s", str);

	return (0);
}*/

/*
// tester for ft_putchar_fd

int	main(void)
{
	int		fd;
	char	c;

	fd = 1;
	c = 'G';
	ft_putchar_fd(c, fd);
	return (0);
}*/

/*
// tester for ft_putend_fd

int	main(void)
{
	ft_putendl_fd("buzzfizzfuzz", 1);
	return (0);
}*/

/*
// tester for ft_putnbr_fd

int	main(void)
{
	ft_putnbr_fd(-30592809, 1);
}*/

/*
// tester for ft_putstr_fd

int	main(void)
{
	ft_putstr_fd("I'm a twisted firestater", 1);
	return (0);
}*/

/*
// tester for ft_split

int	main(void)
{
	int		i;
	char	**split_a;
	int	j;

	j = 0;
	i = 12;
	split_a = ft_split("Soihdut sammuu, kaikki vaeki nukkuu", ' ');
	while (split_a[j] != NULL)
	{
		printf("%s - ", split_a[j]);
		j++;
	}
	freesubs(split_a, j);
	printf("\n");
	return (0);
}*/

/*
// tester for ft_split

int	main()
{
	const char s[] = "sesam aukene!";
	int	c = 'a';
	char *str; 
	char *ret;
	
	str = ft_strchr(s, c);
	ret = strchr(s, c);

	printf("Self made function: |%s| after |%c| is: |%s|\n", s, c, str);
	printf("Actual function: |%s| after |%c| is: |%s|\n", s, c, ret);
	return (0);
}*/

/*
tester for ft_strdup

int	main(void)
{
	char	*source;
	char	*target;
	char	*test;

	source = "great succes! :)";
	target = ft_strdup(source);
	test = strdup(source);
	printf("ft_strdup: %s\n", target);
	printf("actual strdup: %s", test);
	return (0);
}*/
/*
// tester for ft_striteri
int	main(void)
{
	char	s[] = "Mau (>.<) uaM";

	ft_striteri(s, ft_tolower);
	return (0);
}*/
/*
// tester for ft_striteri

int	main(void)
{
	const char	s1[] = "string1";
	const char	s2[] = "string2";
	char		*strcombo;

	strcombo = ft_strjoin(s1, s2);
	printf("The first string: '%s', the second string: '%s'\n", s1, s2);
	printf("The joined string: '%s'", strcombo);
	return (0);
}*/

/*
// testere for ft_strlcat

#include <stdio.h>

int main() {

    char src[50] = " or a Nike?";
    char dest[100] = "Is this a Reebok";
    size_t	l;

	l = ft_strlcat(dest, src, 9);
    printf("%zu\n", l);
	printf("%s", dest);
//	printf("%zu", strlcat(dest, src, 9));
    return 0;
}*/

/*
// tester for ft_strlcpy

int	main(void)
{
	int	len;
	int leng;
	char dest[40];
	char test[40];

	len = ft_strlcpy(dest, "wawawiwaa", 0);
	leng = strlcpy(test, "wawawiwaa", 0);
	printf("Value with ft_: %d, ", len);
	printf("dest with ft_: %s.\n", dest);
	printf("Value with og: %d, dest with og: %s", leng, test);
	return (0);
}*/

/*
// tester for ft_strmapi

  static char	map_to_upper(unsigned int index, char c)
{
	(void)index;
	return (ft_toupper(c));
}

int	main(void)
{
	char 	input[] = "Ciao";
	char	*result;

	result = ft_strmapi(input, map_to_upper);
	printf("Original input: '%s', after strmapi: '%s'", input, result);
	return (0);
}*/

/*
// tester for ft_strncmp

#include <stdio.h>
#include <string.h>
int main() {

    char s1[] = "";
    char s2[] = "hfd";

    printf("%d\n", ft_strncmp(s1, s2, -1));
    printf("%d\n", ft_strncmp(s1, s2, -1));
    printf("%d", strncmp(s1, s2, -1));

    return 0;
}
*/

/*
// tester for ft_strnstr

#include <xlocale.h>
int main() {

    char str[] = "tesangjsaka fyjjsak ajskd kggj abcd skjjdkhhykste";
    char to_find[] = "abcd";
    char *myfunction;
    char *realfunction;
    size_t  len;

    len = 1;
	myfunction = ft_strnstr(str, to_find, 50);
	realfunction = strnstr(str, to_find, 50);

	printf("My function: %s\n", myfunction);
	printf("Actual function: %s", realfunction);
    return 0;
}*/

/*
// tester for ft_strrchr

int    main()
{
	const char s[] = "äeryyärhdh";
	char	c = 'y';
	char	*str;
	char	*ret;

	str = ft_strrchr(s, c);
	ret = strrchr(s, c);

	printf("Self made function: |%s| after |%c| is: |%s|\n", s, c, str);
	printf("Actual function: |%s| after |%c| is: |%s|\n", s, c, ret);
	return (0);
}*/

/*
// tester for ft_strtrim

int	main(void)
{
	char const	s1[] = "a ja b ba th eh ut ";
	char const	set[] = "a t";
	char		*trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed != NULL)
	{
		printf("Original string: '%s'\n", s1);
		printf("Trimmed string:  '%s'\n", trimmed);
	}
	return (0);
}*/

/*
// tester for ft_substr

int	main(void)
{
	const char		s[] = "Je m'appelle Patrice";
	char			*ret;
	unsigned int	start;
	size_t			len;

	start = 5;
	len = 5;
	ret = ft_substr(s, start, len);
	printf("Original string: '%s'\n", s);
	printf("Substring with index %d and length %zu: '%s'", start, len, ret);
	return (0);
}*/