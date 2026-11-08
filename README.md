# Engineering Workspace

Workspace modular dedicado ao desenvolvimento, experimentação e implementação de projetos de engenharia de software e ciência da computação.

## Filosofia

- **Isolamento por Domínio:** Cada área da computação reside em um diretório de topo independente na raiz do repositório.
- **Projetos Autocontidos:** Todo subprojeto possui seu próprio sistema de build, cabeçalhos, testes e documentação local, sem dependências implícitas entre projetos distintos.
- **Rigor Técnico:** Compilação sob flags estritas (`-Wall -Wextra -Werror -pedantic`), gerenciamento explícito de recursos e foco em performance, previsibilidade e conformidade com padrões.

## Índice de Domínios Ativos

| Domínio | Diretório | Escopo |
| :--- | :--- | :--- |
| **Low-Level & Systems Programming** | [`systems-programming/`](./systems-programming/) | Gerenciamento de memória, concorrência, syscalls, redes baixo nível e estruturas próximas ao hardware. |
| **42 School** | [`42/`](./42/) | Currículo e projetos da 42 (`C Piscine/`: `shell00`–`shell01`, `c00`–`c13` sob padrões estritos da Norminette e Moulinette). |

## Padrão de Escalabilidade

### 1. Adição de um Novo Projeto em Domínio Existente
Copie o esqueleto `_template/` do respectivo domínio para um novo diretório em `kebab-case`:

```bash
cp -r <dominio>/_template <dominio>/<nome-do-projeto>
```

### 2. Adição de um Novo Domínio (Categoria)
Novas categorias (ex.: `compilers/`, `algorithms/`, `distributed-systems/`) devem ser adicionadas diretamente na raiz do workspace, lado a lado com os domínios existentes, seguindo a estrutura mínima:

```text
<novo-dominio>/
├── README.md     # Escopo técnico, toolchain exigida e convenções de build do domínio
└── _template/    # Esqueleto base padronizado para novos projetos da categoria
```

