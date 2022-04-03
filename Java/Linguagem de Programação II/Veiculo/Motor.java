
// 1. classe
public class Motor {
	
	// 2. atributo
	protected int velocidade;
	private int marcha;
	private final int VELMAX = 220;
	
	// 5. construtor
	public Motor() {
		setVelocidade(0);
		setMarcha(0);
	}
	
	// 3. encapsulamento
	public int getVelocidade() {
		return velocidade;
	}
	public void setVelocidade(int velocidade) {
		// 4. validacao
		if (velocidade >= 0 && velocidade <= VELMAX) {
			this.velocidade = velocidade;
		}
	}
	public int getMarcha() {
		return marcha;
	}
	public void setMarcha(int marcha) {
		// 4. validacao
		if (marcha >= -1 && marcha <= 5) {
			this.marcha = marcha;
		}
	}
	public boolean isVelMax() {
		if (getVelocidade() == VELMAX) {
			return true;
		} else {
			return false;
		}
	}
	public boolean isParado() {
		if (getVelocidade() == 0) {
			return true;
		} else {
			return false;
		}
	}
	
	// 6. metodo
	public void acelerar() {
		setVelocidade(getVelocidade() + 10);
	}
	public void freiar() {
		setVelocidade(getVelocidade() - 10);
	}
	public void mudarMarcha(char op) {
		if (op == '+') {
			setMarcha(getMarcha() + 1);
		} else {
			setMarcha(getMarcha() - 1);
		}
	}
	public void ligar() {
		setMarcha(1);
	}
	public void mostrar() {
		System.out.println("Velocidade = " + getVelocidade());
		System.out.println("    Marcha = " + getMarcha());
	}
	
}
