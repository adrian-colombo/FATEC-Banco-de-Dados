
// 1. classe
public class Dado {
	
	// 2. atributos
	// 3. encapsulamento
	private int face;
	
	// 5. construtor
	public Dado(int face) {
		setFace(face);
	}
	
	// 5. construtor
	public Dado() {
		setFace(2);
	}

	// 3. encapsulamento
	public int getFace() {
		return face;
	}

	// 3. encapsulamento
	public void setFace(int face) {
		// 4. validação
		if (face < 2) {
			this.face = 2;
		} else {
			this.face = face;
		}
	}
	
	// 6. métodos
	public int jogar() {
		return (int)(Math.floor(Math.random() * getFace()) + 1);
	}
	
}
