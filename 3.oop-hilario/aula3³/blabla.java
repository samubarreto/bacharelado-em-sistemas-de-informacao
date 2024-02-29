// public class retorno {
//   public static void main(String[] args) {
//     int[] numeros = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

//     System.out.println("Usando break:");
//     for (int numero : numeros) {
//       if (numero == 5) {
//         break; // Sai do loop quando encontra o número 5
//       }
//       System.out.println(numero);
//     }

//     System.out.println("\nUsando return:");
//     for (int numero : numeros) {
//       if (numero == 5) {
//         return; // Sai do método main quando encontra o número 5
//       }
//       System.out.println(numero);
//     }

//     System.out.println("\nUsando continue:");
//     for (int numero : numeros) {
//       if (numero % 2 == 0) {
//         continue; // Pula os números pares e continua para a próxima iteração
//       }
//       System.out.println(numero);
//     }
//   }
// }

public class blabla {
  public static void main(String[] args) {
    int contador = 0;
    while (contador <= 100) {
      System.out.printf("%d ", contador);
      contador++;
    }
  }
}
