import java.util.Scanner;

public class Principal {

	public static void main(String[] args) {
		MotorTurbo mt = new MotorTurbo();
		mt.ligar();
		//mt.mostrar();
		for (int i=0; i<17; i++) {
			mt.acelerar();
			//mt.mostrar();
		}
		mt.mostrar();
		for (int i=0; i<17; i++) {
			mt.freiar();
			mt.mostrar();
		}
		/*
		MotorAutomatico ma = new MotorAutomatico();
		ma.ligar();
		//ma.mostrar();
		for (int i=0; i<25; i++) {
			ma.acelerar();
			//ma.mostrar();
		}
		ma.mostrar();
		for (int i=0; i<25; i++) {
			ma.freiar();
			ma.mostrar();
		}
		*/
		/*
		Motor m = new Motor();
		//m.mostrar();
		for (int i=0; i<25; i++) {
			//m.acelerar();
			//m.mostrar();
		}
		//m.mostrar();
		for (int i=0; i<25; i++) {
			//m.freiar();
			//m.mostrar();
		}
		//m.mostrar();
		for (int i=0; i<7; i++) {
			//m.mudarMarcha('+');
			//m.mostrar();
		}
		//m.mostrar();
		for (int i=0; i<7; i++) {
			//m.mudarMarcha('-');
			//m.mostrar();
		}
		//m.mostrar();
		for (int i=0; i<25; i++) {
			//m.acelerar();
			//m.mudarMarcha('+');
			//m.mostrar();
		}
		*/
	}

}
