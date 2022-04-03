
public class CalculadoraCientifica extends CalculadoraBasica {
	
	public double raiz (double a) {
		return Math.sqrt(a);

	}
	
	public double potencia (double a, double b) {
		return Math.pow(a, b);
	}
	
	public void mostrar(double a, double b) {
		System.out.println("-- Calculadora Basica --");
		System.out.println("Soma: " + a + " + " + b + " = " + soma(a,b));
	    System.out.println("Subtracao: " + a + " - " + b + " = " + subtracao(a,b));
	    System.out.println("Produto: " + a + " x " + b + " = " + produto(a,b));
	    try {
	    	System.out.println("Divisao: " + a + " / " + b + " = " + divisao(a,b));
	    } catch (Exception e) {
	        System.out.println("Divisao: " + a + " / " + b + " = Eh impossivel dividir por 0!");
	    }
	    System.out.println();
		System.out.println("-- Calculadora Cientifica --");
		System.out.printf("Raiz: V" + a + " = %.2f" , raiz(a));
		System.out.println();
		System.out.printf("Potencia: "+ a + " ^ " + b + " = %.2f" , potencia(a,b));
	}	
}