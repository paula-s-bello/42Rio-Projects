# Projetos da 42

Este repositório reúne meus projetos desenvolvidos durante o curso da **42**, uma escola de programação com metodologia baseada em aprendizado prático, projetos e avaliação entre pares.

Aqui você encontrará implementações em **C** (principalmente), seguindo as **normas da 42 (Norminette)**, com foco em lógica, gerenciamento de memória, algoritmos e boas práticas de programação.

---

## Sobre a 42

A 42 é uma escola de programação sem professores ou aulas tradicionais. O aprendizado acontece por meio de:

* Projetos práticos
* Avaliações peer-to-peer
* Autonomia e colaboração

Todos os projetos seguem regras rigorosas, incluindo:

* Uso limitado de bibliotecas
* Proibição de funções prontas
* Código limpo e normatizado

---

## Estrutura do Repositório

Cada pasta corresponde a um projeto do cursus da 42:

```bash
.
├── libft/
├── ft_printf/
├── get_next_line/
├── born2beroot/
└── ...
```

Dentro de cada projeto você encontrará:

* Código-fonte (`*.c`, `*.h`)
* `Makefile`
* README específico (quando aplicável)

---

## Projetos

### 🔹 Libft

Biblioteca pessoal em C que reimplementa funções da libc e funções auxiliares.

* Strings
* Memória
* Listas encadeadas

### 🔹 ft_printf

Reimplementação da função `printf` da libc.

* Uso de variadic functions
* Conversões de formato
* Gerenciamento de buffer e contagem de caracteres

### 🔹 get_next_line

Função que lê uma linha de um file descriptor por chamada.

* Manipulação de arquivos
* Buffers estáticos
* Alocação dinâmica

### 🔹 Born2BeRoot

Projeto de administração de sistemas.

* Máquina virtual
* Linux
* Segurança e permissões

*(Outros projetos serão adicionados conforme avanço no cursus)*

---

## Compilação

A maioria dos projetos utiliza `Makefile`. Para compilar:

```bash
make
```

Para limpar arquivos objeto:

```bash
make clean
```

Para limpar tudo:

```bash
make fclean
```

---

## Normas

Todos os códigos seguem:

* **Norminette da 42**
* Flags de compilação:

```bash
-Wall -Wextra -Werror
```

---

## Objetivo

Este repositório tem como objetivo:

* Documentar minha evolução na 42
* Servir como referência pessoal
* Demonstrar minha base em C e lógica de programação

---

## ‍💻 Autora

**Paula Cristina - pdos-san**
Estudante da 42

---

*Este repositório está em constante atualização.*
