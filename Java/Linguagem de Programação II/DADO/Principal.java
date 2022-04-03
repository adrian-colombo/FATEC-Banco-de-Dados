
public class Principal {

	public static void main(String[] args) {
		
		Dado d1 = new Dado();
		for (int i=1; i<=5; i++) {
			System.out.println(d1.jogar());
		}
		
		Dado d2 = new Dado(6);
		for (int i=1; i<=5; i++) {
			System.out.println(d2.jogar());
		}
		
	}

}
