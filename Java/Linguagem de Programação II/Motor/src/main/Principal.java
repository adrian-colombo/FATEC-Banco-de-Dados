package main;

import bean.Motor;
import bean.MotorAutomatico;
import bean.MotorTurbo;

public class Principal {

	public static void main(String[] args) {
		Motor motor1 = new Motor();
		motor1.acelerar();
		motor1.mudarMarcha('+');
		motor1.mostrar();

		System.out.println("====================\nAUTOMATICO:\n");
		MotorAutomatico motorAut = new MotorAutomatico();
		motorAut.acelerar();
		motorAut.mostrar();

		System.out.println("====================\nTURBO:\n");
		MotorTurbo motorTurbo = new MotorTurbo();
		motorTurbo.acelerar();
		motorTurbo.mostrar();
		motorTurbo.mudarMarcha('+');
		motorTurbo.mostrar();
		motorTurbo.freiar();
		motorTurbo.mostrar();

	
	for(int i=0; i<10;i++) {
		motorTurbo.acelerar();
	}
		motorTurbo.mostrar();
}
}
