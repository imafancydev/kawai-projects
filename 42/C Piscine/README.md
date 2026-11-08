# 42 C Piscine

Estrutura completa de diretórios de entrega (*turn-in directories*) extraída dos 16 *subjects* oficiais (`en.subject.pdf`) presentes no vault do Obsidian (`42/Pool/C Pool/`).

## Mapa de Módulos e Exercícios

### Shell (`shell00` – `shell01`)

| Módulo | Diretórios | Entregas Principais |
| :--- | :--- | :--- |
| `shell00/` | `ex00` .. `ex09` | `z`, `testShell00.tar`, `exo2.tar`, `id_rsa_pub`, `midLS`, `git_commit.sh`, `git_ignore.sh`, `b`, `clean`, `ft_magic` |
| `shell01/` | `ex00` .. `ex08` | `print_groups.sh`, `find_sh.sh`, `count_files.sh`, `MAC.sh`, `"\?$*'MaRViN'*$?\"`, `skip.sh`, `r_dwssap.sh`, `add_chelou.sh` |

### C Piscine (`c00` – `c13`)

| Módulo | Diretórios | Foco Técnico | Arquivos de Entrega (`ex00` .. `exNN`) |
| :--- | :--- | :--- | :--- |
| `c00/` | `ex00` .. `ex08` | `write`, loops `while`, ASCII e combinatória | `ft_putchar.c`, `ft_print_alphabet.c`, `ft_print_reverse_alphabet.c`, `ft_print_numbers.c`, `ft_is_negative.c`, `ft_print_comb.c`, `ft_print_comb2.c`, `ft_putnbr.c`, `ft_print_combn.c` |
| `c01/` | `ex00` .. `ex08` | Ponteiros, desreferenciação e arrays de `int` | `ft_ft.c`, `ft_ultimate_ft.c`, `ft_swap.c`, `ft_div_mod.c`, `ft_ultimate_div_mod.c`, `ft_putstr.c`, `ft_strlen.c`, `ft_rev_int_tab.c`, `ft_sort_int_tab.c` |
| `c02/` | `ex00` .. `ex12` | Manipulação de strings e dump de memória | `ft_strcpy.c`, `ft_strncpy.c`, `ft_str_is_alpha.c`, `ft_str_is_numeric.c`, `ft_str_is_lowercase.c`, `ft_str_is_uppercase.c`, `ft_str_is_printable.c`, `ft_strupcase.c`, `ft_strlowcase.c`, `ft_strcapitalize.c`, `ft_strlcpy.c`, `ft_putstr_non_printable.c`, `ft_print_memory.c` |
| `c03/` | `ex00` .. `ex05` | Comparação, concatenação e busca em strings | `ft_strcmp.c`, `ft_strncmp.c`, `ft_strcat.c`, `ft_strncat.c`, `ft_strstr.c`, `ft_strlcat.c` |
| `c04/` | `ex00` .. `ex05` | Conversão numérica e bases (`atoi`, `putnbr_base`) | `ft_strlen.c`, `ft_putstr.c`, `ft_putnbr.c`, `ft_atoi.c`, `ft_putnbr_base.c`, `ft_atoi_base.c` |
| `c05/` | `ex00` .. `ex08` | Iteração vs. Recursão, números primos e *backtracking* | `ft_iterative_factorial.c`, `ft_recursive_factorial.c`, `ft_iterative_power.c`, `ft_recursive_power.c`, `ft_fibonacci.c`, `ft_sqrt.c`, `ft_is_prime.c`, `ft_find_next_prime.c`, `ft_ten_queens_puzzle.c` |
| `c06/` | `ex00` .. `ex03` | Argumentos de linha de comando (`argc`, `argv`) | `ft_print_program_name.c`, `ft_print_params.c`, `ft_rev_params.c`, `ft_sort_params.c` |
| `c07/` | `ex00` .. `ex05` | Alocação dinâmica de memória (`malloc`, `free`) | `ft_strdup.c`, `ft_range.c`, `ft_ultimate_range.c`, `ft_strjoin.c`, `ft_convert_base.c` + `ft_convert_base2.c`, `ft_split.c` |
| `c08/` | `ex00` .. `ex05` | Headers (`.h`), macros, `typedef` e `struct` | `ft.h`, `ft_boolean.h`, `ft_abs.h`, `ft_point.h`, `ft_strs_to_tab.c`, `ft_show_tab.c` |
| `c09/` | `ex00` .. `ex02` | Bibliotecas estáticas (`libft.a`) e `Makefile` | `ex00/` (`libft_creator.sh` + `.c`), `ex01/` (`Makefile`, `srcs/`, `includes/`), `ex02/` (`ft_split.c`) |
| `c10/` | `ex00` .. `ex03` | File descriptors (`open`, `read`, `close`, `errno`) | `ex00/` (`ft_display_file`), `ex01/` (`ft_cat`), `ex02/` (`ft_tail`), `ex03/` (`ft_hexdump`) — todos com `Makefile`, `srcs/` e `includes/` |
| `c11/` | `ex00` .. `ex07` | Ponteiros para função (`function pointers`) | `ft_foreach.c`, `ft_map.c`, `ft_any.c`, `ft_count_if.c`, `ft_is_sort.c`, `ex05/` (`do-op` com `Makefile`, `srcs/`, `includes/`), `ft_sort_string_tab.c`, `ft_advanced_sort_string_tab.c` |
| `c12/` | `ex00` .. `ex17` | Listas encadeadas (`t_list`, `ft_list.h`) | `ft_create_elem.c`, `ft_list_push_front.c`, `ft_list_size.c`, `ft_list_last.c`, `ft_list_push_back.c`, `ft_list_push_strs.c`, `ft_list_clear.c`, `ft_list_at.c`, `ft_list_reverse.c`, `ft_list_foreach.c`, `ft_list_foreach_if.c`, `ft_list_find.c`, `ft_list_remove_if.c`, `ft_list_merge.c`, `ft_list_sort.c`, `ft_list_reverse_fun.c`, `ft_sorted_list_insert.c`, `ft_sorted_list_merge.c` |
| `c13/` | `ex00` .. `ex07` | Árvores binárias (`t_btree`, `ft_btree.h`) | `btree_create_node.c`, `btree_apply_prefix.c`, `btree_apply_infix.c`, `btree_apply_suffix.c`, `btree_insert_data.c`, `btree_search_item.c`, `btree_level_count.c`, `btree_apply_by_level.c` |

## Compilação e Testes Locais

A Moulinette compila os arquivos de entrega com:

```bash
cc -Wall -Wextra -Werror <arquivos.c> -o test_bin
```

> **Atenção**: Não comite funções `main()` nos exercícios que pedem apenas a implementação da função (como `c00` a `c05`, `c07`, `c08`, `c11` exceto `ex05`, `c12`, `c13`), nem binários compilados.

