package bean;

public class Motor {

	protected int velocidade;
	private int marcha;

	public Motor() {
		this.setVelocidade(0);
		this.setMarcha(0);
	}

	public Motor(int velocidade, int marchar) {
		this.setVelocidade(velocidade);
		this.setMarcha(marchar);
	}
	
	public void mostrar() {
		System.out.println("Carro: ");
		System.out.println("Velocidade: " + this.getVelocidade());
		System.out.println("Marcha: " + this.getMarcha());
	}

	public int acelerar() {
		if (this.getMarcha() == 0) {
			setMarcha(1);
		}
		return this.getVelocidade() + 10;
	}

	public int freiar() {
		return this.getVelocidade() - 10;
	}

	public int mudarMarcha(char troca) {
		if (troca == '+') {
			this.setMarcha(this.getMarcha() + 1);
		} else if (troca == '-') {
			this.setMarcha(this.getMarcha() - 1);
		} else {
			System.out.println("Valor inválido - insera '+' ou '-'");
		}

		return this.getMarcha();

	}

	public int getVelocidade() {
		return velocidade;
	}

	public void setVelocidade(int velocidade) {
		if (velocidade < 0) {
			this.velocidade = 0;

		} else if (velocidade > 220) {
			this.velocidade = 220;

		} else {
			this.velocidade = velocidade;
		}
	}

	public int getMarcha() {
		return marcha;
	}

	public void setMarcha(int marcha) {
		if (marcha < -1) {
			this.marcha = -1;
		} else if (marcha > 5) {
			this.marcha = 5;
		} else {
			this.marcha = marcha;
		}
	}

}
