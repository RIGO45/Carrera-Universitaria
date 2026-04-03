import java.util.Scanner;

class Cero extends Exception {
    public Cero(String mensaje) {
        super(mensaje);
    }
}

class Division {
    double numero1;
    double numero2;

    void login(int numero2) throws Cero {
        if (numero2 == 0) {
            throw new Cero("\nError matemático");
        }
    }
}

public class DivisionMain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Division div = new Division();

        System.out.println("=== Bienvenido al divisor de números ===\n");
        System.out.println("A continuación ingrese el primer número");
        double numero1 = sc.nextDouble();
        System.out.println("\nA continuación ingrese el segundo número");
        double numero2 = sc.nextDouble();

        try {
            div.login((int) numero2);
            double resultado = numero1 / numero2;
            System.out.println("\nEl resultado de la división es: " + resultado);
        } catch (Cero e) {
            System.out.println(e.getMessage());
        }
        sc.close();
        System.out.println("\nFin del programa");
    }
}
