Dear Diary,
----------

This was my first assignment at Hive, a coding school part of the 42 school network.

The goal here was to start writing our own library of useful functions, as our usage of ready-made library functions was limited.
As the school went on, we were allowed to update the library by adding more functions. 
This version is the first stage of my Libft without further function additions meeting the standards of this first assignment.

I also included main.c, a file with some very basic low level tests for my functions (although to pass this assignment no additional or unused functions were allowed.)


Functions that were mimicked and restrictions:
-------------

### ***Mandatory part*** 🧑‍🍳

**The following functions had to be rewritten without relying on external functions:**

    • isalpha  -> ft_isalpha
    • isdigit  -> ft_isdigit
    • isalnum  -> ft_isalnum
    • isascii  -> ft_isascii
    • isprint  -> ft_isprint
    • strlen   ...
    • memset
    • bzero
    • memcpy
    • memmove
    • strlcpy
    • strlcat
    • toupper
    • tolower
    • strchr
    • strrchr
    • strncmp
    • memchr
    • memcmp
    • strnstr
    • atoi
    • ft_striteri - Prototype: void ft_striteri(char *s, void (*f)(unsigned int, char*));
        s: The string to iterate over.
        f: The function to apply to each character.

** Usage of write() was allowed to:**

    • ft_putchar_fd - Prototype: void ft_putchar_fd(char c, int fd);
        c: The character to output.
        fd: The file descriptor on which to write.
        Outputs the character 'c' to the specified file descriptor.

    • ft_putstr_fd - Prototype: void ft_putstr_fd(char *s, int fd);
        s: The string to output.
        fd: The file descriptor on which to write.
        Outputs the string ’s’ to the specified file descriptor.
        
    • ft_putendl_fd - Prototype: void ft_putendl_fd(char *s, int fd);
        s: The string to output.
        fd: The file descriptor on which to write.
        Outputs the string ’s’ to the specified file descriptor followed by a newline.
        
   • ft_putnbr_fd - Prototype: void ft_putnbr_fd(int n, int fd);
        n: The integer to output.
        fd: The file descriptor on which to write.
        Outputs the integer ’n’ to the specified file descriptor.
        
**Usage of malloc() was allowed to:**

    • calloc 
    • strdup 
    • ft_substr - Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);
        s: The original string from which to create the substring.
        start: The starting index of the substring within ’s’.
        len: The maximum length of the substring.
        Return value: The substring, NULL if the allocation fails.
    • ft_strjoin - Prototype: char *ft_strjoin(char const *s1, char const *s2);
        s1: The prefix string.
        s2: The suffix string.
        Return value: The new concatenated string (s1 + s2), NULL if the allocation fails.
    • ft_strtrim - Prototype: char *ft_strtrim(char const *s1, char const *set);
        s1: The string to be trimmed.
        set: The string containing the set of characters to be removed.
        Return value: The trimmed string (copy of 's1' with 'set' removed), NULL if the allocation fails.
        
    • ft_itoa - Prototype: char *ft_itoa(int n);
        n: The integer to convert.
        Return value: The string representing the integer, NULL if the allocation fails.
        
    • ft_strmapi - Prototype: char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
        s: The string to iterate over.
        f: The function to apply to each character.
        Return value: The string created from the successive applications of ’f’, NULL if the allocation fails.
        
**Usage of malloc() and free() upon failure to avoid memory leaks:**

    • ft_split - Prototype: char **ft_split(char const *s, char c);
        s: The string to be split.
        c: The delimiter character.
        Return value: The array of new strings resulting from the split (string 's' is split into multiple strings by delimiter 'c'), NULL if the allocation fails.
        The array must end with a NULL pointer.



### ***Bonus part*** 🧙‍♀️

#### 💭: "Ahhh, list functions..." 
At this point these were super abstract as there was no idea how and where I would use lists.

The given struct was to be added into libft header file: 

    typedef struct s_list
    {
        void *content;
        struct s_list *next;
    } t_list;

**No external functions allowed:**

    • ft_lstadd_front - Prototype: void ft_lstadd_front(t_list **lst, t_list *new);
      lst: The address of a pointer to the first node of a list.
      new: The address of a pointer to the node to be added.
      Adds the node ’new’ at the beginning of the list.
      
    • ft_lstsize - Prototype int ft_lstsize(t_list *lst);
      lst: The beginning of the list.
      Return value: The length of the list
      Counts the number of nodes in the list.
      
    • ft_lstlast - Prototype: t_list *ft_lstlast(t_list *lst);
      lst: The beginning of the list.
      Return value: Last node of the list
      
    • ft_lstadd_back - Prototype: void ft_lstadd_back(t_list **lst, t_list *new);
      lst: The address of a pointer to the first node of a list.
      new: The address of a pointer to the node to be added.
      Adds the node ’new’ at the end of the list.

      • ft_lstiter - Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
        lst: The address of a pointer to a node.
        f: The address of the function to apply to each node’s content.
        Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.

**Usage of free() allowed:**

    • ft_lstdelone - Prototype: void ft_lstdelone(t_list *lst, void (*del)(void*));
      lst: The node to free.
      del: The address of the function used to delete the content.
      Takes a node as parameter and frees its content using the function ’del’. 
      Frees the node itself but does NOT free the next node.
      
    • ft_lstclear - Prototype: void ft_lstclear(t_list **lst, void (*del)(void*));
      lst: The address of a pointer to a node.
      del: The address of the function used to delete the content of the node.
      Deletes and frees the given node and all its successors, using the function ’del’ and free(3).
      Finally, set the pointer to the list to NULL.
      
**Usage of malloc() allowed:**

    • ft_lstnew - Prototype: t_list *ft_lstnew(void *content);
      content: The content to store in the new node.
      Return value: A pointer to the new (allocated) node
      The variable ’next’ is initialized to NULL.

    • ft_lstmap - Prototype: t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
      lst: The address of a pointer to a node.
      f: The address of the function applied to each node’s content.
      del: The address of the function used to delete a node’s content if needed.
      Return value: The new list, NULL if the allocation fails.
      Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications
      of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
      External functs.: free
