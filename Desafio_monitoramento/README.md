# Monitoramento de Temperaturas

## 1. Identificação

**Aluno:** Davi de Araújo Moura da Silva
**Disciplina:** Algoritmos e Pensamento Computacional
**Professora:** Profa. Karla Sartin
**Título do projeto:** Monitoramento de Temperaturas

---

## 2. Objetivo

O objetivo do projeto é desenvolver um programa em linguagem C capaz de realizar o monitoramento de temperaturas informadas pelo usuário.

O programa realiza a leitura das temperaturas, verifica se os valores estão dentro dos limites estabelecidos e acompanha a ocorrência de temperaturas acima do limite permitido. O monitoramento é encerrado automaticamente quando a condição determinada pelo desafio é atingida.

---

## 3. Funcionamento do programa

O programa trabalha com um limite de temperatura definido de acordo com as regras do desafio.

As temperaturas são informadas pelo usuário uma por vez através do teclado. A cada leitura, o programa verifica o valor recebido e realiza o tratamento correspondente.

### Limite de temperatura

O intervalo considerado válido para as temperaturas é de **-25 °C até 100 °C**.

Valores abaixo de -25 °C ou acima de 100 °C são considerados inválidos para a leitura normal.

### Leituras

As temperaturas são digitadas pelo usuário individualmente. O programa utiliza uma estrutura de repetição para continuar realizando novas leituras enquanto as condições do monitoramento forem atendidas.

### Tratamento de valores inválidos

Quando uma temperatura está fora do intervalo permitido, o programa identifica a entrada como inválida e realiza o tratamento definido pelo desafio.

### Temperaturas acima do limite

Temperaturas superiores ao limite estabelecido são identificadas durante a leitura.

O programa mantém uma contagem das ocorrências consecutivas de temperaturas acima do limite, permitindo diferenciar ocorrências isoladas de uma sequência de temperaturas acima do limite.

### Contagem de temperaturas consecutivas

A cada temperatura acima do limite, o contador de temperaturas consecutivas é incrementado.

Quando uma temperatura dentro do limite é registrada, a sequência de temperaturas acima do limite é interrompida e o contador é reiniciado.

Dessa forma, o programa consegue identificar quando ocorre uma sequência de três temperaturas consecutivas acima do limite.

### Condição de encerramento

O monitoramento é encerrado automaticamente quando são identificadas **três temperaturas consecutivas acima do limite estabelecido**.

---

## 4. Estruturas de repetição utilizadas

### `while`

A estrutura `while` é utilizada para repetir o processo de leitura e análise das temperaturas enquanto a condição de monitoramento for verdadeira.

Sua utilização permite que o programa continue recebendo temperaturas sem precisar repetir manualmente o código de leitura.

Exemplo de estrutura utilizada:

```c
while (condicao) {
    // leitura e processamento
}
```



## 5. Como executar

Primeiramente, é necessário ter o compilador GCC instalado.

No terminal, entre na pasta onde está localizado o arquivo `monitoramento.c`.

### Compilação

Execute:

```bash
gcc monitoramento.c -o monitoramento
```

### Execução

No Linux ou macOS:

```bash
./monitoramento
```

No Windows:

```bash
monitoramento.exe
```

---

## 6. Testes realizados

### Teste 1 — Validação de entradas inválidas

**Objetivo:** verificar se o programa identifica corretamente valores que estão fora do intervalo permitido.

**Exemplo de entrada:**

```text
150
```

**Resultado esperado:**

O programa deve identificar a entrada como inválida e realizar o tratamento correspondente definido pelo desafio.

---

### Teste 2 — Temperaturas acima do limite, porém não consecutivas

**Objetivo:** verificar se o contador de temperaturas acima do limite é reiniciado quando uma temperatura dentro do limite é registrada.

**Exemplo de entrada:**

```text
120
80
130
90
150
```

Nesse cenário, as temperaturas acima do limite não aparecem três vezes consecutivamente.

**Resultado esperado:**

O programa deve identificar as temperaturas acima do limite, mas não deve encerrar o monitoramento por três ocorrências consecutivas.

---

### Teste 3 — Três temperaturas consecutivas acima do limite

**Objetivo:** verificar se o programa encerra automaticamente após identificar três temperaturas consecutivas acima do limite.

**Exemplo de entrada:**

```text
120
130
150
```

**Resultado esperado:**

Após a terceira temperatura consecutiva acima do limite, o programa deve encerrar automaticamente o monitoramento.

---

## Observação

Os testes foram definidos para verificar principalmente:

* validação das temperaturas;
* identificação de valores acima do limite;
* contagem de ocorrências consecutivas;
* reinicialização da contagem quando necessário;
* encerramento automático após três ocorrências consecutivas.

## 7. Justificativa da escolha do `while`

Foi escolhida a estrutura de repetição `while` porque o número de temperaturas que serão analisadas não é necessariamente conhecido antecipadamente. O monitoramento deve continuar enquanto a condição de continuidade for verdadeira e pode ser encerrado quando uma condição específica for atingida.

Diferentemente do `for`, que é mais adequado quando existe uma quantidade de repetições previamente definida, o `while` permite que o programa continue realizando novas leituras de acordo com as condições do monitoramento.

Dessa forma, o `while` torna a lógica do programa mais adequada para um sistema que precisa analisar continuamente as temperaturas até que a condição de encerramento seja atingida.
