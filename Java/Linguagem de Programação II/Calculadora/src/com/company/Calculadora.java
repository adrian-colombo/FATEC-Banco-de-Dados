package com.company;
/*
 01)	Extenda a classe Calculadora e crie uma calculadora b�sica na classe CalculadoraBasica.
 02)	Extenda   a   classe   CalculadoraBasica   e   cria   uma   calculadora   cient�fica   na   classeCalculadoraCientifica.
 		Na calculadora cient�fica utilize a classe Math para fazer a raiz quadrada e a pot�ncia.
 03)	Fa�a  um  programa  que  crie  uma  inst�ncia  da  CalculadoraCientifica  e  utilize  todos  os m�todos da 
 		classe CalculadoraCientifica.		*/

public abstract class Calculadora {
    public abstract double soma(double a, double b);
    public abstract double subtracao(double a, double b);
    public abstract double produto(double a, double b);
    public abstract double divisao(double a, double b) throws Exception;

    protected double a;
    protected double b;

    public void setA(double a) {
        this.a = a;
    }

    public void setB(double b) {
        this.b = b;
    }


}

