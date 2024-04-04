## 27/03/2024 - Aula 7 - Continuação sobre Orientação a Objetos

* Sobrecarga de Métodos e Construtores
  * Métodos e Construtores com mesmo nome, basta trocar o nome ou a assinatura
  * Construtores não tem tipo de retorno, então é possível criar um método com mesmo nome do arquivo, desde que tenha tipo de retorno

Antes:

```java
public class Conta2 {
  private double saldo;

  public Conta2() {
  };

  public Conta2(double saldo) {
    this.saldo = saldo;
  };

  public static void main(String[] args) {
    Conta2 c1 = new Conta2();
    Conta2 c2 = new Conta2(100);
  }
}
```

Depois:

```java
public class Conta2 {
  private double saldo;

  public Conta2() {
  };

  public @Conta2(double saldo) {
    this.saldo = saldo;
  };

  public static void main(String[] args) {
    Conta2 c1 = new Conta2();
    Conta2 c2 = new Conta2(100);
  }
}

```

Resumo: Só não criar métodos, construtores, classes.. nem nada com nomes iguais, só isso.

* Override é uma anotação, que pode ser acrescentada a um método que foi sobreposto ("overridden") que deve ser usada para métodos sobrepostos.

##### A anotação `@Override` em Java é usada para indicar explicitamente que um método está substituindo um método da superclasse ou implementando um método de uma interface. Ela ajuda a evitar erros de sintaxe e lógica, fornecendo uma verificação adicional durante a compilação. O uso de `@Override` torna o código mais legível e ajuda a detectar problemas precocemente durante o desenvolvimento.

É pra conseguir usar 2 classes com nomes iguais, a segunda classe vai subscrever a primeira
