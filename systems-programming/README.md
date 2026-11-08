# Low-Level & Systems Programming

Módulo dedicado a implementações em nível de sistema operacional, runtime e arquitetura de computadores.

## Escopo Técnico

- **Gerenciamento de Memória:** Alocadores customizados (arena, slab, pool, buddy), alinhamento em memória, paginação, mapeamento virtual (`mmap`/`sbrk`) e prevenção de fragmentação.
- **Concorrência e Paralelismo:** Multithreading POSIX (`pthreads`), primitivas de sincronização, estruturas lock-free, operações atômicas, modelos de memória e IPC (shared memory, pipes, message queues).
- **Chamadas de Sistema (Syscalls):** Interface direta com o kernel, controle de processos, manipulação de descritores de arquivo, sinais, I/O multiplexado (`select`, `poll`, `epoll`) e assíncrono (`io_uring`).
- **Redes de Baixo Nível:** Programação com sockets BSD/POSIX, raw sockets, parsing de protocolos binários, zero-copy I/O e controle de buffers de rede.
- **Estruturas Próximas ao Hardware:** Layouts de dados orientados a cache (Data-Oriented Design), manipulação de bits, intrínsecos SIMD e inspeção de binários (ELF/ABI).

## Criação de Novo Projeto

Utilize o diretório `_template/` para inicializar um novo projeto isolado:

```bash
cp -r _template <nome-do-projeto>
cd <nome-do-projeto>
```

## Instruções de Build

Todo projeto segue a interface padrão definida no `Makefile`:

| Comando | Descrição |
| :--- | :--- |
| `make` ou `make all` | Compila o projeto em modo release (`-O2`) com checagens estritas (`-Wall -Wextra -Werror -pedantic -std=c11`). |
| `make debug` | Compila com símbolos de depuração (`-g3 -O0`) e sanitizers (`AddressSanitizer`, `UndefinedBehaviorSanitizer`). |
| `make run` | Compila (se necessário) e executa o binário principal gerado em `bin/`. |
| `make clean` | Remove os diretórios `build/` e `bin/` e todos os artefatos de compilação. |

