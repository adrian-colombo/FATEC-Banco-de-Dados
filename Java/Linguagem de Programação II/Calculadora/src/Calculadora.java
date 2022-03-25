/*
 01)	Extenda a classe Calculadora e crie uma calculadora básica na classe CalculadoraBasica.
 02)	Extenda   a   classe   CalculadoraBasica   e   cria   uma   calculadora   científica   na   classeCalculadoraCientifica.
 		Na calculadora científica utilize a classe Math para fazer a raiz quadrada e a potência.
 03)	Faça  um  programa  que  crie  uma  instância  da  CalculadoraCientifica  e  utilize  todos  os métodos da 
 		classe CalculadoraCientifica.		*/

public abstract class Calculadora {
	public abstract double soma(double a, double b);
	public abstract double subtracao(double a, double b);
	public abstract double produto(double a, double b);
	public abstract double divisao(double a, double b) throws Exception;
	}