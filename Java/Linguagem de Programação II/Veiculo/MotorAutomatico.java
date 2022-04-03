
public class MotorAutomatico extends Motor {
	
	private int rpm;
	
	public MotorAutomatico() {
		super();
		setRPM(0);
	}

	public int getRPM() {
		return rpm;
	}

	public void setRPM(int rpm) {
		if (rpm >= 0 && rpm <= 5000) {
			this.rpm = rpm;
		}
	}

	public void acelerar() {
		if (!isVelMax()) {
			super.acelerar();
			if (getRPM() == 5000) {
				mudarMarcha('+');
				setRPM(1000);
			} else {
				setRPM(getRPM() + 1000);
			}
		}
	}

	public void freiar() {
		if (!isParado()) {
			super.freiar();
			setRPM(getRPM() - 1000);
			if (getRPM() == 0) {
				mudarMarcha('-');
				setRPM(5000);
			}
		}
	}

	public void ligar() {
		super.ligar();
		setRPM(1000);
	}

	public void mostrar() {
		super.mostrar();
		System.out.println("       RPM = " + getRPM());
	}
	
}
