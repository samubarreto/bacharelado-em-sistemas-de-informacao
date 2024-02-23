## MER - Modelo entidade relacionamento composto por:

- **Entidades** (tabelas, todas precisam de um pk) representado por **RETÂNGULO:**

  - Entidade dependente: Uma entidade que tem sua existência vinculada a outra.

- **Atributos** (colunas, atributos dum registro duma entidade), ex: nome, descrição, idade, endereço de entrega, depende dos requisitos do sistema. Representado por **ELÍPSE:**

  - Tipos de atributos:
    - Chave (Key, Primary key, Identificador único): Identifica uma instância (linha, registro, valor) sem erro, ex: cpf, cnpj..
    - Descritor: Não chave, descrevem características não únicas, ex: nome, idade..
      - Descritor simples: Nenhuma característica especial, ex: nome, idade..
      - Descritor composto: Formado por itens menores, ex: Endereço é formado por rua, número, bairro, cep..
    - Multivalorado: Pode ser formado por mais de uma informação ou não: email/emails, telefone/telefones.. (*telefone, *email)

- **Relacionamentos:** Representado por um **LOSANGO:**

  - Um-Para-Um: Cada instância da entidade 1 se relaciona com uma instância de 2;
  - Um-Para-Vários: Cada instância da entidade 1 se relaciona com uma ou mais instâncias de 2;
  - Vários-Para-Vários: Várias instâncias da entidade 1 se relacionam com várias instâncias de 2;
  - Dois relacionamentos: Uma entidade pode ter mais de um relacionamento com outra entidade;
  - Relacionamento ternário: Liga 3 entidades, 3 tabelas;
  - Auto-relacionamento: Uma entidade que pode se relacionar com ela mesmo;
  - Relacionamento É-Um: Triângulo ou meia-lua, ex: cliente é um pf e pj ao mesmo tempo com atributos diferentes pra cada um desses seus perfis;
  - Agregação: Quando necessário relacionar relacionamentos a entidades

- Exemplo de MER:

  - Entidade: Pessoa;
    - Atributos: CPF, Nome, Endereço (CEP, Rua, Logradouro, Número, Complemento, Cidade, UF...);

- Outros:

  - yyyy-mm-dd - aaaa-mm-dd
  - movimfinanceiro: movimentações monetárias

---

## DER - Diagrama entidade relacionamento

- losango preenchido: not null constraint
- pé de galinha: vários, N; 2 riscos: um
