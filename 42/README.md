# 42 School

Módulo dedicado ao currículo e projetos da **42**, alinhado à estrutura mapeada no vault do Obsidian (`Notas/42/` e `42/Pool/C Pool/`).

## Estrutura do Domínio

| Submódulo | Status | Escopo |
| :--- | :--- | :--- |
| `C Piscine/` | Ativo | Imersão intensiva em Shell e linguagem C (`shell00`–`shell01`, `c00`–`c13`). |

*(Futuras fases mapeadas no vault — `common-core/`, `unix-branch/` e `specialization/` — serão adicionadas lado a lado conforme progressão).*

## Padrões Técnicos (Moulinette & Norminette)

- **Compilador e Flags**: `cc -Wall -Wextra -Werror`
- **Norminette (v3)**:
  - Indentação obrigatória com **tabs reais** (`\t`, largura visual 4) — já configurada automaticamente em `.editorconfig` para `42/**.{c,h}`.
  - Máximo de **25 linhas** por função e **80 colunas** por linha.
  - Máximo de **5 funções** por arquivo `.c` e **4 parâmetros** por função.
  - Declarações de variáveis no topo da função (máximo de 5 variáveis por bloco), separadas do código por uma linha em branco e sem inicialização na mesma linha da declaração.
  - Proibido o uso de `for`, `do...while`, `switch`, `case`, `goto`, operadores ternários (`? :`) e VLAs (arrays de tamanho variável).
- **Verificação rápida**:
  ```bash
  norminette -R CheckForbiddenSourceHeader
  # Para exercícios com macros/headers (ex: c08):
  norminette -R CheckDefine
  ```

