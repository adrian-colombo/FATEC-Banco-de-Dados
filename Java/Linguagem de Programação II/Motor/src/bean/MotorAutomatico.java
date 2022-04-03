package bean;

public class MotorAutomatico extends Motor {

	private int rpm;

	public MotorAutomatico() {
		super();
	}

	public MotorAutomatico(int velocidade, int marchar) {
		super(velocidade, marchar);
		this.setRpm(0);
	}

	public int getRpm() {
		return rpm;
	}

	public void setRpm(int rpm) {
		this.rpm = rpm;
	}

	public int acelerar() {
		super.acelerar();
		this.setRpm(this.getRpm() + 1000);

		if (getRpm() >= 5000) {
			this.mudarMarcha('+');
			this.setRpm(0);
		}

		return this.getVelocidade();
	}

	public int freiar() {
		super.freiar();
		this.setRpm(this.getRpm() - 1000);
		
		if (this.getRpm() <= 0) {
			this.mudarMarcha('-');
			this.setRpm(0);
		}
		
		return this.getVelocidade();
	}
}
