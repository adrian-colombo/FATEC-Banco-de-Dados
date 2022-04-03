package bean;

public class MotorTurbo extends Motor {
	
	public MotorTurbo() {
		super();
	}

	public MotorTurbo(int velocidade, int marchar) {
		super(velocidade, marchar);
	}

	public int acelerar() {
		this.setVelocidade(super.acelerar() + 10);
		
		return getVelocidade();
	}
	
	public int freiar() {
		this.setVelocidade(super.freiar() - 10);
		
		return getVelocidade();
		
		
	}

	public void setVelocidade(int velocidade) {
		if (velocidade < 0) {
			this.velocidade = 0;

		} else if (velocidade > 300) {
			this.velocidade = 300;

		} else {
			this.velocidade = velocidade;
		}
}
}
