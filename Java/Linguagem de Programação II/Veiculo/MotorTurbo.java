
public class MotorTurbo extends Motor {

	public void setVelocidade(int velocidade) {
		if (velocidade >= 0 && velocidade <= 300) {
			this.velocidade = velocidade;
		}
	}

	public void acelerar() {
		super.acelerar();
		super.acelerar();
	}

	public void freiar() {
		super.freiar();
		super.freiar();
	}
	
}
