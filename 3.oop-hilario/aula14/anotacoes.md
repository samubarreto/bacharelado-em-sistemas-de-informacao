# 22/05/2024 - Interfaces e Pacotes

* Interfaces
  * Obriga outras classes a terem determinados métodos e/ou propriedades para existirem
  * Na interface declaramos o método de forma abstrata, somente com a assinatura, todos públicos

```java
interface Conta {
    void deposita(double valor);
    void saca(double valor);
}
```

```java
class ContaPoupanca implements Conta {

public void deposita(double valor) {
    //implementa
    }

public void saca(double valor) {
    //implementa
    }
}
```

Implements serve para herdar de interfaces, com vantagem de estabelecer a obrigatoriedade de algumas propriedades e métodos previamente definidas

* Classe abstrata
  * fornece métodos ou propriedadas e o código
* Interface
  * contém apenas assinaturas de métodos ou propriedades
* Pacotes
  * Pastas = pacotes, packages. Permite distribuir os .class e mesmo assim visualizá-los e usá-los citando-os no package
  * da pra criar packages dentro de packages, com pastas dentro de pastas
* Import
  * pra evitar escrever o nome do pacote sempre que necessário
